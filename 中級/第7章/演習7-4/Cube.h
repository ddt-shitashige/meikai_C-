#pragma once
#include "ThreeDimensional.h"

class Cube:public ThreeDimensional {
private:
	double side;	// �ӂ̒���
	double area;	// �ʐ�

public:
	/* �ӂ̒������� */
	void Inputside(double lenght);
	/* �ʐ� */
	void Area();
	/* ������o�� */
	void Print();
};