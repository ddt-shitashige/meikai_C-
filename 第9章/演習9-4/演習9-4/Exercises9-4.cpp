/**
 * @file Exerises9-4.cpp
 * @brief 演習9-4	二値の最小値を求める関数テンプレートminofを作成せよ。
 * @author shitashige
 * @date 20200327
 */


#include <iostream>


 /**
  * @fn
  * square
  * @brief 数値の最小値をリターンする
  * @param firstNumber 1数値
  * @param secondNumber 2数値
  * @return
  */
template <class Type> Type minof (Type firstNumber, Type secondNumber) {
	/* firstNumberとsecondNumberを比較し、小さい方をを返却する */
	return firstNumber > secondNumber ? secondNumber : firstNumber;
}



/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {


	int firstInputNumber;	// 入力数値1	
	int secondInputNumber;	// 入力数値2	

	/* メッセージ表示 */
	std::cout << "数値を入力してください。";

	/* 文字列入力 */
	std::cin >> firstInputNumber;

	/* メッセージ表示 */
	std::cout << "数値を入力してください。";

	/* 文字列入力 */
	std::cin >> secondInputNumber;
	/* 結果表示 */
	std::cout << "結果：" << minof(firstInputNumber, secondInputNumber);
}