/**
 * @file Exerises8-6.cpp
 * @brief 演習8-6	文字列sに含まれる文字cの個数を返す関数strch_cntを作成せよ。たとえば、文字列sが"abcabca"で文字cが'a'であれば、返却するのは3である。文字cが含まれない場合は0を返すこと。
 *					int strch_cat(const char *s, char c)
 * @author shitashige
 * @date 20200325
 */


#include <iostream>



 /**
  * @fn
  * strch_cat
  * @brief 文字サーチを行う
  * @param s 文字列
  * @param a サーチ文字
  * @return 文字個数
  */
int strch_cat(const char *s, char c) {
	int count = 0;	// カウンタ
	/* null文字が来るまでループ */
	for (int i = 0; i < std::strlen(s); i++) {
		/* サーチ文字aとsの中実が同じだったあ場合の処理 */
		if (s[i] == c) {
			/* カウントアップ */
			count++;
		}
	}
	return count;
}


/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	const int stringLen = 30;	// 文字長さ

	char searchString;	// サーチ文字

	char inputString[stringLen];	// 入力文字

	/* メッセージ表示 */
	std::cout << "文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(inputString, stringLen);

	/* メッセージ表示 */
	std::cout << "サーチ文字を入力してください。";

	/* 文字列入力 */
	std::cin >> searchString;

	/* 文字列を1文字ずつ改行してメッセージ表示 */
	std::cout << "サーチ文字は" << strch_cat(inputString, searchString) << "個ありました\n";


}