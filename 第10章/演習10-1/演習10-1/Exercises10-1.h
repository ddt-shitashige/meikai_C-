#pragma once

#include <string>

class Human {
	private:
		std::string name;	// 名前
		double height;	// 身長
		double weight;	// 体重

	public:
		std::string GetName();
		double GetHeight();
		double GetWeight();
		void SetName(std::string name);
		void SetHeight(double height);
		void SetWeight(double weight);

};