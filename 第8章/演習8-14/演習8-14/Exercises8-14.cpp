/**
 * @file Exerises8-14.cpp
 * @brief 演習8-14	文字列sの文字の並びを反転する関数str_rvsを作成せよ。たとえば、文字列sが"abc"であれば、その文字列を"cba"に更新する。受け取ったsの値をそのまま返却すること。
 *					char *str_rvs(char *s)
 * @author shitashige
 * @date 20200326
 */


#include <iostream>
const int stringLen = 30;	// 文字長さ

 /**
  * @fn
  * str_rvs
  * @brief 文字列反転を行う
  * @param s 文字列
  * @return 反転した文字
  */
char *str_rvs(char *s) {

	char cacheString;	// 一時保存の文字列
	char *returnString = s;	// 返却文字列をsと同じポインタにする
	/* null文字が来るまでループ */
	for (int i = 0; i < std::strlen(s) / 2; i++) {
		/* 一時保存の文字列に頭からの文字列を保持 */
		cacheString = returnString[i];
		/* 後ろと前の値を入れ替える */
		returnString[i] = returnString[std::strlen(returnString) - i - 1];
		/* 一時保存の文字列を後ろに入れる */
		returnString[std::strlen(returnString) - i - 1] = cacheString;
	}
	return returnString;
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

	/* 文字列の入れ替えを行う */
	char *answer = str_rvs(inputString);

	/* メッセージ表示 */
	std::cout << "結果：\n";


	/* 結果表示ループ */
	for (int i = 0; i < std::strlen(answer); i++) {
		/* メッセージ表示 */
		std::cout << answer[i] << '\n';
	}

}