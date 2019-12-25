/**
 * @file Exerises1-6.cpp
 * @brief 演習1-6	List1-7のプログラムを変更して、少数値を持つ実数値をxやyに代入するプログラムを作成せよ。
					その実行結果から、int型変数が整数値のみしか扱えない事を確認する事。
 * @author shitashige
 * @date 20191204
 */


#include <iostream>

using namespace std;

/**
* @brief int型は少数点が扱えないことを認知する関数）
* @return 0：正常
*/
int main() {

	int firstInt = 63.9;			// 一つ目のint型を63.9にする。
	int secondInt = 18.4;			// 二つ目のint型を18.4にする。

	float firstFloat = 63.9;		// 一つ目のfloat型を63.9にする。
	float secondFloat = 18.4;		// 二つ目のfloat型を18.4にする。


	/*
	 * 文字出力を用いて、int型は整数しか扱えない事を証明する。
	 */
	/* int型文字出力 */
	cout << "int型で63.9+18.4を行った結果は「" << firstInt + secondInt << "」\n";
	/* float型文字出力 */
	cout << "float型で63.9+18.4を行った結果は「" << firstFloat + secondFloat << "」\n";

	return 0;
}