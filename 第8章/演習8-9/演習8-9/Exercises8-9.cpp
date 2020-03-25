/**
 * @file Exerises8-9.cpp
 * @brief 演習8-9	p.308で学習したstrcpy関数およびstrncpy関数と同等な関数を作成せよ。
 * @author shitashige
 * @date 20200325
 */


#include <iostream>



 /**
  * @fn
  * FakeStrcpy
  * @brief 文字列のコピーを行う
  * @param copyDestination コピー先
  * @param copySource コピー元
  * @return 文字個数
  */
void FakeStrcpy(char *copyDestination, const char *copySource) {
	/* null文字が来るまでループ */
	for (int i = 0; i < std::strlen(copySource); i++) {
		/* 配列のコピー */
		copyDestination[i] = copySource[i];
	}
	return;
}

/**
 * @fn
 * FakeStrncpy
 * @brief 文字列のコピーを行う
 * @param copyDestination コピー先
 * @param copySource コピー元
 * @param stringNumber 文字数
 * @return 文字個数
 */
void FakeStrncpy(char *copyDestination, const char *copySource, int stringNumber) {
	/* null文字が来るまでループ */
	for (int i = 0; i < stringNumber; i++) {
		/* 配列のコピー */
		copyDestination[i] = copySource[i];
	}
	return;
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

	char strncpyString[stringLen] = { '\0' };	// strncpy後の文字

	char strcpyString[stringLen] = { '\0' };	// strcpy後の文字

	/* メッセージ表示 */
	std::cout << "文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(inputString, stringLen);

	/* 自作のstrcpy */
	FakeStrcpy(strcpyString, inputString);

	/* 自作のstrncpy */
	FakeStrncpy(strncpyString, inputString, sizeof(inputString));

	/* 結果表示 */
	std::cout << "strcpy:" << strcpyString << "\n" << "strncpy:" << strncpyString << "\n";

}