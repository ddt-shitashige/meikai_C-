/**
 * @file Exerises11-1.cpp
 * @brief ���K11-1-	���E���E�b�̃f�[�^�����o�ō\������鎞���N���X���쐬����B�R���X�g���N�^�⃁���o�֐��ɂ��ẮA���R�ɐ݌v���邱�ƁB
 * @author shitashige
 * @date 20200330
 */


#include <iostream>
#include"Exercises11-1.h"


/**
 * @fn
 * GetHour
 * @brief ���Ԑݒ�
 * @return
 */
int Time::GetHour() {
	return Time::hour;
}

/**
 * @fn
 * GetMinute
 * @brief ���ݒ�
 * @return
 */
int Time::GetMinute() {
	return Time::minute;
}

/**
 * @fn
 * GetSecond
 * @brief �b�ݒ�
 * @return
 */
int Time::GetSecond() {
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

	std::cout << "���݂̎�����" << time.GetHour() << "��" << time.GetMinute() << "��" << time.GetSecond() << "�b";

}