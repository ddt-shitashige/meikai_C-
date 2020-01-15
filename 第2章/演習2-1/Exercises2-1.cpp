/**
 * @file Exerises2-1.cpp
 * @brief 演習2-1	整数値を読み込んで、その絶対値を表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20191218
 */

#include <iostream> 

/**
 * @fn
 * メイン関数
 * @brief 絶対値を表示する関数
 * @return 0:正常終了
 */
int main() {

	int inputNumber = 0;		// ユーザー入力した数字
	int absoluteValue = 0;		// 絶対値

	/* ユーザー入力を促すメッセージを表示 */
	std::cout << "整数値";

	/* ユーザー入力待機 */
	std::cin >> inputNumber;

	/* if文により、正負かを判断 */
	if (inputNumber > 0) {
		/* 正値ならそのまま絶対値にする */
		absoluteValue = inputNumber;
	}
	else if (inputNumber < 0) {
		/* 負値なら-1を掛けて絶対値に */
		absoluteValue = -inputNumber;
	}
	else;
		/* 0はそのままにする */

	/* 出力表示 */
	std::cout << "その絶対値は" << absoluteValue << "です\n";

	return 0;
}
