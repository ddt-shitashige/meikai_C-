/**
 * @file Exerises1-14.cpp
 * @brief 演習1-14	キーボードから読み込んだ整数値±5の範囲の整数値をランダムに生成して
					表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20191218
 */

#include <ctime>
#include <cstdlib>
#include <iostream>
 /**
  * @fn
  * メイン関数
  * @brief 入力された整数値の±5の範囲の整数値をランダムに生成して表示する関数
  * @return 0:正常終了
  */
int main() {

	int inputNumber;		// 入力数字

	/* 入力促し文字表示 */
	std::cout << "整数値";
	/* 入力待機 */
	std::cin >> inputNumber;

	/* 初期シードを決定 */
	srand((unsigned int)time(NULL));

	/* 11で割ることにより、10以下の乱数設定 */
	int tenLessValue = rand() % 11;		// 10以下の値

	/* 10以下の乱数に-5する事によって、-5～+5の増減を行う */
	inputNumber += tenLessValue - 5;

	/* 結果出力 */
	std::cout << "1桁の正の整数値は" << inputNumber << "\n";
	return 0;
}