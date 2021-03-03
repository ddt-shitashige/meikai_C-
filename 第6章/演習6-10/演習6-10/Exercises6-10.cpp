/**
 * @file Exerises6-10.cpp
 * @brief 演習6-10	「正の整数値：」と表示して、キーボードから正の整数値を読み込んで、その値を返却する関数read_pintを作成せよ。0や負の値が入力されたら再入力させること。右の例であれば15を返却する。
					int reat_pint()
 * @author shitashige
 * @date 20200321
 */


#include <iostream>

 /**
   * @fn
   * 数値入力関数。
   * @brief 0以上の数値を入力させる。
   * @return
   */
int read_pint() {
	int inputNumber;	// 入力値


	do {
		/* メッセージ出力 */
		std::cout << "正の整数値：";

		/* 数値入力 */
		std::cin >> inputNumber;

		/* 入力値が0以下ならループ */
	} while (inputNumber <= 0);


	return inputNumber;
}

/**
 * @fn
 * メイン関数
 * @brief 数値入力関数を呼び出す。
 * @return 0:正常終了
 */
int main() {

	/* a値入力 */
	std::cout << "入力した数値は" << read_pint() << "です。\n";

	return 0;
}