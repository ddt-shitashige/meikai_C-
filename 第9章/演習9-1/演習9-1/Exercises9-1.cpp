/**
 * @file Exerises9-1.cpp
 * @brief 演習9-1	再帰呼出しを用いずに、関数factorialを実現せよ。
 * @author shitashige
 * @date 20200326
 */


#include <iostream>

 /**
  * @fn
  * ChangePointer
  * @brief 数値の階乗を行う
  * @param firstPointer 1番目のポインタ
  * @param secondPointer 2番目のポインタ
  * @return
  */
int factorial(int n) {

	int returnNumber = 1;	// 返却数値
	/* 指定された乗算ループ */
	for (int i = 2; i <= n; i++) {
		/* 乗算していく */
		returnNumber *= i;
	}
	return returnNumber;
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
	std::cout << "結果：" << factorial(inputNumber);
}