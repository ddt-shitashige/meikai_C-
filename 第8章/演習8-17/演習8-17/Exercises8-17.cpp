/**
 * @file Exerises8-17.cpp
 * @brief 演習8-17	二つの文字列siとs2の内容をそっくり入れかえる関数swap_stringを作成せよ。たとえば、配列pとqに文字列"ABCDEF"と"XYZ"格納されていて、swap_string(p,q)と呼び出した場合、関数から戻ってきたときの配列pの文字列は"XYZ"となって、配列qの文字列は"ABCDEF"となる。
 *					void swap_string(char *s1, char *s2)
 * @author shitashige
 * @date 20200326
 */


#include <iostream>
const int stringLen = 30;	// 文字長さ

 /**
  * @fn
  * swap_string
  * @brief 文字列入れ替えを行う
  * @param s1 文字列1
  * @param s2 文字列2
  * @return
  */
void swap_string(char *s1, char *s2) {

	char cacheString[stringLen];	// 一時保存文字列

	/* 文字列を一時保存にコピー */
	memcpy(cacheString, s1, stringLen);
	/* 文字列のコピー */
	memcpy(s1, s2, stringLen);
	/* 一時保存した文字列のコピー */
	memcpy(s2, cacheString, stringLen);

	return;
}



/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {


	char firstInputString[stringLen];	// 入力文字1
	char secondInputString[stringLen];	// 入力文字2


	/* メッセージ表示 */
	std::cout << "文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(firstInputString, stringLen);

	/* メッセージ表示 */
	std::cout << "文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(secondInputString, stringLen);


	/* 文字列の入れ替えを行う */
	swap_string(firstInputString, secondInputString);

	/* メッセージ表示 */
	std::cout << "結果：\n1:" << firstInputString << "\n2:" << secondInputString;


}