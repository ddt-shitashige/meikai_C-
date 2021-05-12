/**
 * @file Exerises2-8.cpp
 * @brief 演習2-8	2つの整数値を読み込んで、それらの値の差を表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20191223
 */
#include <iostream>

 /**
  * @fn
  * メイン関数
  * @brief 2つの数字の差異を求めるメソッド
  * @return 0:正常終了
  */
int main() {

	const int ABSOLUTE_CONVERTION = -1;		//　絶対値変換数値

	int inputNumberFront = 0;		// 入力文字前者
	int inputNumberRear = 0;		// 入力文字後者
	int differenceAnswer = 0;		// 差異結果


	/* 整数aの入力を促す */
	std::cout << "整数aを入力してください。\n";
	/* ユーザーに入力させる */
	std::cin >> inputNumberFront;

	/* 整数bの入力を促す */
	std::cout << "整数bを入力してください。\n";
	/* ユーザーに入力させる */
	std::cin >> inputNumberRear;

	/* 計算 */
	differenceAnswer = inputNumberFront - inputNumberRear;

	/* 結果を絶対値に変更しながら出力 */
	std::cout << "二つの数値の差は" << ((differenceAnswer > 0) ? differenceAnswer : (differenceAnswer * ABSOLUTE_CONVERTION)) << "です。";

	return 0;
}