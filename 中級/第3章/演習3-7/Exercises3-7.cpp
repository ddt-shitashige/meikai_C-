/**
 * @file Exerises3-7.cpp
 * @brief 演習3-7	qsort関数を用いて、以下の2つの配列を小順位ソートするプログラムを作成せよ。
 * @author shitashige
 * @date 20200427
 */

#include<iostream>
#include<cstdlib>

/*
 *@fn
 * @brief 比較
 * @param string1 文字列1
 * @param string2 文字列2
 * @return 結果
 */
int Comper(const char* string1, const char* string2) {
	return strcmp(string1, string2);
}


/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	char a[][7] = { "LISP","C","Ada","Pascal" };	// 文字列a
	// char*p[]= { "LISP","C","Ada","Pascal" };	// 文字列p	// 誤植の為、コメントアウト

	/* ソート */
	qsort(a, 4, sizeof(char)*7, reinterpret_cast<int (*)(const void*, const void*)>(Comper));

	/* 出力ループ */
	for (int i = 0; i < 4; i++) {
		/* 出力ループ */
		for (int j = 0; j < 7; j++) {
			/* メッセージ出力 */
			std::cout << a[i][j];
		}

		/* メッセージ出力 */
		std::cout << "\n";

	}

}