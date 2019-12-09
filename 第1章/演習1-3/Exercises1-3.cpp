/**
 * @file Exerises.cpp
 * @brief 演習1-3　文の終端を示すセミコロン；が欠如しているとどうなるか。プログラムをコンパイルして検証せよ。
 * @author shitashige
 * @date 20191209
 */

#include <iostream>

/**
 * @fn
 * メイン関数
 * @brief セミコロンが欠如している場合の動作確認
 * @return 0:正常終了
 */
int main() {

	/* aaaの文字出力。 */
	std::cout << "aaa"; 

	/* セミコロンが無いと、構文エラーが発生する。 */
//	std::cout << "aaa"

	return 0;
}

