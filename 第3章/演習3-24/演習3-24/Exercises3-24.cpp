/**
 * @file Exerises3-24.cpp
 * @brief	合計だけでなく、平均を求めるようにList3-17を書き換えたプログラムを作成せよ。
 *			なお読み込んだ負の数の個数は平均を求める際の分母から除外する事。
 * @author shitashige
 * @date 20200130
 */

#include "iostream"

using namespace std;

/**
 * @fn
 * メイン関数
 * @brief 入力値の合計と平均値を求める関数
 * @return 0:正常終了
 */
int main() {

	int n;		// 加算する個数（問題文がこう行っているだけで私の意志ではない）

	/* 目的出力 */
	cout << "整数を加算します。\n";

	/* ユーザー問いかけ出力 */
	cout << "何個加算しますか：";

	/* 個数入力 */
	cin >> n;

	int sum = 0;		// 合計値
	int addCount = 0;	// 加算した回数
	int delCount = 0;	// 除外する回数

	/* 最初に入力した */
	for (addCount = 0; addCount < n; addCount++) {
		int t;		// 加算する値（問題文がこう行っているだけで私の意志ではない）

		/* 入力促し文字列出力 */
		cout << "整数:";

		/* 数値入力 */
		cin >> t;

		/* 入力が0ならループから抜ける */
		if (t < 0) {
			/* 通知メッセージ出力 */
			cout<<"\a負の数は加算しません。\n";

			/* 除外回数追加 */
			delCount++;
			continue;
		}

		/* 数値を合計値に足す(負値は加算されない) */
		sum += t;
	}

	/* 合計値出力 */
	cout << "合計は" << sum << "です。\n";

	/* 平均値出力 */
	cout << "平均は" << sum / (addCount-delCount) << "です。\n";

	return 0;
}