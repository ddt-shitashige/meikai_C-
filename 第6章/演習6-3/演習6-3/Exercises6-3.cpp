/**
 * @file Exerises6-3.cpp
 * @brief 演習6-3	三つのint型引数a,b,cの中央値値を求める関数medを作成せよ。
					int med(int a, int b, int c){ ... }
 * @author shitashige
 * @date 20200314
 */



#include <iostream>

 /**
   * @fn
   * 中央値を求める関数
   * @brief 符号を判定する
   * @param[in] a 判定数値
   * @param[in] b 判定数値
   * @param[in] c 判定数値
   * @return 最小値
   */
int med(int a, int b, int c) {
	/* aが中央値ならaをリターン */
	if ((a < b && c < a) || (b < a && a < c))
		return a;
	/* bが中央値ならbをリターン */
	else if ((b < a && c < b) || (a < b && b < c))
		return b;
	/* cが中央値ならcをリターン */
	else
		return c;
}


/**
  * @fn
  * メイン関数
  * @brief 中央値を求める関数
  * @return 0:正常終了
  */
int main() {

	int inputNumber[3] = { 0 };	// 入力数値
	int midNumber = 0;	// 戻り数値

	/* 入力促し表示 */
	std::cout << "数値[1]を入力してください。\n";

	/* 数値入力 */
	std::cin >> inputNumber[0];

	/* 入力促し表示 */
	std::cout << "数値[2]を入力してください。\n";

	/* 数値入力 */
	std::cin >> inputNumber[1];
	/* 入力促し表示 */
	std::cout << "数値[3]を入力してください。\n";

	/* 数値入力 */
	std::cin >> inputNumber[2];

	/* 最小値判定判定 */
	midNumber = med(inputNumber[0], inputNumber[1], inputNumber[2]);

	/* 結果表示 */
	std::cout << "中央値は" << midNumber << "です。\n";

	return 0;
}
