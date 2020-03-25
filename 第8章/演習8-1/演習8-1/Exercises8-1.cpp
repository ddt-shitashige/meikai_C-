/**
 * @file Exerises8-1.cpp
 * @brief 演習8-1	List8-4の配列sの宣言を以下のように書きかえたプログラムを作成せよ。char s[] = "ABC\0DEF";実行結果に対する考察を行うこと。
 * @author shitashige
 * @date 20200325
 */

#include <iostream>

using namespace std;
/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {
	char s[] = "ABC\0DEF";// 配列宣言

	/* メッセージ表示 */
	cout << "配列sに文字列\"" << s << "\"が格納されています。\n";

	/* 配列宣言と同時に文字列分のメモリが確保されるので、確保されるメモリ数は7。coutでの表示はNull文字までなのでメッセージは変わらない。 */

}