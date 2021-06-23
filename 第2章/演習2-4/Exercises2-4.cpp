/**
 * @file Exerises2-4.cpp
 * @brief 演習2-4	正の整数値を読み込んで、それが5で割り切れれば『その値は5で割り切れます。』と表示し、
					そうでなければ『その値は5では割り切れません。』と表示するプログラムを作成せよ。
					※せいでない値を読み込んだ場合は『正でない値が入力されました。』と表示する事。
 * @author shitashige
 * @date 20191218
 */

#include <iostream> 

 /**
  * @fn
  * メイン関数
  * @brief 5で割り切れるか否かを判断するプログラム
  * @return 0:正常終了
  */
int main() {

	int inputNumber;		// 入力された数字

	/* ユーザー入力を促すメッセージを表示 */
	std::cout << "数値を入力して下さい。";

	/* ユーザー入力 */
	std::cin >> inputNumber;

	/* 負値か同化を判断 */
	if (inputNumber < 0) {
		/* メッセージ表示 */
		std::cout << "正でない値が入力されました。";
		return 0;
	}

	/* 5で割り切れた場合。 */
	if (inputNumber % 5 == 0) {
		/* メッセージ表示 */
		std::cout << "その値は5で割り切れます。";
	}
	/* 割りきれなかった場合 */
	else {
		/* メッセージ表示 */
		std::cout << "その値は5で割り切れません。";
	}

	return 0;
}