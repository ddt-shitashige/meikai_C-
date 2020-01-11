/**
 * @file Exerises3-7.cpp
 * @brief 演習3-7	右に示すように、制の整数値を読み込んで、その桁数を出力するプログラムをさくせいせよ。
 * @author shitashige
 * @date 20200111
 */


#include<iostream>

/**
 * @fn
 * メイン関数
 * @brief 桁数を求める関数
 * @return 0:正常終了
 */
int main() {
	int inputNumber;		// 入力整数値

	/* メッセージ表示 */
	std::cout << "正の整数値";

	/* 個数入力 */
	std::cin >> inputNumber;

	int roopCount = 1;	// ループカウント

	/* ループカウントをカウントアップする無限ループ */
	for(;;roopCount++){

		/* 入力した文字の桁を1つ下げる */
		inputNumber = inputNumber / 10;
		/* 入力した文字を10で割って0になるまで割る */
		if (inputNumber == 0) {
			break;
		}
	}

	/* 文字出力 */
	std::cout<<"その桁は"<< roopCount<<"です。";

	return 0;
}

