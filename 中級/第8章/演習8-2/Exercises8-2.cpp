/**
 * @file Exerises8-2.cpp
 * @brief 演習8-2　左ページに示したbの構造を持つプログラムを実際に作成して、動作の検証を行え
 * @author shitashige
 * @date 20200430
 */

#include <iostream>
#include <eh.h>

/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main()try {
	 

	/* エラー処理 */
	throw "うわあ";
}
catch (const char* str) {
	/* メッセージ表示 */
	std::cout << str;
}
