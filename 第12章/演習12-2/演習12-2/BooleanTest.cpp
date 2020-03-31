/**
 * @file Exerises12-2.cpp
 * @brief 演習12-2	下記のクラスBooleanに対して、vがFalseであればbool型のtrueを、Trueであればbool型のfalseを返却する演算子関数!を追加せよ。
 * @author shitashige
 * @date 20200331
 */


#include <iostream>
#include "Boolean.h"
using namespace std;


/**
 * @fn
 * int_eq
 * @brief xとyが正しいかどうか確認
 * @return
 */
Boolean int_eq(int x, int y) {
	return x == y;
}



/**
 * @fn
 * operator!
 * @brief vがfalseだとtrueを返す
 * @return
 */
bool Boolean::operator!() const {

	return v == False;
}


/**
 * @fn
 * main
 * @brief メイン関数
 * @return
 */
int main() {
	int n;	// 変数n
	Boolean a;	// 変数a	デフォルトコンストラクタ
	Boolean b = a;	// 変数b	コピーコンストラクタ
	Boolean c = 100;	// 変数c	変換コンストラクタ
	Boolean x[8];	// x[0]～x[7]	デフォルトコンストラクタ

	/* メッセージ表示 */
	cout << "整数値：";
	/* 値入力 */
	cin >> n;

	/* 入力値を5と比較 */
	x[0] = int_eq(n, 5);

	/* 入力値を3と比較 */
	x[1] = n != 3;

	/* False */
	x[2] = Boolean::False;

	/* 1000を格納 */
	x[3] = 1000;

	/* true */
	x[4] = Boolean::True;

	/* メッセージ表示 */
	cout << "aの値：" << int(a) << '\n';

	/* メッセージ表示 */
	cout << "bの値：" << static_cast<const char *>(b) << '\n';

	/* xの要素分ループ */
	for (int i = 0; i < 8; i++) {
		/* メッセージ表示 */
		cout << "x[" << i << "] = " << x[i] << '\n';

	}

	/* メッセージ表示 */
	cout << "ここから下は「！」のテスト結果\n";


	/* xの要素分ループ */
	for (int i = 0; i < 8; i++) {
		/* メッセージ表示 */
		cout << boolalpha << "x[" << i << "] = " << !x[i] << '\n';

	}

}