
#include <iostream>

#include "car.h"

char *Car::GetNumber() {
	return number;
}


void Car::SetConsumption(double consumption) {
	/* �R��ݒ� */
	Car::consumption = consumption;
	return;
}
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


void Car::refueling(double amount) {
	/* �R�����Z */
	Car::tank += amount;
}



int main() {
	Car car;	// ��
	/* �R���ǉ� */
	car.refueling(30.0);

	/* �R��ݒ� */
	car.SetConsumption(5.2);

	/* �ړ� */
	car.Move(10);
}