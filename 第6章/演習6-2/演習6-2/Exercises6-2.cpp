/**
 * @file Exerises6-2.cpp
 * @brief 演習6-2	三つのint型引数a,b,cの最小値を求める関数minを作成せよ。
					int min(int a, int b, int c){ ... }
 * @author shitashige
 * @date 20200312
 */



#include <iostream>

 /**
   * @fn
   * 最小値を求める関数
   * @brief 符号を判定する
   * @param[in] a 判定数値
   * @param[in] b 判定数値
   * @param[in] c 判定数値
   * @return 最小値
   */
int min(int a, int b, int c) {
	/* aが最小値ならaをリターン */
	if (a < b && a < c)
		return a;
	/* bが最小値ならbをリターン */
	else if (b < a && b < c)
		return b;
	/* cが最小値ならcをリターン */
	else
		return c;

}


/**
  * @fn
  * メイン関数
  * @brief 最小値を求める関数
  * @return 0:正常終了
  */
int main() {

	int inputNumber[3] = { 0 };	// 入力数値
	int minNumber = 0;	// 戻り数値

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
	minNumber = min(inputNumber[0], inputNumber[1], inputNumber[2]);

	/* 結果表示 */
	std::cout << "最小値は" << minNumber << "です。\n";

	return 0;
}
