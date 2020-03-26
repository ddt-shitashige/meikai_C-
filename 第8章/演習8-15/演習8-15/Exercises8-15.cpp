/**
 * @file Exerises8-15.cpp
 * @brief 演習8-15	文字列s1の中に含まれる最も先頭に位置する文字列s2の先頭文字へのポインタを返す関数str_matchを作成せよ。たとえば、受け取った文字列s1が"abcabcdef"でs2が"abcd"であれば、返却するのは&s1[3]の値である。文字列s2がs1に含まれない場合はNULLを返却すること。
 *					char *str_match(char *s1, char *s2)
 * @author shitashige
 * @date 20200326
 */


#include <iostream>
const int stringLen = 30;	// 文字長さ

 /**
  * @fn
  * str_match
  * @brief 文字列検索を行う
  * @param s1 文字列1
  * @param s2 文字列2
  * @return 検索後のポインタ
  */
char *str_match(char *s1, char *s2) {

	bool matchFlg = true;		// マッチフラグ
	/* null文字が来るまでループ */
	for (int i = 0; i < std::strlen(s1) / 2; i++) {
		/* s2の最初の文字とs1の文字を比較 */
		if (s1[i] == s2[0]) {
			/* s2の文字がすべて一致するか確認するループ */
			for (int j = 0; j < std::strlen(s2); j++) {
				/* 文字が同じかどうか確かめる */
				if (s1[i + j] != s2[j]) {
					/* マッチふらぐをFalseにする */
					matchFlg = false;
					/* ループから抜ける */
					break;
				}
			}
			/* マッチフラグが折られなかった場合の処理 */
			if (matchFlg) {
				/* 値を返却 */
				return &s1[i];
			}
		}
	}
	/* NULLを返却 */
	return NULL;
}



/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {


	char inputString[stringLen];	// 入力文字

	char comparisionString[stringLen];	// strncpy後の文字


	/* メッセージ表示 */
	std::cout << "文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(inputString, stringLen);

	/* メッセージ表示 */
	std::cout << "比較文字を入力してください。";

	/* 文字列入力 */
	std::cin >> comparisionString;

	/* 文字列の比較を行う */
	char *answer = str_match(inputString, comparisionString);

	/* 結果がNULL以外だった場合 */
	if (answer != NULL) {
		/* strcmpとstrncpyの結果表示 */
		std::cout << "結果：" << *answer << "\n" << "アドレス：" << &answer;
	}
	/* 結果がNULLだった場合 */
	else {
		/* メッセージ表示 */
		std::cout << "結果：" << "該当なし" << "\n";
	}
}