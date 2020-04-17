/**
 * @file Exerises2-1.cpp
 * @brief 演習2-1 符号無し整数を左右にシフトした値が、（オーバーフローしない限り）2のべき乗での乗算や除算の演算結果と一致することを確認するプログラムを作成せよ。
 * @author shitashige
 * @date 20020417
 */


#include<iostream>

int main() {


	int number;	// 数値

	/* メッセージ出力 */
	std::cout << "数値を入力してください。";

	/* 数値入力 */
	std::cin >> number;

	/* 結果表示 */
	std::cout << "右に1シフトした数値:" << (number << 1) << "\n左に1シフトした結果:" << (number >> 1);
}