/**
 * @file Exerises3-25.cpp
 * @brief	List3-3(p87)の数あてゲームのプレイヤーが値を入力できる回数に制限を設けたプログラムを作成せよ。
 *			制限回数内に当てられなかった場合は、政界を表示してゲームを終了する事。
 * @author shitashige
 * @date 20200131
 */


#include <ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

/**
 * @fn
 * メイン関数
 * @brief 数当てゲームを行う関数
 * @return 0:正常終了
 */
int main() {
	/* 初期シード決定 */
	srand(time(NULL));

	/* 0～99の乱数を設定 */
	int no = rand() % 100;	// ランダム数値(問題文がこう行っている)
	int x;					// キーボードから読み込んだ数値(問題文がこう行っている)
	int limitNumber = 0;		// 制限回数
	int limitCount = 1;			// 制限カウント

	/* 題目出力 */
	cout << "数当てゲーム開始\n";

	/* ルール説明 */
	cout << "0から99の数を当ててください\n";

	/* 追加ルール表示 */
	cout << "回数制限を設定します。(0は回数制限なし)";

	/* 制限回数入力 */
	cin >> limitNumber;

	/* noとxが同じになるまでループ */
	do {
		/* 問題定義 */
		cout << "いくつかな：";

		/* 数値入力 */
		cin >> x;

		/* 入力値が乱数より小さかった場合 */
		if (x > no)
			/* ヒント出力 */
			cout << "\aもっと小さな数だよ\n";

		/* 入力値が乱数より大きかった場合 */
		else if (x < no)
			/* ヒント出力 */
			cout << "\aもっと大きな数だよ\n";

		/* 制限回数が入力されていれば、制限ルールが適用される */
		if (limitNumber != 0) {
			/* 入力回数が制限回数を超えていたらブレイク */
			if (limitNumber <= limitCount) {

				/* 回答出力 */
				cout << "答えは" << no << "です。\n";

				/* 終了 */
				return 0;
			}
			/* 制限カウントカウントアップ */
			limitCount++;
		}
	} while (x != no);

	/* 回答出力 */
	cout << "正解です\n";
	return 0;
}