/**
 * @file Exerises9-6.cpp
 * @brief 演習9-6	数当てゲーム第2版を以下のように変更したプログラムを作成せよ。
 *					・当てるべき数を0～999とする。
 *					・プレーヤが数値を入力できる回数を最大で10回までに制限する。
 *					・入力ミスを行った（0～999以外の数を入力した）場合は、回数としてカウントしない。
 *					・正解した場合は何回で正解したのかを表示し、最後まで正解しなかった場合は正解を表示する。

 * @author shitashige
 * @date 20200326
 */


#include <iostream>
#include "kazuate.h"
using namespace std;

int max_no = 999;	// 問題の最大値



/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {
	/* 初期シード決定 */
	initialize();

	/* メッセージ表示 */
	cout << "数当てゲーム開始";


	do {
		int answerCount = 0;	// 回答カウント

		/* 問題作成 */
		gen_no();

		int hantei;	// 判定数値
		do {

			/* 数値の判定を行う */
			hantei = judge(input());
			/* 判定が小さかった場合の処理 */
			if (hantei == 1) {
				/* メッセージ表示 */
				cout << "\aもっと小さいですよ。\n";
			}
			/* 判定が大きかった場合の処理 */
			else if (hantei == 2) {
				/* メッセージ表示 */
				cout << "\aもっと大きいですよ。\n";
			}

			/* カウントアップ */
			answerCount++;

			/* 正解するまでループ */
		} while (hantei != 0 && answerCount < 10);

		/* 回答回数が10以下だった場合 */
		if (answerCount < 10) {
			/* メッセージ表示 */
			cout << "正解です。\n";
		}
		else {
			/* メッセージ表示 */
			cout << "回答は" << Answer() << "です。\n";

		}
		/* もう一度行うか確認 */
	} while (confirm_retry());
}