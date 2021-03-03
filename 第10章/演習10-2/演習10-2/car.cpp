/**
 * @file Exerises10-2.cpp
 * @brief ���K10-2	�����ԃN���XCar�Ƀf�[�^�����o�⃁���o�֐������R�ɒǉ�����i�i���o�[��\���f�[�^�����o��ǉ�����A�R���\���f�[�^�����o��ǉ�����A�ړ��ɂ��R���c�ʂ̌v�Z�ɔR��𔽉f������A�^���N�e�ʂ�\���f�[�^�����o��ǉ�����A�����̂��߂̃����o�֐���ǉ�����etc�c�j�B
 * @author shitashige
 * @date 20200330
 */

#include <iostream>

#include "car.h"

 /**
  * @fn
  * GetNumber
  * @brief �i���o�[�擾
  * @return
  */
char *Car::GetNumber() {
	return number;
}


/**
 * @fn
 * SetConsumption
 * @brief �R��ݒ�
 * @return
 */
void Car::SetConsumption(double consumption) {
	/* �R��ݒ� */
	Car::consumption = consumption;
	return;
}

/**
 * @fn
 * SetNumber
 * @brief �i���o�[�ݒ�
 * @return
 */
void Car::SetNumber(char *number) {

	/* �i���o�[�ύX */
	Car::number[0] = number[0];
	/* �i���o�[�ύX */
	Car::number[1] = number[1];
	/* �i���o�[�ύX */
	Car::number[2] = number[2];
	/* �i���o�[�ύX */
	Car::number[3] = number[3];
}

/**
 * @fn
 * Move
 * @brief �ړ�
 * @return
 */
void Car::Move(double distance) {
	/* ���s�������R�������� */
	Car::tank -= distance / Car::consumption;

	/* �R�����s�����ꍇ */
	if (Car::tank < 0) {
		/* ���b�Z�[�W�\�� */
		std::cout << "�R�������܂����B\n";
		return;
	}
	/* �c�O�ʕW�� */
	std::cout << "�c�R����[" << Car::tank << "]�ł��B";
}


/**
 * @fn
 * refueling
 * @brief �N���ǉ�
 * @return
 */
void Car::refueling(double amount) {
	/* �R�����Z */
	Car::tank += amount;
}


/**
 * @fn
 * main
 * @brief ���C���֐�
 * @return
 */
int main() {
	Car car;	// ��
	/* �R���ǉ� */
	car.refueling(30.0);

	/* �R��ݒ� */
	car.SetConsumption(5.2);

	/* �ړ� */
	car.Move(10);
}