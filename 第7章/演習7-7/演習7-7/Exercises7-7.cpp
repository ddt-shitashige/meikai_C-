/**
 * @file Exerises7-7.cpp
 * @brief 演習7-7	要素数nの配列aから要素a[idx]を削除する関数aryrmvを作成せよ。
 *					削除はa[idx]より後方の全要素を一つ前方にずらすことによって行う。移動されずにあまってしまう末尾要素a[n-1]の値は変更しなくてもよい。たとえば、配列aの要素が{1, 3, 4, 7, 9, 11}のときにaryrmv(a, 6, 2) と呼び出した後の配列aの要素は{1, 3, 7, 9, 11, 11} となる。
 *					aryrmv(int a[], int n,int idx)
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
 * @return 問題文に指定してあるからするけどこれintの必要ないのでは？
 */
int aryrmv(int a[], int n,int idx) {

	/* 要素番号から配列を削除するループ */
	for (int i = idx+1; i < n; i++) {

		/* 値を加算する */
		a[i-1]= a[i];
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

	const int  element = 5;	// 配列の要素数

	int array[element];	// 配列c

	/* 配列の中身を入れる */
	for (int i = 0; i < element; i++) {
		/* メッセージ表示 */
		cout << "c[" << i << "]:";
		/* cの中身を入れる */
		cin >> array[i];
	}

	int removeIndex=0;	// 削除する項番

	do {
		/* メッセージ表示 */
		cout <<"削除する項番を入力してください。\n";
		/* 削除する項番入力 */
		cin>>removeIndex;
		/* 配列の要素数以上に値があった場合はもう一度行う */
	}while(removeIndex<1||removeIndex>5);

	/* ずらし関数呼び出し */
	aryrmv(array,element,removeIndex);

	/* 配列の中身を表示するループ */
	for (int i = 0; i < element; i++) {
		/* 配列の中身を表示 */
		cout << "c[" << i << "]" << array[i] << '\n';
	}

	return 0;
}