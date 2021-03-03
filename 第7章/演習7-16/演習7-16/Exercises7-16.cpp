/**
 * @file Exerises7-15.cpp
 * @brief 演習7-15	double型の配列を動的に生成するプログラムを作成せよ。要素数はキーボードから読み込むこと。また、生成に失敗した場合の処理も行うこと。
 * @author shitashige
 * @date 20200324
 */



#include <iostream>
#include <iomanip>

using namespace std;


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
int MaxLine(double reciveArray[], int element) {

	int maxNumber = 0;	// 最大数値

	/* 配列の中身を全て見るループ */
	for (int i = 0; i < element; i++) {
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
void PrintArray(double recvArray[], int element) {

	/* 配列の最大値を求める */
	int maxNumber = MaxLine(recvArray, element);	// 配列の最大値

	/* 桁数を求める */
	int maxDigit = MaxDigit(maxNumber);	// 最大桁数

	/* 配列の中身を表示するループ */
	for (int i = 0; i < element; i++) {
		/* 空白を詰める */
		cout << setfill(' ');
		/* スペースを求めて(+1はマイナス分)表示する */
		cout << fixed << setprecision(1) << setw(maxDigit + 1) << left << recvArray[i] << " ";
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


	double *doubleArray = NULL;	// double型のポインタ確保

	int doubleElement;	// double型の要素数

	/* メッセージ表示 */
	cout << "配列の確保数;";
	/* 要素数入力 */
	cin >> doubleElement;

	/* 例外処理確認 */
	try {
		/* メモリ確保 */
		doubleArray = new double[doubleElement];
	}
	/* メモリ確保失敗時 */
	catch (bad_alloc) {
		/* メッセージ表示 */
		cout << "エラーが発生しました。";
	}

	/* Nullチェック */
	if (doubleArray == NULL) {
		/* メッセージ表示 */
		cout << "メモリが確保できませんでした。";

	}

	/* 配列の中身を入れる */
	for (int i = 0; i < doubleElement; i++) {
		/* 配列に数値を格納する */
		doubleArray[i] = i;
	}

	/* 表示関数呼び出し */
	PrintArray(doubleArray, doubleElement);

	/* メモリ開放 */
	delete[] doubleArray;

	return 0;
}