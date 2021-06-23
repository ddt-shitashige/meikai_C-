#pragma once
/* ���l���Z�ɂ���O */
class MathException{};

/* 0�ɂ�鏜�Z */
class DividedByZero: public MathException{};

/* �I�[�o�[�t���[ */
class Overflow :public MathException {
	int v;
	public:
	Overflow(int val):v(val){};
	int value() const {return v;}
};
/* �A���_�[�t���[ */
class Underflow : public MathException {
	int v;
	public:
	Underflow(int val):v(val){ }
	int value() const {return v;}
};