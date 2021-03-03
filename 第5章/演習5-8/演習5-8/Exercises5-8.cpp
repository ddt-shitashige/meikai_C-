/**
 * @file Exerises5-8.cpp
 * @brief 演習5-8	配列の要素の並びをシャッフルする（要素の並びがランダムになるようにかき混ぜる）プログラムを作成せよ。
 * @author shitashige
 * @date 20200306
 */


#include <iostream>
#include <ctime>
#include <iomanip>

 /**
  * @fn
  * メイン関数
  * @brief 配列にランダム数値を入れてシャッフルする関数
  * @return 0:正常終了
  */
int main() {

	const int element = 10;	// 要素数
	int rundomNumber = 0;	// ランダム数値
	int number[element] = { 0 };	// 数字の配列
	int rundomInputNumber[element] = { 0 };	// シャッフル先の配列
	int cacheNumber[element] = { 0 };	// 一時保存の配列
	bool sameFlg = false;			// 配列の中に同じ数値が入っているかの判定フラグ


	/* 初期シードを決定 */
	srand((unsigned int)time(NULL));


	/* 要素数分だけループ */
	for (int i = 0; i < element; i++) {
		/* 乱数から100のあまりを求める事により、値が0～99の間になる。 */
		rundomNumber = rand() % 100;

		/* 配列にランダム数値を格納 */
		number[i] = rundomNumber;

		/* 配列の数値出力 */
		std::cout << "a[" << std::setw(2) << i << "]：" << number[i] << "\n";
	}
	/*
	 * シャッフル先の配列を決める
	 */
	 /* 要素数分だけループ */
	for (int i = 0; i < element; i++) {
		/* 要素数で割った余りを格納する事により、シャッフル先の配列を選択する */
		rundomNumber = rand() % element;

		/* 配列に格納されている数値とランダム数値を比較する為のループ */
		for (int j = 0; j < i; j++) {
			/* もし、一時保存数値とランダム数値が同じなら、ループの最初に戻る */
			if (rundomInputNumber[j] == rundomNumber) {
				/* iをデクリメント */
				i--;
				/* 判定フラグをONにする */
				sameFlg = true;
				/* ループから抜ける */
				break;
			}
		}
		/* 判定フラグがONだった場合の処理 */
		if (sameFlg) {
			/* 判定フラグをOFFにする */
			sameFlg = false;
			/* ループをやり直す */
			continue;
		}

		/* 配列にランダム数値を格納 */
		rundomInputNumber[i] = rundomNumber;


	}

	/* 配列を一時保存配列にコピー */
	memcpy(cacheNumber, number, sizeof(element) * element);

	/* テンプレート出力 */
	std::cout << "要素の並びを変更しました\n";

	/*
	 * 格納先をシャッフルする
	 */
	 /* 要素数分だけループ */
	for (int i = 0; i < element; i++) {
		/* 一時保存配列から数値の配列にコピーする */
		number[i] = cacheNumber[rundomInputNumber[i]];

		/* 配列の数値出力 */
		std::cout << "a[" << std::setw(2) << i << "]：" << number[i] << "\n";
	}


	return 0;
}