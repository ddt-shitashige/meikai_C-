/**
 * @file Exerises3-20.cpp
 * @brief	
 * @author shitashige
 * @date 20200123
 */

#include "iostream"

 /**
  * @fn
  * メイン関数
  * @brief *の直角三角形を表示する関数
  * @return 0:正常終了
  */
int main() {

	int inputCount;		// 入力カウント

	/* 文字出力 */
	std::cout << "数値を入力してください。";
	/* 数値入力 */
	std::cin >> inputCount;

	/* 入力数の列分ループする */
	for (int i = 0; i < inputCount; i++) {
		/* 入力数の行分ループする */
		for (int j = 0; j < inputCount; j++) {
			/* 列数が行数を超えていなかったら*マークを出力 */
			if (i <= j) {
				/* 文字出力 */
				std::cout << "*";
			}
			/* 列数が行数を超えていたら空白を出力 */
			else {
				/* 文字出力 */
				std::cout << " ";

			}
		}
		/* 改行 */
		std::cout << "\n";
	}
}