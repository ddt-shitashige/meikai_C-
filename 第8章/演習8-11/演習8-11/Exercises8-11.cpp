/**
 * @file Exerises8-11.cpp
 * @brief 演習8-11	p.312で学習したstrcmp関数およびstrncmp関数と同等な関数を作成せよ。
 * @author shitashige
 * @date 20200325
 */


#include <iostream>



 /**
  * @fn
  * FakeStrcmp
  * @brief 文字列の比較を行う
  * @param comparisonDestination 比較先
  * @param comparisonSource 比較元
  * @return 結果
  */
int FakeStrcmp(char *comparisonDestination, const char *comparisonSource) {
	/* null文字が来るまでループ */
	for (int i = 0; i < std::strlen(comparisonSource); i++) {
		/* 配列の比較をして、比較元の方が大きかった場合の処理*/
		if (comparisonSource[i] > comparisonDestination[i]) {
			return -1;
		}
		/* 配列の比較をして、比較元の方が小さかった場合の処理*/
		else if (comparisonSource[i] < comparisonDestination[i]) {
			return 1;
		}
	}
	return 0;
}

/**
 * @fn
 * FakeStrncmp
 * @brief 文字列の比較を行う
 * @param comparisonDestination 比較先
 * @param comparisonSource 比較元
 * @param stringNumber 文字数
 * @return 結果
 */
int FakeStrncmp(char *comparisonDestination, const char *comparisonSource, int stringNumber) {
	/* null文字が来るまでループ */
	for (int i = 0; i < stringNumber; i++) {
		/* 配列の比較をして、比較元の方が大きかった場合の処理*/
		if (comparisonSource[i] > comparisonDestination[i]) {
			return -1;
		}
		/* 配列の比較をして、比較元の方が小さかった場合の処理*/
		else if (comparisonSource[i] < comparisonDestination[i]) {
			return 1;
		}
	}
	return 0;
}



/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	const int stringLen = 30;	// 文字長さ

	char inputBeforeString[stringLen];	// 入力文字

	char inputAfterString[stringLen];	// strncpy後の文字


	/* メッセージ表示 */
	std::cout << "文字列1を入力してください。";

	/* 文字列入力 */
	std::cin.getline(inputBeforeString, stringLen);


	/* メッセージ表示 */
	std::cout << "文字列2を入力してください。";

	/* 文字列入力 */
	std::cin.getline(inputAfterString, stringLen);


	/* strcmpとstrncpyの結果表示 */
	std::cout << "strcmp:" << FakeStrcmp(inputAfterString, inputBeforeString) << "\n" << "strncmp:" << FakeStrncmp(inputAfterString, inputBeforeString, sizeof(inputBeforeString)) << "\n";

}