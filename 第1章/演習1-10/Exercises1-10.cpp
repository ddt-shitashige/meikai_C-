/**
 * @file Exerises1-10.cpp
 * @brief 演習1-10	右に示すように。キーボードから読み込んだ整数値に10を加えた値と10を減した値を出力するプログラムを作成せよ
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

	/* ユーザーから数値を入力 */
	std::cin >> inputNumer;

	/*
	 * 文字出力
	 */
	/* 加算値表示 */
	std::cout << "10を加えた値は" << inputNumer + 10 << "です\n";
	/* 減算値表示 */
	std::cout << "10を減じた値は" << inputNumer - 10 << "です\n";

	return 0;
}