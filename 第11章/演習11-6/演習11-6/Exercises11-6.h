#pragma once

#include <string>

class Human {
private:
	std::string name;	// ���O
	double height;	// �g��
	double weight;	// �̏d
	int birthMonth;	// �a����
	int birthDay;	// �a����

public:
	std::string GetName();
	double GetHeight();
	double GetWeight();
	void SetName(std::string name);
	void SetHeight(double height);
	void SetWeight(double weight);
	int GetBirthMonth();
	int GetBirthDay();
	void SetBirthMonth(int month);
	void SetBirthDay(int day);



};