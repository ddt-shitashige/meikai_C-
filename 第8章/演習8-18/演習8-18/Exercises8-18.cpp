/**
 * @file Exerises8-18.cpp
 * @brief 演習8-18	文字列として表された整数値を、int型の整数値に変換した値を返す関数str2intを作成せよ。たとえば、文字列sが"138"であれば、返却するのは整数値138である。sが整数として解釈できないような文字列である場合は、0を返すこと。
 *					int str2int(const char *s)
 * @author shitashige
 * @date 20200326
 */


#include <iostream>
const int stringLen = 30;	// 文字長さ

 /**
  * @fn
  * str2int
  * @brief 文字列を数値に変換する
  * @param s 文字列
  * @return
  */
int str2int(const char *s) {

	/* 文字列確認ループ */
	for (int i = 0; i < std::strlen(s); i++) {
		/* 数値確認 */
		if (!(s[i] >= '0' && s[i] <= '9')) {
			/* 数値以外だと0をリターン */
			return 0;
		}
	}

	int returnNumber = 0;	// 返却数値
	/* 数値作成ループ */
	for (int i = 0; i < std::strlen(s); i++) {

		/* 返却数値を計算 */
		returnNumber = returnNumber * 10 + (s[i] - '0');
	}
	/* 返却数値をリターン */
	return returnNumber;
}



/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {


	char InputString[stringLen];	// 入力文字1


	/* メッセージ表示 */
	std::cout << "文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(InputString, stringLen);

	/* 結果表示 */
	std::cout << "結果:" << str2int(InputString);


}