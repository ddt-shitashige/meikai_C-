/**
 * @file Exerises2-2.cpp
 * @brief 演習2-2	List2-5の最後のelseを、elseif(n==0)に変更するとどうなるか検討せよ。
 * @author shitashige
 * @date 20191218
 */

#include <iostream>

using namespace std;


/**
 * @fn
 * メイン関数
 * @brief List2-5 符号判別関数
 * @return 0:正常終了
 */
int main() {

	int n;		// このintはList2-5がこう書かれてある為であり、私が命名したわけではない。
	
	/* メッセージ出力 */
	cout << "整数値:";
	/* ユーザー入力待ち */
	cin >> n;

	/* nが0より大きければ正値であることを表示する */
	if (n > 0) {
		/* メッセージ出力 */
		cout << "その値は正です。\n";
	}
	/* nが0より小さければ負値であることを表示する */
	else if (n < 0) {
		/* メッセージ出力 */
		cout<< "その値は負です。\n";
	}
	//else
	else if (n == 0) {
		/* メッセージ出力 */
		cout << "その値は0です。\n";
	}

	/*
	 * 結論としては処理は変わらない。
	 * ただ、このように書くと、ヒューマンエラーが発生しやすい為、
	 * 出来るだけ、elseで締めるのが望ましい。
	 */
}