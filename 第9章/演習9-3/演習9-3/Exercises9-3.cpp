/**
 * @file Exerises9-3.cpp
 * @brief 演習9-3	xの2乗を求める関数テンプレートsquareを作成せよ。
 *					template <class Type> Type square (Type x)
 * @author shitashige
 * @date 20200327
 */


#include <iostream>


 /**
  * @fn
  * square
  * @brief 数値の階乗を行う
  * @param x 1数値
  * @return
  */
template <class Type> Type square (Type x) {
	return x * x;
}



/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {


	int inputNumber;	// 入力数値

	/* メッセージ表示 */
	std::cout << "数値を入力してください。";

	/* 文字列入力 */
	std::cin >> inputNumber;

	/* 結果表示 */
	std::cout << "結果：" << square(inputNumber);
}