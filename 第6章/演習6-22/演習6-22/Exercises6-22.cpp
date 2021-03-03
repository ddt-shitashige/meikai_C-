/**
 * @file Exerises6-22.cpp
 * @brief 演習6-22	ｘの2乗を求めるインライン関数、3乗を求めるインライン関数を作成せよ
 *					inline double square(double x)
 *					inline double cube(double x)
 * @author shitashige
 * @date 20200322
 */


#include <iostream>


/**
  * @fn
  * absolute
  * @brief 2乗値返却
  * @param x 数値x
  * @return
  */
inline double square(double x) {

	return x*x;
}

/**
  * @fn
  * absolute
  * @brief 絶対値返却
  * @param x 数値x
  * @return
  */
inline double cube(double x) {

	return x * x*x;
}

/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	/* メッセージ出力 */
	std::cout << "値を入力してください。\n";

	int Number;	 // 1つ目の数値

	/* 最小値と最大値をユーザー入力 */
	std::cin >> Number;

	/* 最小値返却関数呼び出し */
	std::cout << "入力した数値の2乗は["<<square(Number)<<"]\n3乗は"<< cube(Number)<<"]\n";
	return 0;
}