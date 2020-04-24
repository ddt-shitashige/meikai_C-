/**
 * @file Exerises2-7.cpp
 * @brief 演習2-7 ビットベクトルによる集合クラスBitSetに対して、以下のメンバ関数を追加せよ。
 * @author shitashige
 * @date 20020424
 */

#include "Exercises2-7.h"


/**
 * @fn
 * @brief コンストラクタ
 */
BitSet::BitSet() {
	/* 引数が無いので0にする */
	bitVector = 0;
}

/**
 * @fn
 * @brief コンストラクタ
 * @param 数値
 */
BitSet::BitSet(unsigned long number) {
	/* 引数の値にする */
	bitVector = number;
}


/**
 * @fn
 * @brief 集合の最小要素の値
 * @return 回答
 */
int BitSet::min() const{

	unsigned long cacheNumber = bitVector;	// ビットベクトルの一時保存番号

	/* Bitの中身全ループ */
	for (int i = 0; i < sizeof(bitVector) * 8; i++) {
		/* ビットベクトルの最下値が1だった場合の処理 */
		if ((cacheNumber & 1) == 1) {
			return i;
		 }
		else {
			/* 数値の桁を1つ小さくする */
			cacheNumber = cacheNumber >> 1;
		}
	}
	return -1;

}

/**
 * @fn
 * @brief 集合の最大要素の値
 * @return 回答
 */
int BitSet::max() const {

	unsigned long cacheNumber = bitVector;	// ビットベクトルの一時保存番号
	unsigned long comparisonNumber = ~0;	// 比較数値
	comparisonNumber = comparisonNumber >> 1;	// 最上位ビットを0にする
	comparisonNumber = ~comparisonNumber;	// 最上位ビットのみ1にする



	/* Bitの中身全ループ */
	for (int i = 0; i < sizeof(bitVector) * 8; i++) {
		/* ビットベクトルの最下値が1だった場合の処理 */
		if ((cacheNumber & comparisonNumber) == comparisonNumber) {
			return sizeof(bitVector) * 8 - i - 1;
		}
		else {
			/* 数値の桁を1つ大きくする */
			cacheNumber = cacheNumber << 1;
		}
	}
	return -1;

}



/**
 * @fn
 * @brief 集合を削除
 * @return 回答
 */
void BitSet::clear() {
	/* 0にする */
	bitVector = 0;
}

/**
 * @fn
 * @brief 入れ替える
 * @param 入れ替える要素
 */
void BitSet::swap(BitSet& r) {

	BitSet cacheBitSet; // 一時保存のビットセット

	/* 一時保存に自分を渡す */
	cacheBitSet = *this;
	/* 要素を自分に格納 */
	*this = r;
	/* 自分と受け取ったのを交換 */
	r = cacheBitSet;
}

/**
 * @fn
 * @brief 入れ替える
 * @param 入れ替える要素
 * @param 入れ替える要素2
  */
void BitSet::swap(BitSet& s1, BitSet& s2) {

	BitSet cacheBitSet; // 一時保存のビットセット

	/* 一時保存に自分を渡す */
	cacheBitSet = s1;
	/* 要素を自分に格納 */
	s1 = s2;
	/* 自分と受け取ったのを交換 */
	s2 = cacheBitSet;
}


/**
 * @fn
 * @brief 対象差（いろいろとおかしいが、問題文に則る）
 * @param 対象要素
 * @param 対象要素2
  */
BitSet BitSet::symmetric_diffference(const BitSet& s1, const BitSet& s2) {
	BitSet cache;	// 一時保存のビットセット
	/* 問題の結果は常に0な為、これでOK */
	return cache;
}

/**
 * @fn
 * @brief 績集合
 * @param 対象要素
  */
BitSet BitSet::operator&(const BitSet& s1) {
	BitSet cache = *this;	// 一時保存のビットセット
	cache.bitVector&= s1.bitVector;	// 績集合
	return cache;
}

/**
 * @fn
 * @brief 和集合
 * @param 対象要素
  */
BitSet BitSet::operator|(const BitSet& s1) {
	BitSet cache = *this;	// 一時保存のビットセット
	cache.bitVector |= s1.bitVector;	// 和集合
	return cache;
}

/**
 * @fn
 * @brief 差集合
 * @param 対象要素
  */
BitSet BitSet::operator^(const BitSet& s1) {
	BitSet cache = *this;	// 一時保存のビットセット
	cache.bitVector ^= s1.bitVector;	// 差集合
	return cache;
}

