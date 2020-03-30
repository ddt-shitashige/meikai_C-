/**
 * @file Exerises11-2.cpp
 * @brief ���K11-2-	�N���XDate��2�łɒ��o�q��ǉ�����B
 * @author shitashige
 * @date 20200330
 */


#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"
using namespace std;


/**
 * @fn
 * Date
 * @brief �f�t�H���g�R���X�g���N�^
 * @return
 */
Date::Date() {
	time_t current = time(NULL);	// ���݂̎������擾
	struct tm *local = localtime(&current);	// �v�f�ʂ̎����ɕϊ�

	y = local->tm_year + 1900;	// �N�ݒ�
	m = local->tm_mon + 1;	// ���ݒ�
	d = local->tm_mday;	//���ݒ�
}

/**
 * @fn
 * Date
 * @brief �R���X�g���N�^
 * @return
 */
Date::Date(int yy, int mm, int dd) {
	y = yy;	// �N�ݒ�
	m = mm;	// ���ݒ�
	d = dd;	// ���ݒ�
}

/**
 * @fn
 * preceding_day
 * @brief �O���̓��t�ԋp
 * @return
 */
Date Date::preceding_day() const {
	int dmax[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	// ���̍ő�
	Date temp = *this;	// ����̓��t
	/* ���t��1���傫�������ꍇ�̏��� */
	if (temp.d > 1)
		/* �f�N�������g */
		temp.d--;
	/* ����ȊO�̏��� */
	else {
		/* ����1���������������ꍇ�̏��� */
		if (--temp.m < 1) {
			/* �N���f�N�������g */
			temp.y--;
			/* ����12�Œ� */
			temp.m = 12;
		}
		/* ���t��1���O�̍ő�l */
		temp.d = dmax[temp.m - 1];
	}
	return temp;
}

/**
 * @fn
 * to_string
 * @brief ������\����ԋp
 * @return
 */
string Date::to_string() const {

	ostringstream s;	// �o�̓X�g���[��
	/* �N�����ݒ� */
	s << y << "�N" << m << "��" << d << "��";

	return s.str();
}

/**
 * @fn
 * operator
 * @brief �o�̓X�g���[���ɐݒ�
 * @return
 */
ostream &operator<<(ostream &s, const Date &x) {
	return s << x.to_string();
}

/**
 * @fn
 * main
 * @brief ���o�q
 * @return
 */
istream &operator>>(istream &s, Date &x) {
	int year;	// �N
	int month;	// ��
	int day;	// ��
	char slash;	// �X���b�V��

	/* ���o */
	s >> year >> slash >> month >> slash >> day;

	/* �f�C�g�̃|�C���^�ɓ���� */
	x = Date(year, month, day);

	return s;
}


/**
 * @fn
 * main
 * @brief ���C���֐�
 * @return
 */
int main()
{
	Date x;	// �N���X��`
	/* ���b�Z�[�W�\�� */
	cout << "**/**/**�`��";
	/* ���� */
	cin >> x;
	/* ���ʕ\�� */
	cout << "���t �c " << x << '\n';
}