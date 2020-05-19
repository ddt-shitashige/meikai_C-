#pragma once
/* 数値演算による例外 */
class MathException{};

/* 0による除算 */
class DividedByZero: public MathException{};

/* オーバーフロー */
class Overflow :public MathException {
	int v;
	public:
	Overflow(int val):v(val){};
	int value() const {return v;}
};
/* アンダーフロー */
class Underflow : public MathException {
	int v;
	public:
	Underflow(int val):v(val){ }
	int value() const {return v;}
};