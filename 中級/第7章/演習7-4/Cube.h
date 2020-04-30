#pragma once
#include "ThreeDimensional.h"

class Cube:public ThreeDimensional {
private:
	double side;	// 辺の長さ
	double area;	// 面積

public:
	/* 辺の長さ入力 */
	void Inputside(double lenght);
	/* 面積 */
	void Area();
	/* 文字列出力 */
	void Print();
};