#pragma once
class Car {
private:
	char number[4];	// ƒiƒ“ƒo[
	double consumption = 0;	// ”R”ï
	double tank = 0;	// ƒ^ƒ“ƒN—e—Ê
	int BuyYear = 0;	// w“ü”N
	int BuyMonth = 0;	// w“üŒ
	int BuyDay = 0;	// w“ü“ú

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