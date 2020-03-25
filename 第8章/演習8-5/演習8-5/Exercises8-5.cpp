/**
 * @file Exerises8-5.cpp
 * @brief 演習8-5	文字列sの全文字を先頭から順に1行に1文字ずつ表示する関数putvを作成せよ。
 *					void putv(const char *s)
 * @author shitashige
 * @date 20200325
 */


#include <iostream>


/**
 * @fn
 * putv
 * @brief 文字列を1文字毎に改行する。
 * @param s 文字列
 * @return 0:正常終了
 */
void putv(const char *s) {
	/* null文字が来るまでループ */
	for (int i = 0; i < std::strlen(s); i++) {
		/* 文字列出力 */
		std::cout<<s[i]<<'\n';
	}
}

/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	const int stringLen=30;	// 文字長さ

	char inputString[stringLen];	// 入力文字

	/* メッセージ表示 */
	std::cout<<"文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(inputString,stringLen);

	/* 文字列を1文字ずつ改行 */
	putv(inputString);

}