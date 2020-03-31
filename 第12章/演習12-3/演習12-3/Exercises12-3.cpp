/**
 * @file Exerises12-3.cpp
 * @brief ���K12-3	���K11-3�ō쐬���������N���X�ɁA�e��̉��Z�q�֐���ǉ�����B�d�l�Ȃǂ͎����ōl���邱�ƁB
 * @author shitashige
 * @date 20200331
 */


#include <iostream>
#include"Exercises12-3.h"


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
 * GetHour
 * @brief ���Ԑݒ�
 * @return
 */
void Time::SetHour(int hour) {
	/* ���Ԃ̍X�V */
	Time::hour = hour;
}

/**
 * @fn
 * GetMinute
 * @brief ���ݒ�
 * @return
 */
void Time::SetMinute(int minute) {
	/* ���̍X�V */
	Time::minute = minute;
}

/**
 * @fn
 * GetSecond
 * @brief �b�ݒ�
 * @return
 */
void Time::SetSecond(int second) {
	/* �b�̍X�V */
	Time::second = second;
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
 * operator+
 * @brief �����̑����Z
 * @return
 */
Time operator+(Time &x, Time &y) {
	Time cachetime(0, 0, 0); // �ꎞ�ۑ��^�C��

	/* ���Ԃ̑����Z */
	cachetime.SetHour(x.GetHour() + y.GetHour());

	/* ���̑����Z */
	cachetime.SetMinute(x.GetMinute() + y.GetMinute());

	/* �b�̑����Z */
	cachetime.SetSecond(x.GetSecond() + y.GetSecond());

	return cachetime;
}


/**
 * @fn
 * operator-
 * @brief �����̈����Z
 * @return
 */
Time operator-(Time &x, Time &y) {
	Time cachetime(0, 0, 0); // �ꎞ�ۑ��^�C��

	/* ���Ԃ̈����Z */
	cachetime.SetHour(x.GetHour() - y.GetHour());

	/* ���̈����Z */
	cachetime.SetMinute(x.GetMinute() - y.GetMinute());

	/* �b�̈����Z */
	cachetime.SetSecond(x.GetSecond() - y.GetSecond());

	return cachetime;
}



/**
 * @fn
 * main
 * @brief ���C���֐�
 * @return
 */
int main() {
	/* �����ݒ� */
	Time firstTime(0, 0, 0);
	Time secondTime(0, 0, 0);


	/* ���b�Z�[�W�\�� */
	std::cout << "**:**:**��1�ڂ̎�������";
	/* �������� */
	std::cin >> firstTime;


	/* ���b�Z�[�W�\�� */
	std::cout << "**:**:**��2�ڂ̎�������";
	/* �������� */
	std::cin >> secondTime;

	/* ���b�Z�[�W�\�� */
	std::cout << "�����܂���:" << firstTime + secondTime << "\n";

	/* ���b�Z�[�W�\�� */
	std::cout << "�����܂���:" << firstTime - secondTime << "\n";

}


/**
 * @fn
 * operator
 * @brief ���o�q
 * @return
 */
std::ostream &operator<<(std::ostream &s, const Time &x) {
	return s << x.GetHour() << ":" << x.GetMinute() << ":" << x.GetSecond();
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

	s >> hour >> coron >> minute >> coron >> second;

	x = Time(hour, minute, second);

	return s;
}