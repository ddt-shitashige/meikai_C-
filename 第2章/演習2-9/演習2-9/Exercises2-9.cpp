/**
 * @file Exerises2-9.cpp
 * @brief 演習2-9	右に示すように、二つの整数値を読み込んで、それらの値の差が10以下であれば、「それらの差は10以下です」ト表示し、
 *					そうでなけらば、「それらの差は11以上です」と表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20191224
 */
#include <iostream>

 /**
  * @fn
  * メイン関数
  * @brief 2つの数字の差異を出力するメソッド
  * @return 0:正常終了
  */
int main() {

	int inputNumberFront = 0;		// 入力文字前者
	int inputNumberRear = 0;		// 入力文字後者
	int differenceAnswer = 0;		// 差異結果


	/* 整数Aの入力を促す */
	std::cout << "整数A：\n";
	/* ユーザーに入力させる */
	std::cin >> inputNumberFront;

	/* 整数Bの入力を促す */
	std::cout << "整数B：\n";
	/* ユーザーに入力させる */
	std::cin >> inputNumberRear;

	/* 計算 */
	differenceAnswer = inputNumberFront - inputNumberRear;

	/* 結果を変更しながら出力 */
	std::cout << "それらの差は" << ((differenceAnswer < 10) ? "10以下" : "10以上") << "です。";
}
