/**
 * @file Exerises3-23-2.cpp
 * @brief	合計だけでなく、平均を求めるようにList3-15およびList3-16を書き換えたプログラムをそれぞれ作成せよ。
 * @author shitashige
 * @date 20200129
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

	/* 最初に入力した */
	for (addCount = 0; addCount < n; addCount++) {
		int t;		// 加算する値（問題文がこう行っているだけで私の意志ではない）

		/* 入力促し文字列出力 */
		cout << "整数:";

		/* 数値入力 */
		cin >> t;

		/* 合計値が1000以上ならループから抜ける */
		if (sum+t>1000){
			/* 警告出力 */
			cout << "\a合計が1000を超えました。\n最後の数値は無視します。\n";
			/* ループから抜ける */
			break;
		}
		/* 数値を合計値に足す */
		sum += t;
	}

	/* 合計値出力 */
	cout << "合計は" << sum << "です。\n";

	/* 平均値出力 */
	cout << "平均は" << sum / addCount << "です。\n";
}