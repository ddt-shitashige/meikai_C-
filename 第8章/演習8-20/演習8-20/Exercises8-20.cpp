/**
 * @file Exerises8-17.cpp
 * @brief 演習8-17	二つの文字列を指すポインタを交換する関数を作成せよ。関数の仕様は自分で考えること。
 * @author shitashige
 * @date 20200326
 */


#include <iostream>
const int stringLen = 30;	// 文字長さ

 /**
  * @fn
  * ChangePointer
  * @brief 文字列入れ替えを行う
  * @param firstPointer 1番目のポインタ
  * @param secondPointer 2番目のポインタ
  * @return
  */
void ChangePointer(char **firstPointer, char **secondPointer) {

	char *cachePointer=*firstPointer;	// 1番目のポインタを一時保存ポインタに格納

	*firstPointer=*secondPointer;	// 1番目のポインタを2番目のポインタに格納

	*secondPointer=cachePointer;	// 2番目のポインタを1番目のポインタに格納

	return;
}



/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {


	char *firstInputString;	// 入力文字1
	char *secondInputString;	// 入力文字2

	/* メモリ確保 */
	firstInputString=new char[stringLen];
	/* メモリ確保 */
	secondInputString = new char[stringLen];


	/* メッセージ表示 */
	std::cout << "文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(firstInputString, stringLen);

	/* メッセージ表示 */
	std::cout << "文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(secondInputString, stringLen);


	/* 文字列の入れ替えを行う */
	ChangePointer(&firstInputString, &secondInputString);

	/* メッセージ表示 */
	std::cout << "結果：\n1:" << firstInputString << "\n2:" << secondInputString;

	/* メモリ開放 */
	delete[] firstInputString;

	/* メモリ開放 */
	delete[] secondInputString;

}