/**
 * @file Exerises1-11.cpp
 * @brief 演習1-11	右に示すように、二つの実数値を読み込み、その合計と平均を求めて表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20191211
 */

#include <iostream>

using namespace std;
/**
 * @brief main関数
 * @return 0:正常
 */
int main() {

	double inputNumberX = 0;	// 入力したXの値
	double inputNumberY = 0;	// 入力したYの値

	/* X値の入力を促す分を出力 */
	cout << "Xの値を入力してください\n";
	
	/* X値入力*/
	cin >> inputNumberX;

	/* Y値の入力を促す分を出力 */
	cout << "Yの値を入力してください\n";

	/* Y値入力*/
	cin >> inputNumberY;

	/* 合計値と平均値出力 */
	cout << "合計は" << inputNumberX + inputNumberY << "です。\n平均は" << (inputNumberX + inputNumberY) / 2 << "です";

	return 0;

}