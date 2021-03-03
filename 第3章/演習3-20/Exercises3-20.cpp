/**
 * @file Exerises3-20.cpp
 * @brief	List3-4は左下が直角の直角三角形を表示するプログラムであった。
 			直角が左上側、右上側右下側の直角三角形を表示するプログラムをそれぞれ作成せよ
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

	/* 文字出力 */
	std::cout << "左上\n\n";

	/* 入力数の列分ループする */
	for (int i = 0; i < inputCount; i++) {
		/* 入力数の行分ループする しかし、初期値をiにすることにより、出力する数を1つずつ減らす */
		for (int j = i; j < inputCount; j++) {
			/* 文字出力 */
			std::cout << "*";
	}
		/* 改行 */
		std::cout << "\n";
	}

	/* 文字出力 */
	std::cout << "\n\n\n右上\n\n";

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

	/* 文字出力 */
	std::cout << "\n\n\n右下\n\n";

	/* 入力数の列分ループする */
	for (int i = 1; i <= inputCount; i++) {
		/* 入力数の行分ループする */
		for (int j = 1; j <= inputCount; j++) {
			/* 入力した文字よりiを引くことにより、右下が直角な三角形を作成できる。 */
			if (j > inputCount - i) {
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