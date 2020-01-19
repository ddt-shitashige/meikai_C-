/**
 * @file Exerises3-16.cpp
 * @brief 演習3-16	右に示すように1からnまでの整数値の2乗を表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20200119
 */
#include <iostream>


/**
 * @fn
 * メイン関数
 * @brief 乗数を表示する関数
 * @return 0:正常終了
 */
int main() {
	int countNumber;		// カウント番号

	/* 文字出力 */
	std::cout << "nの値\n";

	/* 文字入力 */
	std::cin >> countNumber;


	/* 入力したカウント番号になるまで乗数を表示するループ */
	for (int count = 1; count <= countNumber; count++) {
		std::cout << count << "の2乗は" << count * count << "\n";
	}

}