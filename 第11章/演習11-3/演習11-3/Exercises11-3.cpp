/**
 * @file Exerises11-3.cpp
 * @brief ���K11-3	���K11-1�ō쐬���������N���X�ɑ}���q�ƒ��o�q��ǉ�����B
 * @author shitashige
 * @date 20200330
 */


#include <iostream>
#include"Exercises11-3.h"


 /**
  * @fn
  * GetHour
  * @brief ���Ԑݒ�
  * @return
  */
int Time::GetHour() const {
	return Time::hour;
}

/**
 * @fn
 * GetMinute
 * @brief ���ݒ�
 * @return
 */
int Time::GetMinute() const {
	return Time::minute;
}

/**
 * @fn
 * GetSecond
 * @brief �b�ݒ�
 * @return
 */
int Time::GetSecond() const {
	return Time::second;
}

/**
 * @fn
 * Time
 * @brief �R���X�g���N�^
 * @return
 */
Time::Time(int hour, int minute, int second) {
	/* ���Ԑݒ� */
	Time::hour = hour;
	/* ���ݒ� */
	Time::minute = minute;
	/* �b�ݒ� */
	Time::second = second;

}

/**
 * @fn
 * main
 * @brief ���C���֐�
 * @return
 */
int main() {
	/* �����ݒ� */
	Time time(11, 22, 33);

	/* ���b�Z�[�W�\�� */
	std::cout << "**:**:**�Ŏ�������";
	/* �������� */
	std::cin>> time;

	/* ���b�Z�[�W�\�� */
	std::cout<<time;

}


/**
 * @fn
 * operator
 * @brief ���o�q
 * @return
 */
std::ostream &operator<<(std::ostream &s, const Time &x) {
	return s<<x.GetHour()<<":"<<x.GetMinute()<<":"<<x.GetSecond();
}

/**
 * @fn
 * operator
 * @brief �}���q
 * @return
 */
std::istream &operator>>(std::istream &s, Time &x) {
	int hour;	// ����
	int minute;	// ��
	int second;	// �b
	char coron;	// �R����

	s>>hour>>coron>>minute>>coron>>second;

	x=Time(hour, minute,second);

	return s;
}