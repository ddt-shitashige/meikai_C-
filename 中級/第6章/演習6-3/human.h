#pragma once

#include "RSP.h"

class Human :public::RSP{
private:
	int inputElement;	// ���͒l

public:
	/* �v�f���Z�b�g */
	void SetElement();
	/* ���͒l���Z�b�g */
	void InputElement(int inputNumber);
};