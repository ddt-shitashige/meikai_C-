/**
 * @file Exerises3-18.cpp
 * @brief	九九の表を表示するList3-13(p.106)を、setw操作子を用いることなく実現するように書き換えたプログラムを作成せよ。
 * @author shitashige
 * @date 20200122
 */

#include "iostream"

using namespace std;
/**
 * @fn
 * メイン関数
 * @brief 九九を表示する関数
 * @return 0:正常終了
 */
int main() {
	/* 九九の列分ループする */
	for (int i = 1; i <= 9; i++) {
		/* 九九の行分ループする */
		for (int j = 1; j <= 9; j++) {
			/* 解が1桁だった場合、空白は2つとする */
			if (i * j / 10 == 0) {
				/* 文字出力 */
				cout << "  " << i * j;
			}
			/* 解が2桁だった場合空白は1つとする */
			else {
				/* 文字出力 */
				cout << " " << i * j;
			}
		}
		/* 改行 */
		cout << "\n";
	}
}