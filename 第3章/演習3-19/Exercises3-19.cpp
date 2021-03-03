/**
 * @file Exerises3-19.cpp
 * @brief	n団の正方形を表示するプログラムを作成せよ。右に示すのはnが3の時の実行結果である。
 * @author shitashige
 * @date 20200122
 */

#include "iostream"

/**
 * @fn
 * メイン関数
 * @brief *の正方形を表示する関数
 * @return 0:正常終了
 */
int main() {

	int inputCount;		// 入力カウント

	/* 文字出力 */
	std::cout << "数値を入力してください。";
	/* 数値入力 */
	std::cin >> inputCount;

	/* 入力数の列分ループする */
	for (int i = 1; i <= inputCount; i++) {
		/* 入力数の行分ループする */
		for (int j = 1; j <= inputCount; j++) {
			/* 文字出力 */
			std::cout << "*";
		}
		/* 改行 */
		std::cout << "\n";
	}
}