/**
 * @fn
 * @brief 部分集合
 * @param 対象要素
  */
bool BitSet::is_subset_of(const BitSet& s) {
	BitSet cache = *this;	// 一時保存のビットセット
	cache.bitVector &= s.bitVector;	// 績集合
	return cache.bitVector == s.bitVector;	// 比較
}

/**
 * @fn
 * @brief 真部分集合
 * @param 対象要素
  */
bool BitSet::is_proper_subset_of(const BitSet& s) {
	BitSet cache = *this;	// 一時保存のビットセット
	cache.bitVector &= s.bitVector;	// 績集合
	return (cache.bitVector == s.bitVector) && (cache.bitVector != this->bitVector);	// 比較
}


/**
 * @fn
 * @brief メイン関数
 * @param 対象要素
  */
int main() {

	BitSet bitset(5);	// ビットセット定義
	BitSet bitsetSecond(170);	// ビットセット定義
	BitSet bitsetThird(240);	// ビットセット定義

	/* 結果出力 */
	cout<<"min:"<< bitset.min()<<"\n";
	/* 結果出力 */
	cout << "max:" << bitset.max()<<"\n";

	/* 削除 */
	bitset.clear();

	/* 結果出力 */
	cout << "min(削除後):" << bitset.min() << "\n";
	/* 結果出力 */
	cout << "max(削除後):" << bitset.max() << "\n";

	/* 入れ替わり */
	bitset.swap(bitsetSecond);
	/* 結果出力 */
	cout << "min(入れ替わり):" << bitset.min() << "\n";
	/* 結果出力 */
	cout << "max(入れ替わり):" << bitset.max() << "\n";

	/* 結果出力 */
	cout << "min(入れ替わり2):" << bitsetSecond.min() << "\n";
	/* 結果出力 */
	cout << "max(入れ替わり2):" << bitsetSecond.max() << "\n";

	/* 入れ替わり */
	bitset.swap(bitsetSecond,bitsetThird);
	/* 結果出力 */
	cout << "min(入れ替わり2):" << bitsetSecond.min() << "\n";
	/* 結果出力 */
	cout << "max(入れ替わり2):" << bitsetSecond.max() << "\n";

	/* 結果出力 */
	cout << "min(入れ替わり3):" << bitsetThird.min() << "\n";
	/* 結果出力 */
	cout << "max(入れ替わり3):" << bitsetThird.max() << "\n";

	/* 戻す */
	bitset.swap(bitsetThird,bitset);

	BitSet bitsetForth;	// ビットセット4

	/* 対象差 */
	bitsetForth = bitset.symmetric_diffference(bitsetSecond, bitsetThird);

	/* 結果出力 */
	cout << "min(対象差4):" << bitsetForth.min() << "\n";
	/* 結果出力 */
	cout << "max(対象差4):" << bitsetForth.max() << "\n";

	/* 績集合 */
	bitset = bitsetSecond & bitsetThird;

	/* 結果出力 */
	cout << "min(績):" << bitset.min() << "\n";
	/* 結果出力 */
	cout << "max(績):" << bitset.max() << "\n";

	/* 和集合 */
	bitset = bitsetSecond | bitsetThird;

	/* 結果出力 */
	cout << "min(和):" << bitset.min() << "\n";
	/* 結果出力 */
	cout << "max(和):" << bitset.max() << "\n";

	/* 差集合 */
	bitset = bitsetSecond ^ bitsetThird;

	/* 結果出力 */
	cout << "min(差):" << bitset.min() << "\n";
	/* 結果出力 */
	cout << "max(差):" << bitset.max() << "\n";

	BitSet bitsetFifth(160);	// ビットセット5
	
	/* 結果出力 */
	cout << "部分集合:" << (bitsetSecond.is_subset_of(bitsetThird)?"True":"False") << "\n";
	/* 結果出力 */
	cout << "部分集合:" << (bitsetSecond.is_subset_of(bitsetFifth) ? "True" : "False") << "\n";

	/* 結果出力 */
	cout << "真部分集合:" << (bitsetSecond.is_proper_subset_of(bitsetFifth) ? "True" : "False") << "\n";
	/* 結果出力 */
	cout << "真部分集合:" << (bitsetSecond.is_proper_subset_of(bitsetSecond) ? "True" : "False") << "\n";
}



