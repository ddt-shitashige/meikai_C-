/**
 * @file Exerises1-5.cpp
 * @brief 演習1-5　	右に示すように、1行に1文字ずつ名前を表示するプログラムを作成せよ。
 *					性と名の間は1行開けることとし、自分の名前を表示すること。
 * @author shitashige
 * @date 20191209
 */


#include"Exercises1-5.h"


 /**
  * @fn
  * メイン関数
  * @brief 自分の文字を縦に表示するプログラム。(性と名は1行開ける)
  * @return 0:正常終了
  */
int main() {

	string lastName = "下重";			// 自分の苗字。
	string name = "達矢";				// 自分の名前。
	string displayString;				// 表示文字列。

	/* 自分の苗字の2文字目に改行を与える */
	lastName = insertLineBreak(lastName, 2);

	/* 自分の名前の2文字目に改行を与える */
	name = insertLineBreak(name, 2);

	/* 表示文字列を作成 */
	displayString = lastName + "\n\n" + name;

	/* 文字表示 */
	cout << displayString;

	return 0;
}


/**
 * @fn
 * 改行関数
 * @brief 指定した文字数の所にて改行を行う。
 * @param (targetString) 対象文字列
 * @param (targetCharacters) 対象文字数
 * @return 改行した文字列。
 */
string insertLineBreak(const string targetString, const int targetCharacters) {

	string resultString;	// 改行文字を挿入した文字列。

	/* 対象文字列をコピー */
	resultString = targetString;

	/* 改行文字を対象文字数に挿入 */
	resultString.insert(targetCharacters, "\n");

	/* 完成した文字列をリターン */
	return resultString;

}