#pragma once
class Car {
private:
	char number[4];	// ナンバー
	double consumption = 0;	// 燃費
	double tank = 0;	// タンク容量

public:
	char *GetNumber();
	void SetNumber(char *number);
	void SetConsumption(double consumption);
	void Move(double distance);
	void refueling(double amount);

};