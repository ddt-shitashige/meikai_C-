/**
 * @file Exerises1-4.cpp
 * @brief 演習1-4　右に示すように、1行に1文字ずつ名前を表示するプログラムを作成せよ。表示するのは、著者の名前ではなく、自分の名前とする事。
 * @author shitashige
 * @date 20191209
 */

#include <iostream>


using namespace std;

 /**
  * @fn
  * メイン関数
  * @brief 自分の文字を盾に表示するプログラム。
  * @return 0:正常終了
  */
int main() {

	string name = "下重達矢";			// 自分の名前。
	string resultName;					// 表示する文字。
	int nameLength = name.length();		// 文字の長さ。

	/*
	 * 名前を二文字毎に改行を入れるループ。
	 */
	for (int i = 0; i < name.length(); i ++) {
		/* 全角文字は2バイトなので、2バイト毎に改行を入れる処理。(i/3*3)は改行文字を入れるとその分文字がずれるので、その補正。 */
		if (i == 2 + (i / 3 * 3)) {
			/* i文字分の後に改行を入れる。 */
			name.insert(i, "\n");
		}
	}
	/* 文字表示 */
	cout << name;

	return 0;
}