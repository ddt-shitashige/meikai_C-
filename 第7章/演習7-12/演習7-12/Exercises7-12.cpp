/**
 * @file Exerises7-12.cpp
 * @brief 演習7-12	要素数nの配列pの全要素にvを代入する関数fillを作成せよ。
 *					void fill(int *p, int n, int v)
 * @author shitashige
 * @date 20200324
 */



#include <iostream>
#include <iomanip>

using namespace std;

const int  rowElement = 5;	// 配列の横要素数


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
 * @brief 配列の最大値を求める
 * @param reciveArray 受け取る配列
 * @param element 要素数
 * @return 配列の最大値
 */
int MaxLine(int reciveArray[5], int element) {

	int maxNumber = 0;	// 最大数値

	/* 配列の中身を全て見るループ */
	for (int i = 0; i < rowElement; i++) {
		/* 最大値が今までのを上回っているかを確認 */
		if (maxNumber < reciveArray[i]) {
			/* 数値を入れる */
			maxNumber = reciveArray[i];
		}
	}
	return maxNumber;
}

/**
 * @fn
 * main
 * @brief 配列を表示する
 * @param recvArray 受け取った配列
 * @param n 要素数
 * @return
 */
void print2d(int recvArray[5], int element) {

	/* 配列の最大値を求める */
	int maxNumber = MaxLine(recvArray, element);	// 配列の最大値

	/* 桁数を求める */
	int maxDigit = MaxDigit(maxNumber);	// 最大桁数

	/* 配列の中身を表示するループ */
	for (int i = 0; i < rowElement; i++) {
		/* 空白を詰める */
		cout << setfill(' ');
		/* スペースを求めて(+1はマイナス分)表示する */
		cout << setw(maxDigit + 1) << left << recvArray[i] << " ";
	}
	return;
}


/**
 * @fn
 * main
 * @brief 配列の全要素に値を格納する
 * @param *p 受け取った配列
 * @param n 要素数
 * @param v 格納する数値
 * @return
 */
void fill(int *p, int n, int v) {

	/* 要素数分ループ */
	for (int i = 0; i < n; i++) {
		/* 数値格納 */
		p[i] = v;
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


	int array[rowElement];	// 配列

	/* 配列の中身を入れる */
	for (int i = 0; i < rowElement; i++) {

		/* メッセージ表示 */
		cout << "array[" << i << "]:";
		/* cの中身を入れる */
		cin >> array[i];
	}

	int inputNumber;	// 格納する数値

	/* メッセージ表示 */
	cout << "格納する数値:";
	/* cの中身を入れる */
	cin >> inputNumber;


	/* 格納関数呼び出し */
	fill(array, rowElement, inputNumber);

	/* 表示関数呼び出し */
	print2d(array, rowElement);


	return 0;
}