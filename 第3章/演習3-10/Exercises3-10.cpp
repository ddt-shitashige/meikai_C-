/**
 * @file Exerises3-10.cpp
 * @brief 演習3-10	全問とは逆に、0から正の整数値までをカウントアップするプログラムを作成せよ。
 * @author shitashige
 * @date 20200115
 */


#include<iostream>

using namespace std;

/**
 * @fn
 * メイン関数
 * @brief カウントアップのプログラム
 * @return 0:正常終了
 */
int main() {
	int x;		// 問題文がこう行っているだけで、私の意志ではない。

	/* メッセージ表示 */
	cout << "カウントアップします。\n";

	/* xに0以上の値が入力されるまで入力させる */
	do {
		/* 文字出力 */
		cout << "正の整数値:";
		/* 文字入力 */
		cin >> x;
	} while (x <= 0);
	/* xがi以上の間はループし、1回ループがおわるごとにiをインクリメント */
	for (int i = 0; i <= x; i++) {
		/* 現在のiの値を出力 */
		cout << i << "\n";
	}
	return 0;
}

