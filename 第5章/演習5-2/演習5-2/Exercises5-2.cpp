/**
 * @file Exerises5-2.cpp
 * @brief 演習5-2	要素型がdouble型で要素数が5の配列の全要素に0.0を代入して表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20200226
 */

#include <iostream>
/**
 * @fn
 * メイン関数
 * @brief 配列を出力する関数
 * @return 0:正常終了
 */
int main() {

	const int element = 5;	// 要素数
	double number[element] = { 0.0, 0.0, 0.0, 0.0, 0.0 };	// 数字の配列

	/* 要素数分だけループ */
	for (int i = 0; i < element; i++) {
		/* 配列の数値出力 */
		std::cout << number[i] << "\n";
	}
	return 0;
}