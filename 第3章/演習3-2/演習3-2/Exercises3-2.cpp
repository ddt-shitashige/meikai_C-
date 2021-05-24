/**
 * @file Exerises3-2.cpp
 * @brief 演習3-2	2桁の整数値(10～99)を当てさせる数あてゲームを作成せよ。
 * @author shitashige
 * @date 20200105
 */

#include <ctime>
#include <cstdlib>
#include <iostream>
 /**
  * @fn
  * メイン関数
  * @brief 数あてゲームを行う関数
  * @return 0:正常終了
  */
int main() {


	/*
	 * 2桁の正の整数値を求める
	 */
	 /* シードをリセット */
	srand((unsigned int)time(NULL));

	int twoDigitNegativeValue = 0;	// 2桁の正の整数値
	int inputNumber = 0;			// 入力数値

	/* 結果が1桁だった場合はもう一度やり直すループ */
	do {
		/* 乱数設定 */
		twoDigitNegativeValue = rand() % 100;

	} while (twoDigitNegativeValue <= 10);

	/* 数値が当たるまで続けるループ */
	do {
		/* 入力を促すメッセージ */
		std::cout << "いくつかな？\n";
		/* 数値入力 */
		std::cin >> inputNumber;

		/* 数値チェック */
		if (inputNumber > twoDigitNegativeValue) {
			/* 入力数値が小さかったので、それを知らせるメッセージ表示 */
			std::cout << "もっと小さな数だよ\n";
		}
		/* 数値チェック */
		else if (inputNumber < twoDigitNegativeValue) {
			/* 入力数値が大きかったので、それを知らせるメッセージ表示 */
			std::cout << "もっと大きな数だよ\n";
		}
	} while (inputNumber != twoDigitNegativeValue);

	/* 正解を伝えるメッセージ表示 */
	std::cout << "正解です";

	return 0;
}