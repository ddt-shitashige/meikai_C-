/**
 * @file Exerises3-5.cpp
 * @brief 演習3-5	読み込んだ値が1未満であれば改行文字を出力しないようにList3-6(p92)を書き換えたプログラムを作成せよ。
 * @author shitashige
 * @date 20200108
 */


#include<iostream>

	using namespace std;

/**
 * @fn
 * メイン関数
 * @brief 入力した数値分だけ＊を出力するメソッド
 * @return 0:正常終了
 */
int main() {
	int n;		// 問題文がこう行っているだけで、私の意志ではない。

	/* メッセージ表示 */
	cout << "何個*を表示しますか：";

	/* 個数入力 */
	cin >> n;

	/* 入力数値が1未満だったら終了 */
	if (n < 1) {
		return 0;
	}

	int i = 0;// 問題文がこう行っているだけで、私の意志ではない。

	/* 入力した数値分だけループ */
	while (i < n) {
		/* *マークを出力 */
		cout << '*';
		/* カウントをプラス1 */
		i++;
	}
	/* 改行記号を出力 */
	cout << '\n';

	return 0;
}

