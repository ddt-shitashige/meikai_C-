#pragma once
#ifndef ___Class_Boolean
#define ___Class_Boolean

#include<iostream>
/* 真理値クラス */
class Boolean {
public:
	enum boolean { False, True };	// Falseは偽/Trueは真
private:
	boolean v;	// 真理値
public:
	/* デフォルトコンストラクタ */
	Boolean() : v(False) { }	// 偽で初期化

	/* コンストラクタ */
	Boolean(int val) : v(val == 0 ? False : True) { }

	/* int型への変数関数 */
	operator int() const { return v; }

	/* const char*型への変数変換 */
	operator const char *() const { return v == False ? "False" : "True"; }

	/* 演算子関数! */
	bool operator !() const;
};

/* 出力ストリームsにxを挿入 */
inline std::ostream &operator<<(std::ostream &s, Boolean &x) {

	return s << static_cast<const char *>(x);
}

#endif