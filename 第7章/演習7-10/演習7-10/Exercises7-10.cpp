/**
 * @file Exerises7-10.cpp
 * @brief 演習7-10	n行5列のint型2次元配列aの各行の最大値を、要素数nの1次元配列mに格納する関数maxlineを作成せよ。
 *					たとえば、aに受け取った3行5列の配列の構成要素が{ {1, 2, 5, 4, 8}, {6, 7, 4, 2, 3}, {3, 0, 5, 9, 1} }であれば、mに{8, 7, 9}を格納すること。
 *					int maxline(int a[][5], int m[], int n)
 * @author shitashige
 * @date 20200324
 */



#include <iostream>

using namespace std;

const int  rowElement = 5;	// 配列の横要素数
const int  heightElement = 3;	// 配列の縦要素数

/**
 * @fn
 * main
 * @brief 配列の最大値を求める
 * @param a 受け取る配列
 * @param m 最大値をまとめた配列
 * @param n 要素数
 * @return 問題文に指定してあるからするけどこれintの必要ないのでは？
 */
int maxline(int a[][5], int m[], int n) {

	/* 配列の中身を全て見るループ */
	for (int i = 0; i < heightElement; i++) {

		int maxNumber = 0;	// 最大数値
		/* 配列の中身を全て見るループ */
		for (int j = 0; j < rowElement; j++) {
			/* 最大値が今までのを上回っているかを確認 */
			if (maxNumber < a[i][j]) {
				/* 数値を入れる */
				maxNumber = a[i][j];
			}
		}
		/* 返還する配列に格納 */
		m[i] = maxNumber;
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


	int array[heightElement][rowElement];	// 配列c

	/* 配列の中身を入れる */
	for (int i = 0; i < heightElement; i++) {
		/* 配列の中身を入れる */
		for (int j = 0; j < rowElement; j++) {

			/* メッセージ表示 */
			cout << "array[" << i << "]:" << "[" << j << "]";
			/* cの中身を入れる */
			cin >> array[i][j];
		}
	}

	int maxArray[heightElement];	// 最大値の配列

	/* 挿入関数呼び出し */
	maxline(array, maxArray, rowElement);

	/* 配列の中身を表示するループ */
	for (int i = 0; i < heightElement; i++) {
		/* 配列の中身を表示 */
		cout << "maxArray[" << i << "]" << maxArray[i] << '\n';
	}

	return 0;
}