/**
 * @file Exerises7-6.cpp
 * @brief 演習7-6	要素数nの配列aの全要素の合計を求めて返却する関数sumOfを作成せよ。
 *					int sumOf(int a[], int n)
 * @author shitashige
 * @date 20200324
 */



#include <iostream>

using namespace std;
/**
 * @fn
 * main
 * @brief 配列の要素の合計を求める
 * @param a 配列
 * @param n 要素数
 * @return 要素の合計数
 */
int sumOf(int a[], int n) {

	int addNumber = 0;	// 合計数値

	/* 配列要素を加算するループ */
	for (int i = 0; i < n; i++) {

		/* 値を加算する */
		addNumber += a[i];
	}

	return addNumber;
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


	/* 配列の要素の合計値を求めて表示 */
	cout << "要素合計値は" << sumOf(c, n) << "です\n";

	return 0;
}