/**
 * @file Exerises5-6.cpp
 * @brief 演習5-6	要素型がint型で要素数が15の配列の全要素に0～10の乱数を代入して、右のように棒グラフで値を表示するプログラムを作成せよ。棒グラフは記号文字'*'を横方向に並べたものとする。
 * @author shitashige
 * @date 20200303
 */


#include <iostream>
#include <ctime>
#include <iomanip>

 /**
  * @fn
  * メイン関数
  * @brief 配列にランダム数値を入れて*マークを出力する関数
  * @return 0:正常終了
  */
int main() {

	const int element = 14;	// 要素数
	int rundomNumber = 0;	// ランダム数値
	int number[element] = { 0 };	// 数字の配列

	/* 初期シードを決定 */
	srand((unsigned int)time(NULL));


	/* 要素数分だけループ */
	for (int i = 0; i < element; i++) {
		/* 乱数から11のあまりを求める事により、値が0～10の間になる。 */
		rundomNumber = rand() % 11;

		/* 配列にランダム数値を格納 */
		number[i] = rundomNumber;
		/* テンプレート出力 */
		std::cout << "a[" << std::setw(3) << i << "]：";

		/* *為のループ */
		for (int j = 0; j < number[i]; j++) {
			/* *マーク出力 */
			std::cout << "*";
		}
		/* 改行出力 */
		std::cout << "\n";
	}

	return 0;
}