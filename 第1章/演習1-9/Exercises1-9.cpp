/**
 * @file Exerises1-9.cpp
 * @brief 演習1-9	右に示すように、キーボードから読み込んだ整数値をそのまま反復して表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20191211
 */
#include <iostream>

/**
 * @brief main関数
 * @return 0:正常
 */
int main() {
	
	int inputNumer = 0;		// 入力された文字

	/* 文字入力を促すメッセージ表示 */
	std::cout << "数値を入力してください。\n";

	/* ユーザーからも文字入力 */
	std::cin >> inputNumer;

	/* 反復して表示 */
	std::cout << inputNumer << "と入力しましたね。\n";

	return 0;

}