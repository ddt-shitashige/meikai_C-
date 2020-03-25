/**
 * @file Exerises8-12.cpp
 * @brief 演習8-12	文字列sに含まれる最も先頭に位置する文字cの添字を返す関数strchr_idxを作成せよ。文字列sが"ABSZXYX"で文字cが'X'であれば、返却するのは4である。なお、文字cが文字列sに含まれない場合は-1を返却すること。
 * @author shitashige
 * @date 20200325
 */


#include <iostream>

 /**
  * @fn
  * FakeStrcpy
  * @brief 文字列の比較を行う
  * @param s 文字列
  * @param c 探索文字
  * @return 結果
  */
int strchr_ptr(const char *s, char c) {
	/* null文字が来るまでループ */
	for (int i = 0; i < std::strlen(s); i++) {
		/* 同一文字か確認する */
		if (s[i] == c) {
			/* 現在の文字数を返す */
			return i;
		}
	}
	return -1;
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

	char comparisionString;	// strncpy後の文字


	/* メッセージ表示 */
	std::cout << "文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(inputString, stringLen);


	/* メッセージ表示 */
	std::cout << "比較文字を入力してください。";

	/* 文字列入力 */
	std::cin>>comparisionString;


	/* strcmpとstrncpyの結果表示 */
	std::cout << "結果：" << strchr_ptr(inputString, comparisionString) << "\n";

}