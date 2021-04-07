/**
 * @file Exerises3-9.cpp
 * @brief 演習3-9	正の整数値を0までカウントダウンするList3-4をfor文で作成せよ。
 * @author shitashige
 * @date 20200114
 */


#include<iostream>

using namespace std;

/**
 * @fn
 * メイン関数
 * @brief カウントダウンのプログラム
 * @return 0:正常終了
 */
int main() {
	int x;		// 問題文がこう行っているだけで、私の意志ではない。

	/* メッセージ表示 */
	cout << "カウントダウンします。\n";

	/* xに0以上の値が入力されるまで入力させる */
	do {
		/* 文字出力 */
		cout << "正の整数値:";
		/* 文字入力 */
		cin >> x;
	} while (x <= 0);
	/* xが0以上の間はループし、1回ループがおわるごとにxをデクリメント */
	for (; x >= 0; x--) {
		/* 現在のxの値を出力 */
		cout << x << "\n";
	}
}

