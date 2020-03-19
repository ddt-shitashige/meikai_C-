/**
 * @file Exerises6-8.cpp
 * @brief 演習6-8	List6-8の関数put_starsを、その内部でList6-9の関数put_ncharを呼び出すことによって表示を行うように書き換えたプログラムを作成せよ。
					void print_season(int m)
 * @author shitashige
 * @date 20200319
 */



#include <iostream>
using namespace std;

/**
  * @fn
  * 引数の文字を引数の回数分出力する関数。
  * @brief 引数の文字を引数の回数分出力する関数。
  * @param[in] n 回数
  * @param[in] c 出力する文字
  * @return
  */
void put_nchar(int n, char c) {
	/* n値が0になるまでループ */
	while (n-- > 0) {
		/* 引数の文字を出力 */
		cout << c;
	}
}
/**
  * @fn
  * 引数の回数分文字を出力する関数。
  * @brief 引数の文字を引数の回数分出力する関数。
  * @param[in] n 回数
  * @return
  */
void put_stars(int n) {
	/* *マークを出力する関数を呼び出す */
	put_nchar(n, '*');
}


/**
  * @fn
  * メイン関数
  * @brief *マークを出力する関数
  * @return 0:正常終了
  */
int main() {

	int n;  // n値（例題がこうなっており私の意志ではない）

	/* 目的表示 */
	cout << "左下直角の三角形を示します。\n";

	/* 入力促し表示 */
	cout << "段数は：";

	/* 数値入力 */
	cin >> n;

	/* 入力値分ループ */
	for (int i = 1; i <= n; i++) {
		/* 引数の回数分文字を出力する関数呼び出し */
		put_stars(i);
		/* 改行表示 */
		cout << "\n";

	}
	return 0;
}
