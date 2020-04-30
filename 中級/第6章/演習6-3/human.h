#pragma once

#include "RSP.h"

class Human :public::RSP{
private:
	int inputElement;	// 入力値

public:
	/* 要素をセット */
	void SetElement();
	/* 入力値をセット */
	void InputElement(int inputNumber);
};