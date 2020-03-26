/**
 * @file Exerises8-16.cpp
 * @brief 演習8-16	文字列s1内の数字文字を削除する関数strrmv_digitsを作成せよ。たとえば、文字列sが"a1bc39d"であれば、その文字列を"abcd"に更新する。受け取ったsの値をそのまま返却すること。
 *					char *strrmv_digits(char *s)
 * @author shitashige
 * @date 20200326
 */


#include <iostream>
const int stringLen = 30;	// 文字長さ

 /**
  * @fn
  * strrmv_digits
  * @brief 文字列くりぬきを行う
  * @param s 文字列
  * @return くりぬいた文字
  */
char *strrmv_digits(char *s) {

	char judgementString[stringLen];	// 判断文字列
	int matchCount = 0;	// マッチカウント

	/* 文字列のコピー */
	memcpy(judgementString, s, stringLen);

	int i = 0;	// for文の中で使うカウント
	/* null文字が来るまでループ */
	for (i = 0; i < std::strlen(s); i++) {
		/* 文字列が0～9の間以外か判断 */
		if ((judgementString[i] >= '0' && judgementString[i] <= '9')) {
			/* マッチカウントカウントアップ */
			matchCount++;
		}
		else {
			/* 数字をはじいた文字列を格納 */
			s[i - matchCount] = judgementString[i];
		}
	}

	/* Null文字追加 */
	s[i - matchCount] = '\0';

	/* 文字列を返却 */
	return s;
}



/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {


	char inputString[stringLen];	// 入力文字

	/* メッセージ表示 */
	std::cout << "文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(inputString, stringLen);

	/* 文字列の比較を行う */
	char *answer = strrmv_digits(inputString);

	/* メッセージ表示 */
	std::cout << "結果：\n";


	/* 結果表示ループ */
	for (int i = 0; i < std::strlen(answer); i++) {
		/* メッセージ表示 */
		std::cout << answer[i] << '\n';
	}

}