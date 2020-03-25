/**
 * @file Exerises8-10.cpp
 * @brief 演習8-10	p.310で学習したstrcat関数およびstrncat関数と同等な関数を作成せよ。
 * @author shitashige
 * @date 20200325
 */


#include <iostream>



 /**
  * @fn
  * FakeStrcat
  * @brief 文字列の末尾結合を行う
  * @param insertDestination 結合先
  * @param insertSource 結合元
  * @return 
  */
void FakeStrcat(char *insertDestination, const char *insertSource) {
	/* null文字が来るまでループ */
	for (int i = 0; i < std::strlen(insertSource); i++) {
		/* 配列をコピー先のNull文字の後からコピー */
		insertDestination[i+ std::strlen(insertSource)] = insertSource[i];
	}
	return;
}

/**
 * @fn
 * FakeStrncat
 * @brief 文字列の末尾結合を行う
 * @param insertDestination 結合先
 * @param insertSource 結合元
 * @param stringNumber 文字数
 * @return 
 */
void FakeStrncat(char *insertDestination, const char *insertSource, int stringNumber) {
	/* null文字が来るまでループ */
	for (int i = 0; i < stringNumber; i++) {
		/* 配列をコピー先のNull文字の後からコピー */
		insertDestination[i + std::strlen(insertSource)] = insertSource[i];
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

	char strncatString[stringLen] = { '\0' };	// strncpy後の文字

	char strcatString[stringLen] = { '\0' };	// strcpy後の文字

	/* メッセージ表示 */
	std::cout << "連結する文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(inputString, stringLen);

	/* メッセージ表示 */
	std::cout << "連結される文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(strcatString, stringLen);

	/* 文字列のコピー */
	strcpy_s(strncatString,strcatString);

	/* 自作のstrcpy */
	FakeStrcat(strcatString, inputString);

	/* 自作のstrncpy */
	FakeStrncat(strncatString, inputString, stringLen);

	/* 結果表示 */
	std::cout << "strcpy:" << strcatString << "\n" << "strncpy:" << strncatString << "\n";

}