#pragma once
class Car {
private:
	char number[4];	// �i���o�[
	double consumption = 0;	// �R��
	double tank = 0;	// �^���N�e��
	int BuyYear = 0;	// �w���N
	int BuyMonth = 0;	// �w����
	int BuyDay = 0;	// �w����

public:
	char *GetNumber();
	void SetNumber(char *number);
	void SetConsumption(double consumption);
	void Move(double distance);
	void refueling(double amount);
	int GetBuyYear();
	int GetBuyMonth();
	int GetBuyDay();
	void SetBuyYear(int year);
	void SetBuyMonth(int month);
	void SetBuyDay(int day);


};