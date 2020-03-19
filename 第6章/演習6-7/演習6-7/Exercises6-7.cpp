/**
 * @file Exerises6-7.cpp
 * @brief 演習6-7	引数mで指定された月の季節を表示する関数print_screenを作成せよ。mが3,4,5であれば「春」6,7,8であれば「夏」9,10,11であれば「秋」12,1,2であれば「冬」と表示し、それ以外の値であれば何も表示しない事。
					void print_season(int m)
 * @author shitashige
 * @date 20200316
 */



#include <iostream>

 /**
   * @fn
   * 整数の和を求める関数
   * @brief 季節を表示する
   * @param[in] m 月
   * @return 1からnまでの和
   */
void print_season(int m) {

	/* 月が春の場合 */
	if (m >= 3 && m <= 5) {
		/* 結果表示 */
		std::cout << "春です\n";
	}
	/* 月が夏の場合 */
	else if (m >= 6 && m <= 8) {
		/* 結果表示 */
		std::cout << "夏です\n";
	}
	/* 月が秋の場合 */
	else if (m >= 9 && m <= 11) {
		/* 結果表示 */
		std::cout << "秋です\n";
	}
	/* 月が夏の場合 */
	else if (m == 12 || m == 1 || m == 2) {
		/* 結果表示 */
		std::cout << "冬です\n";
	}
}


/**
  * @fn
  * メイン関数
  * @brief 季節を表示する関数
  * @return 0:正常終了
  */
int main() {

	int inputNumber = 0;	// 入力数値
	/* 入力促し表示 */
	std::cout << "数値を入力してください。\n";

	/* 数値入力 */
	std::cin >> inputNumber;

	/* 季節表示 */
	print_season(inputNumber);

	return 0;
}
