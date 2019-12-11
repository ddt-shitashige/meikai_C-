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

	int initializerInt = 3;		// 初期化子を与えたint
	int noInitializerInt;		// 初期化子を与え無かったint

	/* 数値代入 */
	noInitializerInt = 3;


	/* 合計値出力 */
	std::cout << "初期化子を与えたintの数値:" << initializerInt << "\n";

	/* 平均値出力 */
	std::cout << "初期化子を与えなかったintの数値:" << noInitializerInt << "\n";

	/* 一緒ですね */
	std::cout << "一緒ですね";
}
