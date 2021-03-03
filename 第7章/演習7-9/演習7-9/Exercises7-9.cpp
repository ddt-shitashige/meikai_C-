/**
 * @file Exerises7-9.cpp
 * @brief 演習7-9	要素数nの配列aの要素a[idx]にxを挿入する関数aryinsを作成せよ。
 *					挿入に伴ってa[idx]～a[n-2]を一つ後方にずらさなければならない。たとえば、配列aの要素が{1, 3, 4, 7, 9, 11}のときにaryins(a, 6, 2, 99) と呼び出した後の配列aの要素は{1, 3, 99, 4, 7, 9}となる。
 *					int aryins(int a[], int n, int idx, int x)
 * @author shitashige
 * @date 20200324
 */



#include <iostream>

using namespace std;
/**
 * @fn
 * main
 * @brief 配列に要素を入れる
 * @param a 配列
 * @param n 要素数
 * @param idx 挿入する要素番号
 * @param idx 挿入する数値
 * @return 問題文に指定してあるからするけどこれintの必要ないのでは？
 */
int aryins(int a[], int n, int idx, int x) {

	/* 要素番号から配列を挿入するループ */
	for (int i = n - 1; i > idx - 1; i--) {

		/* 値を挿入するまでのずらした配列の作成 */
		a[i] = a[i - 1];
	}

	/* 値を挿入 */
	a[idx] = x;

	return 0;
}


/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	const int  element = 5;	// 配列の要素数

	int array[element];	// 配列c

	/* 配列の中身を入れる */
	for (int i = 0; i < element; i++) {
		/* メッセージ表示 */
		cout << "c[" << i << "]:";
		/* cの中身を入れる */
		cin >> array[i];
	}

	int insertIndex = 0;	// 挿入する項番

	do {
		/* メッセージ表示 */
		cout << "挿入する項番を入力してください。\n";
		/* 削除する項番入力 */
		cin >> insertIndex;
		/* 配列の要素数以上に値があった場合はもう一度行う */
	} while (insertIndex < 1 || insertIndex>5);

	int insertNumber;	// 挿入数値

	/* メッセージ表示 */
	cout << "挿入する数値を入力してください。\n";
	/* 挿入する数値入力 */
	cin >> insertNumber;

	/* 挿入関数呼び出し */
	aryins(array, element, insertIndex, insertNumber);

	/* 配列の中身を表示するループ */
	for (int i = 0; i < element; i++) {
		/* 配列の中身を表示 */
		cout << "c[" << i << "]" << array[i] << '\n';
	}

	return 0;
}