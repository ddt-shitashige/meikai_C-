/**
 * @file Exerises3-15.cpp
 * @brief 演習3-15	読み込んだ整数値の全約数を表示するList3-12を書き換えて約数の表示が終了した後に、約数の個数を表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20200118
 */



#include <iostream>

using namespace std;

/**
 * @fn
 * メイン関数
 * @brief 約数を表示する関数
 * @return 0:正常終了
 */
int main() {
	int n;		// 問題文がこう行っていただけで、私の意志ではない。変数n

	/* 文字出力 */
	cout << "整数値：\n";

	/* 文字入力 */
	cin >> n;

	int factorCount = 0;	// 約数カウント

	/* 整数値がMAXになるまで、約数を表示するループ */
	for (int i = 1; i <= n; i++) {
		/* 約数チェック */
		if (n % i == 0){
			/* 約数出力 */
			cout << i << "\n";

			/* 約数カウントインクリメント */
			factorCount++;
		}
	}

	cout <<"約数は"<<factorCount<<"個です。";
}