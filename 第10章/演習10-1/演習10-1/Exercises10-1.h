#pragma once

#include <string>

class Human {
private:
	std::string name;	// ���O
	double height;	// �g��
	double weight;	// �̏d

public:
	std::string GetName();
	double GetHeight();
	double GetWeight();
	void SetName(std::string name);
	void SetHeight(double height);
	void SetWeight(double weight);

};