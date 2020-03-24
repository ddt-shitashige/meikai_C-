/**
 * @file Exerises7-14.cpp
 * @brief 演習7-14	要素数nの配列a内のkeyと等しい全要素の添字を配列idxに格納する関数search_idxを作成せよ。返却するのはkeyと等しい要素の個数とする。
 *					たとえば、aに受け取った配列の要素が{1, 7, 5, 7, 2, 4, 7}でkeyが7であれば、idxに{1, 3, 6}を格納した上で 3を返却する。
 *					int search_idx(int *a, int *idx, int n, int key)
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
 * @brief 配列の中から数値を探知する
 * @param *a 探知する配列
 * @param *idx 探知した数値がどこにあるかの配列
 * @param n 要素数
 * @param key 探知する数値
 * @return 探索後の個数
 */
int search_idx(int *a, int *idx, int n, int key) {


	int idxCount = 0;	// idxのカウント
	/* 要素数分ループ */
	for (int i = 0; i < n; i++) {
		/* 探索数値と格納数値が同じだった場合の処理 */
		if (a[i] == key) {
			/* 数値を格納 */
			idx[idxCount] = i;
			/* idxのカウントカウントアップ */
			idxCount++;
		}
	}
	return idxCount;
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
		/* 配列の中身を入れる */
		cin >> array[i];
	}

	int searchNumber;	// 探索番号

	/* メッセージ表示 */
	cout << "探索する数値は";
	/* 探索番号の中身を入れる */
	cin >> searchNumber;


	int searchArray[rowElement] = { 0 };	// 探索後の配列

	/* 格納関数呼び出し&表示 */
	cout << "結果は" << search_idx(array, searchArray, rowElement, searchNumber) << "個見つかりました。\n項番は\n";

	/* 表示関数呼び出し */
	print2d(searchArray, rowElement);


	return 0;
}