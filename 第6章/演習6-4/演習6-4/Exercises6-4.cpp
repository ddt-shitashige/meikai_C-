/**
 * @file Exerises6-4.cpp
 * @brief 演習6-4	半径rの面積を求めて返却する関数circ_areaを作成せよ。円周率は3.14とする。
					int circ_aarea(double r){ ... }
 * @author shitashige
 * @date 20200315
 */



#include <iostream>

 /**
   * @fn
   * 円の面積を求める関数
   * @brief 円の面積を求める
   * @param[in] r 半径
   * @return 最小値
   */
double circ_area(double r) {
	const double pie = 3.14; // 円周率

	/* 面積を返す */
	return r*r*pie;
}


/**
  * @fn
  * メイン関数
  * @brief 円の面積を求める関数
  * @return 0:正常終了
  */
int main() {

	int inputNumber =  0 ;	// 入力数値
	double area = 0;	// 面積

	/* 入力促し表示 */
	std::cout << "数値を入力してください。\n";

	/* 数値入力 */
	std::cin >> inputNumber;

	/* 最小値判定判定 */
	area = circ_area(inputNumber);

	/* 結果表示 */
	std::cout << "円の面積は" << area << "です。\n";

	return 0;
}
