/*
 * @file  Exerises2-16.cpp
 * @brief 演習2-16	月を1～12の整数値として読み込んで、それに対応する季節を表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20200101
 */
#include <iostream>

 /**
  * @fn
  * メイン関数
  * @brief 季節を表示する関数
  * @return 0:正常終了
  */
int main() {

	const std::string sendSpringMessage = "春です。";	// 春だと伝えるメッセージ
	const std::string sendSummerMessage = "夏です。";	// 夏だと伝えるメッセージ
	const std::string sendAutumnMessage = "秋です。";	// 秋だと伝えるメッセージ
	const std::string sendWinterMessage = "冬です。";	// 冬だと伝えるメッセージ
	int inputNumber = 0;			// 入力された数字

	/* 文字入力を促す */
	std::cout << "1～12の数字を入力してください";

	/* 数値入力 */
	std::cin >> inputNumber;

	/* スイッチ文にて、入力数値によって表示する文字列を変える */
	switch (inputNumber) {
			break;
		/* 乱数が1だった場合 */
		case 1: std::cout << sendWinterMessage;
			break;
		/* 乱数が2だった場合 */
		case 2: std::cout << sendWinterMessage;
			break;
		/* 乱数が3だった場合 */
		case 3: std::cout << sendSpringMessage;
			break;
		/* 乱数が4だった場合 */
		case 4: std::cout << sendSpringMessage;
			break;
		/* 乱数が5だった場合 */
		case 5: std::cout << sendSpringMessage;
			break;
		/* 乱数が6だった場合 */
		case 6: std::cout << sendSummerMessage;
			break;
		/* 乱数が7だった場合 */
		case 7: std::cout << sendSummerMessage;
			break;
		/* 乱数が8だった場合 */
		case 8: std::cout << sendSummerMessage;
			break;
		/* 乱数が9だった場合 */
		case 9: std::cout << sendAutumnMessage;
			break;
		/* 乱数が10だった場合 */
		case 10: std::cout << sendAutumnMessage;
			break;
		/* 乱数が11だった場合 */
		case 11: std::cout << sendAutumnMessage;
			break;
		/* 乱数が12だった場合 */
		case 12: std::cout << sendWinterMessage;
			break;
	}
	return 0;
}