/**
 * @file Exerises8-4.cpp
 * @brief 演習8-4	List8-11では、各配列の個数3が定数としてプログラム中（for文の制御式）に埋め込まれている。計算によって書きかえたプログラムを作成せよ。
 * @author shitashige
 * @date 20200325
 */

#include <iostream>

using namespace std;



/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	char a[][5] = { "LISP","C","Ada" };	// 二次元配列a
//	char *p[]={"PAUL","X","MAC"};	// この宣言はVSだとできないので、コメントアウト

	/* 配列の行数分ループする */
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		/* メッセージ出力 */
		cout << "a[" << i << "]=\"" << a[i] << "\"\n";
	}
}