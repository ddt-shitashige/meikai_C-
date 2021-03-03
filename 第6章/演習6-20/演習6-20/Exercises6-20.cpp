/**
 * @file Exerises6-20.cpp
 * @brief 演習6-20	2つのint型整数a,bの最小値3つのint型整数a,b,cの最小値を求める。以下に示す多重に定義された関数軍を作成せよ。
 * 					int min(int a, int b)
 * 					int min(int a, int b, int c)
 * @author shitashige
 * @date 20200322
 */


#include <iostream>


 /**
   * @fn
   * min
   * @brief 最小値返却
   * @param a 数値a
   * @param b 数値b
   * @return
   */
int min(int a, int b) {

	/* aとbを比較して、aが小さければaをリターン */
	if (a < b)
		return a;
	/* bが小さければbをリターン */
	else
		return b;
}

/**
  * @fn
  * min
  * @brief 最小値返却
  * @param a 数値a
  * @param b 数値b
  * @param c 数値c
  * @return
  */
int min(int a, int b, int c) {

	/* aとbとcを比較して、aが小さければaをリターン */
	if (a <= b && a <= c)
		return a;
	/* aとbとcを比較して、bが小さければbをリターン */
	else if (b <= a && b <= c)
		return b;
	/* aとbとcを比較して、cが小さければcをリターン */
	else if (c <= a && c <= b)
		return c;
}


/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {


	/* メッセージ出力 */
	std::cout << "値を3つ入力してください。\n";

	int firstNumber;	 // 1つ目の数値
	int secondNumber;	 // 2つ目の数値
	int thirdNumber;	 // 3つ目の数値

	/* 最小値と最大値をユーザー入力 */
	std::cin >> firstNumber >> secondNumber >> thirdNumber;

	/* 最小値返却関数呼び出し */
	std::cout << "1番目と2番目の最小値は[" << min(firstNumber, secondNumber) << "]です\n1番目と2番目と3番目の最小値は[" << min(firstNumber, secondNumber, thirdNumber) << "]です\n";
	return 0;
}