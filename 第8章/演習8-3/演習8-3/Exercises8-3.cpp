/**
 * @file Exerises8-3.cpp
 * @brief 演習8-3	文字列中の大文字を小文字に変換した上で表示する関数put_lowerを作成せよ。
 *					void put_lower(const char s[])
 * @author shitashige
 * @date 20200325
 */

#include <iostream>

using namespace std;


/**
 * @fn
 * put_lower
 * @brief 引数の文字列を小文字化する
 * @param s 文字列
 * @return 0:正常終了
 */
void put_lower(const char s[]) {
	/* 全ての文字列を小文字にするループ */
	for (int i = 0; s[i]; i++) {
		/* 文字列を画面に表示する前に小文字化する */
		cout<<static_cast<char>(tolower(s[i]));
	}
}

/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {
	char string[36];	// 文字列

	/* メッセージ表示 */
	cout<<"文字列：";

	/* 文字列入力 */
	cin>>string;

	/* 文字を小文字化 */
	put_lower(string);

	/* 改行 */
	cout<<"\n";
}