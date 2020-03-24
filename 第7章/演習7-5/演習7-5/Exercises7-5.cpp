/**
 * @file Exerises7-5.cpp
 * @brief 演習7-5	List7-10の関数reverseでの2要素の交換を、演習7-2で作成した関数swapの呼出しによって行うように変更したプログラムを作成せよ。
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

		/* 値を交換する関数を呼び出す。 */
		swap(a[i], a[n - i - 1]);
	}
}

/**
 * @fn
 * main
 * @brief 引数1と引数2の値を交換
 * @param x 1つ目の数値
 * @param y 2つ目の数値
 * @return 0:正常終了
 */
void swap(int *x, int *y) {
	/* tにxを入れる*/
	int t = *x;
	/* xの値をyにする */
	*x = *y;
	/* yの値をxにする */
	*y = t;
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