/**
 * @file Exerises2-6.cpp
 * @brief 演習2-7	2つの実数値を読み込んで、大きい方の値を表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20191223
 */
#include <iostream>

/**
 * @fn
 * メイン関数
 * @brief 大きい方の値を表示するプログラム
 * @return 0:正常終了
 */
int main() {
	int inputNumberFront = 0;		// 入力文字前者
	int inputNumberRear = 0;		// 入力文字後者


	/* 整数aの入力を促す */
	std::cout << "整数aを入力してください。\n";
	/* ユーザーに入力させる */
	std::cin >> inputNumberFront;

	/* 整数bの入力を促す */
	std::cout << "整数bを入力してください。\n";
	/* ユーザーに入力させる */
	std::cin >> inputNumberRear;

	std::string resultString;		// 結果文字列

	/* 同値だった場合の考慮 */
	if (inputNumberFront == inputNumberRear) {
		/* 文字挿入 */
		resultString = "ありません。";
	}
	else {
		resultString = inputNumberFront < inputNumberRear ? "bです。" : "aです。";
	}

	/* 結果表示 */
	std::cout << "大きい方の数値は、" << resultString;

	return 0;

}