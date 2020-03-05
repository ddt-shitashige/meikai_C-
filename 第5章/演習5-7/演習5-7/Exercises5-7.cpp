/**
 * @file Exerises5-7.cpp
 * @brief 演習5-7	全問を書き換えて縦方向の棒グラフによって値を表示するプログラムを作成せよ。添え字を10で割った余剰を最下段に表示する事。
 * @author shitashige
 * @date 20200305
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
	}

	/* 棒グラフ作成のループ */
	for (int i = 10; i > 0; i--) {
		/* 配列チェック用のループ */
		for (int j = 0; j < element; j++) {
			/* 数字の配列が最上値だったら*を出力 */
			if (number[j] >= i) {
				/* 縦棒出力 */
				std::cout << "*";
			}
			else {
				/* 空白出力 */
				std::cout << " ";
			}
		}
		/* 改行出力 */
		std::cout << "\n";
	}
	/* テンプレート出力 */
	std::cout << "--------------\n";

	/* *為のループ */
	for (int i = 0; i < element; i++) {
		/* *マーク出力 */
		std::cout << i % 10;
	}
	return 0;
}