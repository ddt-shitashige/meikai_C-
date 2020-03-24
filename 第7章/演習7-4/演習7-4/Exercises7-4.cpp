/**
 * @file Exerises7-4.cpp
 * @brief 演習7-4	typeid演算子を用いて型を表示することによって、List7-10の関数reverseの仮引数aが配列でなくポインタであることを確認せよ。
 * @author shitashige
 * @date 20200324
 */



#include <iostream>

using namespace std;
/**
 * @fn
 * main
 * @brief 配列の並びを反転する
 * @param a 配列
 * @param n 要素数
 * @return
 */
void reverse(int a[], int n) {
	/* 配列を反転するループ */
	for (int i = 0; i < n / 2; i++) {
		/* tに配列の頭から入れる */
		int t = a[i];
		/* 配列の尻からを配列の頭に入れる */
		a[i] = a[n - i - 1];
		/* tの内容を尻に入れる */
		a[n - i - 1] = t;
	}
	/* 仮引数の型を表示 */
	cout << "aの型「" << typeid(a).name() << "」\n";
}

/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	const int  n = 5;	// 配列の要素数

	int c[n];	// 配列c

	/* 配列の中身を入れる */
	for (int i = 0; i < n; i++) {
		/* メッセージ表示 */
		cout << "c[" << i << "]:";
		/* cの中身を入れる */
		cin >> c[i];
	}

	/* 配列の中身を逆にする */
	reverse(c, n);

	/* メッセージ表示 */
	cout << "要素の並びを反転しました\n";

	/* 配列の中身を表示するループ */
	for (int i = 0; i < n; i++) {
		/* 配列の中身を表示 */
		cout << "c[" << i << "]" << c[i] << '\n';
	}

	return 0;
}