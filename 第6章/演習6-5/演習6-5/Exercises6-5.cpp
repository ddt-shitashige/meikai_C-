/**
 * @file Exerises6-5.cpp
 * @brief 演習6-5	1からnまでの全整数の和を求めて返却する関数sumupを作成せよ。
					int sumup(int n)
 * @author shitashige
 * @date 20200316
 */



#include <iostream>

 /**
   * @fn
   * 整数の和を求める関数
   * @brief 整数の和を求める
   * @param[in] n 加算する整数
   * @return 1からnまでの和
   */
int sumup(int n) {

	int sumNumber = 0;	// 加算数値

	/* n回数加算 */
	for (int i = 0; i <= n; i++) {
		/* 加算 */
		sumNumber += i;
	}
	return sumNumber;
}


/**
  * @fn
  * メイン関数
  * @brief 円の面積を求める関数
  * @return 0:正常終了
  */
int main() {

	int inputNumber = 0;	// 入力数値
	int sumNumber = 0;	// 加算数値

	/* 入力促し表示 */
	std::cout << "数値を入力してください。\n";

	/* 数値入力 */
	std::cin >> inputNumber;

	/* 最小値判定判定 */
	sumNumber = sumup(inputNumber);

	/* 結果表示 */
	std::cout << "全整数の和は" << sumNumber << "です。\n";

	return 0;
}
