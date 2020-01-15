/**
 * @file Exerises3-11.cpp
 * @brief 演習3-11	1からnまでの和を求めるList3-9をfor文で作成せよ。
 * @author shitashige
 * @date 20200115
 */

#include <iostream>

using namespace std;
/**
 * @fn
 * メイン関数
 * @brief 1から入力値までの総和を求める関数
 * @return 0:正常終了
 */
int main() {
	int n;		// 整数n（問題文がこうしているだけで私の意志ではない）

	/* 今から行う内容の文字列を出力 */
	cout << "1からnまでの和を求めます。\n";
	/* nに正の値が入力されるまでループ */
	do {
		/* ユーザーに入力を促す文字列出力 */
		cout << "nの値";
		/* nの値を入力 */
		cin >> n;
	} while (n <= 0);

	int sum = 0;		// 合計値(問題文がこうしているだけで私の意志ではない)

	/* iをインクリメントしていってそれを足すことで合計値を求める */
	for (int i = 1; i <= n; i++) {
		/* sumにiを足す */
		sum += i;
	}

	cout << "1から" << n << "までの和は" << sum << "です。\n";

	return 0;
}