/**
 * @file Exerises3-4.cpp
 * @brief 演習3-4	List3-4のWhile文集っ領事にXの値が-1になる事を確認できるように書き換えたプログラムを作成せよ。
 * @author shitashige
 * @date 20200105
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
	/* xが0以上の間はループ */
	while (x >= 0) {
		/* 現在のxの値を出力 */
		cout << x << "\n";
		/* xをデクリメント */
		x--;
	}
	/* xの値がどうなっているかを出力 */
	cout << "最後：" << x << "\n";
}

