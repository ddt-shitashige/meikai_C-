/**
 * @file Exerises3-3.cpp
 * @brief 演習3-3	右に示すように二つの整数値を読み込んで、小さいほうの数以上で大きい方の数以下の全整数を、小さい方から順に表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20200105
 */

#include <ctime>
#include <cstdlib>
#include <iostream>
 /**
  * @fn
  * メイン関数
  * @brief 入力値の小さい方から順に表示していくプログラム
  * @return 0:正常終了
  */
int main() {


	/*
	 * 2桁の正の整数値を求める
	 */
	 /* シードをリセット */
	srand((unsigned int)time(NULL));

	int inputNumberFront = 0;	// 前の入力数値
	int inputNumberRear = 0;	// 後の入力数値

	/* 前の入力を促すメッセージ */
	std::cout << "整数A；";

	/* 前の数値入力 */
	std::cin >> inputNumberFront;

	/* 後の入力を促すメッセージ */
	std::cout << "整数B；";

	/* 後の数値入力 */
	std::cin >> inputNumberRear;

	/* 前の入力値の方が大きかった場合 */
	if (inputNumberFront > inputNumberRear) {
		/* 後の入力を加算していき、前の入力と同じになるまで数値出力 */
		for (int i = inputNumberRear; i <= inputNumberFront; i++) {
			/* 文字を出力 */
			std::cout << i << " ";
		}
	}
	/* 前の入力値の方が小さかった場合 */
	else if (inputNumberRear > inputNumberFront) {
		/* 前の入力を加算していき、後の入力と同じになるまで数値出力 */
		for (int i = inputNumberFront; i <= inputNumberRear; i++) {
			/* 文字を出力 */
			std::cout << i << " ";
		}
	}
	/* それ以外 */
	else{
		/* 文字を出力 */
		std::cout << inputNumberFront;
	}
	return 0;
}