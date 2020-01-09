/**
 * @file Exerises3-6.cpp
 * @brief 演習3-6	読み込んだ値の個数だけ、記号文字を表示するプログラムを作成せよ。+と-を交互に表示する事。
 * @author shitashige
 * @date 20200109
 */


#include<iostream>

using namespace std;

/**
 * @fn
 * メイン関数
 * @brief 入力した数値分だけ+と-を交互に出力するメソッド
 * @return 0:正常終了
 */
int main() {
	int inputCount;		// 問題文がこう行っているだけで、私の意志ではない。

	/* メッセージ表示 */
	cout << "何個表示しますか：";

	/* 個数入力 */
	cin >> inputCount;


	int roopCount = 0;	// ループカウント

	/* 入力した数値分だけループ */
	while (roopCount < inputCount) {
		/* ループカウントを割った数が偶数なら+マークを出力 */
		if (roopCount % 2 == 0) {
			/* +マークを出力 */
			cout << '+';
		}
		/* ループカウントを割った数が奇数なら+マークを出力 */
		else {
			/* -マークを出力 */
			cout << '-';
		}
		/* ループカウントをプラス1 */
		roopCount++;
	}
	return 0;
}

