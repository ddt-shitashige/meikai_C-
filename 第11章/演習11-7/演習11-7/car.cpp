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
 * @brief �R���ǉ�
 * @return
 */
void Car::refueling(double amount) {
	/* �R�����Z */
	Car::tank += amount;
}

/**
 * @fn
 * GetBuyYear
 * @brief �w���N�擾
 * @param �̏d
 * @return
 */
int Car::GetBuyYear() {
	return BuyYear;
}

/**
 * @fn
 * GetBuyMonth
 * @brief �w�����擾
 * @param �̏d
 * @return
 */
int Car::GetBuyMonth() {
	return BuyMonth;
}


/**
 * @fn
 * GetBuyDay
 * @brief �w�����擾
 * @param �̏d
 * @return
 */
int Car::GetBuyDay() {
	return BuyDay;
}


/**
 * @fn
 * SetBuyMonth
 * @brief �w���N�ݒ�
 * @param �̏d
 * @return
 */
void Car::SetBuyYear(int year) {
	/* �w���N��ݒ� */
	BuyYear = year;
}


/**
 * @fn
 * SetBuyMonth
 * @brief �w�����ݒ�
 * @param �̏d
 * @return
 */
void Car::SetBuyMonth(int month) {
	/* �w������ݒ� */
	BuyMonth = month;
}


/**
 * @fn
 * SetBuyDay
 * @brief �w�����ݒ�
 * @param �̏d
 * @return
 */
void Car::SetBuyDay(int day) {
	/* �w������ݒ� */
	BuyDay = day;
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

	/* �w���N��` */
	car.SetBuyYear(12);

	/* �w������` */
	car.SetBuyMonth(12);
	/* �w������` */
	car.SetBuyDay(14);


	std::cout << "�w���N������[" << car.GetBuyYear() << "/" << car.GetBuyMonth() << "/" << car.GetBuyDay() << "]�ł�";

}