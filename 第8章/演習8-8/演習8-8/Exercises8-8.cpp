/**
 * @file Exerises8-8.cpp
 * @brief 演習8-8	文字列s内の文字を末尾から先頭へと逆順に表示する関数put_revを作成せよ。たとえば、文字列sが"abc"であれば、「cba」と表示する。
 *					void put_rev(const char *s)
 * @author shitashige
 * @date 20200325
 */


#include <iostream>


 /**
  * @fn
  * put_rev
  * @brief 文字列を逆順に表示する
  * @param s 文字列
  * @return 0:正常終了
  */
void put_rev(const char *s) {
	/* null文字が来るまでループ */
	for (int i = std::strlen(s) - 1; i >= 0; i--) {
		/* 文字列出力 */
		std::cout << s[i];
	}
}

/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	const int stringLen = 30;	// 文字長さ

	char inputString[stringLen];	// 入力文字

	/* メッセージ表示 */
	std::cout << "文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(inputString, stringLen);

	/* 文字列を逆順に出力 */
	put_rev(inputString);

}