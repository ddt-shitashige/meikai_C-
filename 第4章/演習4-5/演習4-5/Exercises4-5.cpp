/**
 * @file Exerises4-5.cpp
 * @brief	float型の変数とdouble型の変数にキーボードから数値を読み込んで、その値を表示するプログラムを作成せよ。
			色々な値を入力して、動作を検証する事。
 * @author shitashige
 * @date 20200210
 */
#include <iostream>
 /**
  * @fn
  * メイン関数
  * @brief float型の変数とdouble型の変数にキーボードから数値を読み込んで、その値を表示する関数。
  * @return 0:正常終了
  */
int main() {

	float floatNumber = 0;		// float数字
	double doubleNumber = 0;		// double数字

	/* float文字入力促し */
	std::cout << "float文字：" << "\n";

	/* float文字入力 */
	std::cin >> floatNumber;

	/* float文字出力 */
	std::cout << "float文字：" << floatNumber << "\n";

	/* double文字入力促し */
	std::cout << "double文字：" << "\n";

	/* double文字入力 */
	std::cin >> doubleNumber;

	/* double文字出力 */
	std::cout << "double文字：" << doubleNumber << "\n";

}