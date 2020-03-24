/**
 * @file Exerises7-11.cpp
 * @brief 演習7-11	n行5列のint型2次元配列aの全構成要素の値を縦横に並べて表示する関数print2dを作成せよ。
 *					各構成要素がどのような値であっても、各列の数値の先頭（左端）がそろうように、最低限のスペースを空けること。
 *					void print2d(int a[][5], int n)
 * @author shitashige
 * @date 20200324
 */



#include <iostream>
#include <iomanip>

using namespace std;

const int  rowElement = 5;	// 配列の横要素数
const int  heightElement = 3;	// 配列の縦要素数


/**
 * @fn
 * main
 * @brief 配列の最大値を求める
 * @param reciveArray 受け取る配列
 * @param element 要素数
 * @return 配列の最大値
 */
int MaxLine(int reciveArray[][5], int element) {

	int maxNumber = 0;	// 最大数値

	/* 配列の中身を全て見るループ */
	for (int i = 0; i < heightElement; i++) {

		/* 配列の中身を全て見るループ */
		for (int j = 0; j < rowElement; j++) {
			/* 最大値が今までのを上回っているかを確認 */
			if (maxNumber < reciveArray[i][j]) {
				/* 数値を入れる */
				maxNumber = reciveArray[i][j];
			}
		}
	}

	return maxNumber;
}


/**
 * @fn
 * main
 * @brief 桁数を求める
 * @param number 数値
 * @return 桁数
 */
int MaxDigit(int number) {

	int digit = 0;	// 桁数

	/* 数値が0になるまでループ */
	while (number != 0) {
		/* 10で割り、桁数を1下げる */
		number /= 10;
		/* 桁数をカウントアップ */
		digit++;
	}
	return digit;
}


/**
 * @fn
 * main
 * @brief 配列を表示する
 * @param a 受け取った配列
 * @param n 要素数
 * @return
 */
void print2d(int a[][5], int n) {

	/* 配列の最大値を求める */
	int maxNumber = MaxLine(a, n);	// 配列の最大値

	/* 桁数を求める */
	int maxDigit = MaxDigit(maxNumber);	// 最大桁数

	/* 配列の中身を表示するループ */
	for (int i = 0; i < heightElement; i++) {
		for (int j = 0; j < rowElement; j++) {
			/* 空白を詰める */
			cout << setfill(' ');
			/* スペースを求めて(+1はマイナス分)表示する */
			cout << setw(maxDigit + 1) << left << a[i][j] << " ";
		}
		cout << '\n';
	}
	return;
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

	/* 表示関数呼び出し */
	print2d(array, rowElement);


	return 0;
}