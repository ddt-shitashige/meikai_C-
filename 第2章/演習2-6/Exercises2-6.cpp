/**
 * @file Exerises2-6.cpp
 * @brief 演習2-6	キーボードから読み込んだ点数に応じて、優/良/可/不可を判定して表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20191218
 */

#include <iostream> 

 /**
  * @fn
  * メイン関数
  * @brief 点数判定関数
  * @return 0:正常終了
  */
int main() {

	int inputNumber;		// 入力された数字

	/* ユーザー入力を促すメッセージを表示 */
	std::cout << "点数を入力して下さい。";

	/* ユーザー入力 */
	std::cin >> inputNumber;

	/* 負値だった場合、今回は何もしない */
	if (inputNumber < 0);
	/* 60点未満だった場合、不可と表示する */
	else if (inputNumber < 60) {
		/* メッセージを表示 */
		std::cout << "不可";
	}
	/* 70点未満だった場合、可と表示する */
	else if (inputNumber < 70) {
		/* メッセージを表示 */
		std::cout << "可";
	}
	/* 80点未満だった場合、良と表示する */
	else if (inputNumber < 80) {
		/* メッセージを表示 */
		std::cout << "良";
	}
	/* 100点以下だった場合、優と表示する */
	else if (inputNumber <= 100) {
		/* メッセージを表示 */
		std::cout << "優";
	}
	/* それ以外の点数は何も表示しない */
	else;

	return 0;
}