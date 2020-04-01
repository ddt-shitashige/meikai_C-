#include "IntArray.h"

/* コピーコンストラクタ */
IntArray::IntArray(const IntArray &x) {
	/* 自分自身で初期化しようとした処理 */
	if (&x == this) {
		/* 配列の要素を1にする */
		nelem = 1;
		/* 1でメモリ確保 */
		vec = new int[nelem];
		/* 数値格納 */
		vec[0] = 0;
	}
	else {
		/* 要素数をxと同じにする */
		nelem = x.nelem;
		/*  */
		vec = new int[nelem];
		for (int i = 0; i < nelem; i++) {
			vec[i] = x.vec[i];
		}
	}
}
/* 代入演算子 */
IntArray &IntArray::operator=(const IntArray &x) {
	/* 代入元が自分自身で無かった場合の処理 */
	if (&x != this) {
		/* 代入前後の要素数がこのなった場合の処理 */
		if (nelem != x.nelem) {
			/* メモリ開放 */
			delete[] vec;
			/* 新しい要素数 */
			nelem = x.nelem;
			/* メモリ確保 */
			vec = new int[nelem];
		}
		/* 全要素をコピーするループ */
		for (int i = 0; i < nelem; i++) {
			/* 要素格納 */
			vec[i] = x.vec[i];
		}
	}
	return *this;
}
