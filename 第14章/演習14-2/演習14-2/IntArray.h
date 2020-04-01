#pragma once
#ifndef ___Class_IntArray
#define ___Class_IntArray

/* 整列配列クラス */
class IntArray {
	int nelem;	// 配列の要素数
	int *vec;	// 戦闘配列へのポインタ

public:
	
	/* 明示的コンストラクタ */
	IntArray(int size) : nelem(size) { vec = new int[nelem]; }

	/* コピーコンストラクタ */
	IntArray(const IntArray &x);

	/* デストラクタ */
	~IntArray() { delete[] vec; }

	/* 要素数を返す */
	int size() const { return nelem; }

	/* 代入演算子= */
	IntArray &operator=(const IntArray &x);

	/* 添え字演算子 */
	int &operator[](int i) { return vec[i]; }
};

#endif