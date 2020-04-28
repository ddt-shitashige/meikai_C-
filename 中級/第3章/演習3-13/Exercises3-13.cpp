/**
 * @file Exerises3-13.cpp
 * @brief ���K3-13�@List3-19�́A���[�U�[���N/��/���̒�����I�񂾒l�𓖂Ă�������t���Q�[���ł������B�N/��/���̑S�Ă����̏��œ��Ă�����悤�ɕύX�����v���O�������쐬����B�Ȃ��A�S�Ă̒l��������܂ł́A�v���O�����͏I�����Ȃ����̂Ƃ���B
 * @author shitashige
 * @date 20200428
 */


#include<iostream>
#include"SimpleDate.h"

using namespace std;

int main() {

	/* �^����` */
	typedef int (SimpleDate::* Comp)(int)const;	// 
	Comp pcomp[] = {
		&SimpleDate::comp_y,
		&SimpleDate::comp_m,
		&SimpleDate::comp_d,
	};

	const SimpleDate birthday(1963, 11, 18);	// �a����

	/* ���b�Z�[�W�o�� */
	cout << "���̒a�����𓖂Ăĉ������B\n";

	int value;	// �l
	int diff;	// �����l
	int count = 0;	// �J�E���g
	/* ���b�Z�[�W�o�� */
	cout << "�N���������œ��͂��Ă��������B\n";

	do {
		/* ���b�Z�[�W�o�� */
		cout << "�������ȁF";
		/* ���b�Z�[�W���� */
		cin >> value;

		/* �������i�[ */
		diff = (birthday.*pcomp[count])(value);	

		/* �l�������������ꍇ */
		if (!diff) {
			/* ���b�Z�[�W�o�� */
			cout << "�����ł�\n";
			/* �J�E���g�C���N�������g */
			count++;
		}
		/* ���������������ꍇ */
		else if (diff > 0) {
			/* ���b�Z�[�W�o�� */
			cout << diff << "�����傫���ł�\n";
		}
		else {
			/* ���b�Z�[�W�o�� */
			cout << -diff << "�����������ł�\n";
		}
	} while (count != 3);
}