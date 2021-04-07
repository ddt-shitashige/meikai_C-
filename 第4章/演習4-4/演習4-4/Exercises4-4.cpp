/**
 * @file Exerises4-4.cpp
 * @brief	文字リテラルと整数リテラルに対してsizeof演算子を適用した値を表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20200207
 */

#include <iostream>
/**
 * @fn
 * メイン関数
 * @brief 整数リテラル0が8進リテラルである事を論理的に説明する関数。
 * @return 0:正常終了
 */
int main() {

	char number = 1;		// 数字
	char letter[] = "1";	// 文字

    /* 数字リテラルの大きさ出力 */
	std::cout << "数字リテラル：" << sizeof(number) << "\n";

    /* 文字リテラルの大きさ出力 */
	std::cout << "文字リテラル：" << sizeof(letter) << "\n";

	/*
	 * このプログラムを実行すると、数字リテラルが1バイト
	 * 文字リテラルが2バイトという事が分かる。
	 * これは文字リテラルの文字コードがSHIFT_JISだからである。
	 */
}