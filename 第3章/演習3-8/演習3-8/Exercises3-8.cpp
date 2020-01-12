/**
 * @file Exerises3-8.cpp
 * @brief 演習3-8	読み込んだ値が1未満であれば改行文字を出力しないようにList3-10を書き換えたプログラムを作成せよ。
 * @author shitashige
 * @date 20200112
 */

#include <iostream>

using namespace std;

/**
 * @fn
 * メイン関数
 * @brief 入力した数値分だけ*を出力する関数
 * @return 0:正常終了
 */
int main () {
	int n;		// 問題文がこう行っているだけであり、私の意志ではない
	/* 表示促し文字列表示 */
	cout << "何個*を表示しますか:";
	/* 文字入力 */
	cin >> n;
	/* 読み込んだ文字が1未満か確認 */
	if (n < 1) {
		/* 1未満だった場合プログラム終了 */
		return 0;
	}

	/* 入力した整数値分だけ*を表示する */
	for (int i = 0; i < n; i++) {
		/* *を表示 */
		cout << "*";
	}
	/* 改行文字出力 */
	cout << "\n";

	return 0;
}