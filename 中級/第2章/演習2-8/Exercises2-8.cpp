/**
 * @file Exerises2-8.cpp
 * @brief 演習2-8 以下の特徴を持つビットベクトルによる集合を実現するクラスVecBitSet型を作成せよ。
 * ・要素数はunsigned long型のビット数に制限されない。
 * ・集合の下限値と上限値を任意の値に設定できる。
 * @author shitashige
 * @date 20020424
 */

#include "Exercises2-8.h"


 /**
  * @fn
  * @brief コンストラクタ
  */
VecBitSet::VecBitSet() {
	/* メモリ確保 */
	bitVector = new unsigned long;
	
	/* 初期化 */
	bitVector[0] = 0;
}

/**
 * @fn
 * @brief コンストラクタ
 * @param 最小数値
 * @param 最大数値
 */
VecBitSet::VecBitSet(int min, int max) {
	/* 値格納 */
	minbit = min;
	/* 値格納 */
	maxbit = max;

	/* 要素数決定 */
	element = ((max - min) / (sizeof(unsigned long) * 8)) + 1;

	/* メモリ確保 */
	bitVector = new unsigned long[element];

	/* 初期化 */
	clear();
}




/**
 * @fn
 * @brief 数値設定
 * @param 箇所
 */
void VecBitSet::SetBit(int pos) {
	unsigned long number = 1;	// 数値

	/* 箇所が最小数値より小さかった場合の処理 */
	if (pos < minbit) {
		return;
	}

	/* 1の値を配列を考慮しながらpos分ずらす */
	number = number << ((pos - minbit) % (sizeof(unsigned long) * 8));
	/* pos分ずらしたところに排他的論理和を格納 */
	bitVector[(pos - minbit) / (sizeof(unsigned long) * 8)] ^= number;

}
/**
 * @fn
 * @brief 集合を削除
 * @return 回答
 */
void VecBitSet::clear() {
	/* 初期化ループ */
	for (int i = 0; i < element; i++) {
		/* 初期化 */
		bitVector[i] = 0;
	}
}


/**
 * @fn
 * @brief 績集合
 * @param 対象要素
  */
VecBitSet VecBitSet::operator&(const VecBitSet& s1) {


	/* ビット値が違った場合、リターン */
	if (this->minbit != s1.minbit || this->maxbit != s1.maxbit) {
		return *this;
	}

	VecBitSet cache = *this;	// 一時保存のビットセット

	/* 要素でループ */
	for (int i = 0; i < s1.element; i++) {
		/* 績集合 */
		cache.bitVector[i] &= s1.bitVector[i];
	}
	return cache;
}

/**
 * @fn
 * @brief 和集合
 * @param 対象要素
  */
VecBitSet VecBitSet::operator|(const VecBitSet& s1) {

	/* ビット値が違った場合、リターン */
	if (this->minbit != s1.minbit || this->maxbit != s1.maxbit) {
		return *this;
	}

	VecBitSet cache = *this;	// 一時保存のビットセット

	/* 要素でループ */
	for (int i = 0; i < s1.element; i++) {
		/* 績集合 */
		cache.bitVector[i] |= s1.bitVector[i];
	}
	return cache;
	}

/**
 * @fn
 * @brief 差集合
 * @param 対象要素
  */
VecBitSet VecBitSet::operator^(const VecBitSet& s1) {

	/* ビット値が違った場合、リターン */
	if (this->minbit != s1.minbit || this->maxbit != s1.maxbit) {
		return *this;
	}

	VecBitSet cache = *this;	// 一時保存のビットセット

	/* 要素でループ */
	for (int i = 0; i < s1.element; i++) {
		/* 績集合 */
		cache.bitVector[i] ^= s1.bitVector[i];
	}
	return cache;
}

/**
 * @fn
 * @brief char型のビット値を表示する関数
 * @param x 数値
 */
void VecBitSet::printBits() {

	/* 要素数分ループする */
	for (int i = element - 1; i >= 0; i--) {
		/* iが最大の時の処理 */
		if (i == element - 1) {
			/* ビット数分ループする */
			for (int j = ((maxbit - minbit) % (sizeof(unsigned long) * 8)); j >= 0; j--) {
				/* 結果を出力 */
				cout << ((bitVector[i] >> j) & 1U ? '1' : '0');
			}

		}
		else {
			/* ビット数分ループする */
			for (int j = sizeof(unsigned long) * 8 - 1; j >= 0; j--) {
				/* 結果を出力 */
				cout << ((bitVector[i] >> j) & 1U ? '1' : '0');
			}
		}
	}
}

/**
 * @fn
 * @brief ファイナライズ
 * @param x 数値
 */
void VecBitSet::cleanup() {
	/* メモリ開放 */
	delete[] bitVector;
}
/**
 * @fn
 * @brief メイン関数
 * @param 対象要素
  */
int main() {

	VecBitSet vecbitset(10, 45);	// ビットセット定義

	VecBitSet vecbitsetSecond(10, 45);	// ビットセット2定義

	/* 44番目を立てる */
	vecbitset.SetBit(44);

	/* 32番目を立てる */
	vecbitsetSecond.SetBit(32);
	/* 44番目を立てる */
	vecbitsetSecond.SetBit(44);

	/* 績算 */
	(vecbitset & vecbitsetSecond).printBits();
	/* 改行出力 */
	cout << "\n";

	/* 初期化 */
	vecbitset.clear();

	/* 44番目を立てる */
	vecbitset.SetBit(44);

	/* 和算 */
	(vecbitset | vecbitsetSecond).printBits();
	/* 改行出力 */
	cout << "\n";

	/* 初期化 */
	vecbitset.clear();

	/* 44番目を立てる */
	vecbitset.SetBit(44);

	/* 差算 */
	(vecbitset ^ vecbitsetSecond).printBits();
	/* 改行出力 */
	cout << "\n";

	/* ファイナライズ */
	vecbitset.cleanup();

	/* ファイナライズ */
	vecbitsetSecond.cleanup();

}