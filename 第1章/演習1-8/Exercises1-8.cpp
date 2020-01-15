/**
 * @file Exerises1-8.cpp
 * @brief 演習1-8	int型の変数に実数値の初期化子を与えるとどうなるか。プログラムを作成して確認せよ。
 * @author shitashige
 * @date 20191211
 */

#include <iostream>

/**
 * @brief main関数
 * @return 0:正常
 */
int main() {

	int initializerInt = 3.2;		// 初期化子に少数の実数値を与えたint

	/* 値出力 */
	std::cout << "初期化子に少数の実数値を与えたintの数値:" << initializerInt << "\n";

	/* 一緒ですね */
	std::cout << "少数が切り捨てられる。";
}
