#pragma once
class Car {
private:
	char number[4];	// �i���o�[
	double consumption = 0;	// �R��
	double tank = 0;	// �^���N�e��

public:
	char *GetNumber();
	void SetNumber(char *number);
	void SetConsumption(double consumption);
	void Move(double distance);
	void refueling(double amount);

};