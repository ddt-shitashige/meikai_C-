/**
 * @file Exerises6-11.cpp
 * @brief 演習6-11	List6-11を拡張して、以下の4種類の問題をランダムに出題するプログラムを作成せよ。
					x+y+z
					x+y-z
					x-y+z
					x-y-z
 * @author shitashige
 * @date 20200322
 */


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/**
  * @fn
  * 続行確認関数。
  * @brief 問題を続行するか確認する
  * @return
  */
bool confirm_retry() {
	int retry;	// リトライ確認値


	do {
		/* メッセージ出力 */
		cout << "もう一度<Yes...1/No...0>";
		/* リトライ値入力 */
		cin >> retry;


		/* 入力値が0か1以外ならループ */
	} while (retry != 0 && retry != 1);

	/* 入力値をbool型に変更してリターン */
	return static_cast<bool>(retry);
}

/**
 * @fn
 * メイン関数
 * @brief 問題をランダムに出題する。
 * @return 0:正常終了
 */
int main() {

	/* 初期シード決定 */
	srand(time(NULL));

	/* メッセージ出力 */
	cout << "暗算トレーニング開始\n";

	int questionNumber;	// 問題番号

	do {
		int x = rand() % 900 + 100;	// 3桁の数
		int y = rand() % 900 + 100;	// 3桁の数
		int z = rand() % 900 + 100;	// 3桁の数

		/* 問題番号決定 */
		questionNumber = rand() % 4;


		while (true) {
			int k;	// 読み込んだ値

			/* 問題番号が0だった場合 */
			if (questionNumber == 0) {
				/* 式出力 */
				cout << x << "+" << y << "+" << z << "=";
			}
			/* 問題番号が1だった場合 */
			else if (questionNumber = 1) {
				/* 式出力 */
				cout << x << "+" << y << "-" << z << "=";
			}
			/* 問題番号が2だった場合 */
			else if (questionNumber = 2) {
				/* 式出力 */
				cout << x << "-" << y << "+" << z << "=";
			}
			/* 問題番号が3だった場合 */
			else if (questionNumber = 3) {
				/* 式出力 */
				cout << x << "-" << y << "-" << z << "=";
			}
			/* 答え入力 */
			cin >> k;
			/* 問題番号が0だった場合 */
			if (questionNumber == 0) {
				/* 入力値確認 */
				if (k == x + y + z) {
					/* ループ脱出 */
					break;
				}
			}
			/* 問題番号が1だった場合 */
			else if (questionNumber = 1) {
				/* 入力値確認 */
				if (k == x + y - z) {
					/* ループ脱出 */
					break;
				}
			}
			/* 問題番号が2だった場合 */
			else if (questionNumber = 2) {
				/* 入力値確認 */
				if (k == x - y + z) {
					/* ループ脱出 */
					break;
				}
			}
			/* 問題番号が3だった場合 */
			else if (questionNumber = 3) {
				/* 入力値確認 */
				if (k == x - y - z) {
					/* ループ脱出 */
					break;
				}
			}
			/* メッセージ出力 */
			cout << "\a違いますよ\n";
		}
		/* 続行の確認関数を呼び出す */
	} while (confirm_retry());
	return 0;
}