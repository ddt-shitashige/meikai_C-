/**
 * @file Exerises8-2.cpp
 * @brief 演習8-2	以下のように初期化された文字列sを空文字列にするコードを示せ。char s[] = "ABC";
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
	char s[] = "ABC";	// 配列宣言

	/* メッセージ表示 */
	cout << "配列sに文字列\"" << s << "\"が格納されています。\n";

	for (int i = 0; i < sizeof(s) / sizeof(char); i++) {
		/* sの初期化 */
		s[i] = '\0';
	}
	/* メッセージ表示 */
	cout << "配列sに文字列\"" << s << "\"が格納されています。\n";

}