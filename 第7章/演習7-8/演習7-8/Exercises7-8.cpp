/**
 * @file Exerises7-8.cpp
 * @brief 演習7-8	要素数nの配列aから要素a[idx]を先頭とするk個の要素を削除する関数arynrmvを作成せよ。
 *					削除はa[idx]より後方の全要素をk個前方にずらすことによって行うこと。なお、移動されずにあまってしまう要素の値は変更しなくてよい。
 *					int arynrmv(int a[], int n, int idx, int k)
 * @author shitashige
 * @date 20200324
 */



#include <iostream>

using namespace std;
/**
 * @fn
 * main
 * @brief 配列の要素をずらす
 * @param a 配列
 * @param n 要素数
 * @param idx 削除する要素番号
 * @param k 削除する要素個数
  * @return 問題文に指定してあるからするけどこれintの必要ないのでは？
 */
int arynrmv(int a[], int n, int idx, int k) {

	/* 要素番号から配列を削除するループ */
	for (int i = idx + 1; i < n; i++) {

		/* 配列の最大要素数を超えていなかった場合の処理 */
		if (i + k < n) {
			/* 値をずらす */
			a[i - 1] = a[i + k - 1];
		}
		/* 配列の最大要素数を超えていた場合の処理 */
		else {
			/* 一番後ろの値を入れる */
			a[i - 1] = a[n - 1];
		}
	}
	return 0;
}


/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	const int element = 5;	// 配列の要素数

	int array[element];	// 配列c

	/* 配列の中身を入れる */
	for (int i = 0; i < element; i++) {
		/* メッセージ表示 */
		cout << "c[" << i << "]:";
		/* cの中身を入れる */
		cin >> array[i];
	}

	int removeIndex = 0;	// 削除する項番

	do {
		/* メッセージ表示 */
		cout << "削除する項番を入力してください。\n";
		/* 削除する項番入力 */
		cin >> removeIndex;
		/* 配列の要素数以上に値があった場合はもう一度行う */
	} while (removeIndex < 0 || removeIndex>5);

	int removeCount = 0;	// 削除する個数

	do {
		/* メッセージ表示 */
		cout << "削除する個数を入力してください。\n";
		/* 削除する項番入力 */
		cin >> removeCount;
		/* 配列の要素数以上に値があった場合はもう一度行う */
	} while (removeCount < 0 || removeCount>5);



	/* ずらし関数呼び出し */
	arynrmv(array, element, removeIndex, removeCount);

	/* 配列の中身を表示するループ */
	for (int i = 0; i < element; i++) {
		/* 配列の中身を表示 */
		cout << "c[" << i << "]" << array[i] << '\n';
	}

	return 0;
}