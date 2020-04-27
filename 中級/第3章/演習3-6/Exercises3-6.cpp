/**
 * @file Exerises3-6.cpp
 * @brief 演習3-6	bserch関数を用いて、文字列の配列から探索を行うプログラムを作成せよ。2次元配列で実現された文字列の配列からの探索を行うプログラムと、文字列の先頭文字へのポインタの配列で実現された文字列の配列からの探索を行うプログラムの2つを作ること。
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
	/* 文字列2が大きかった場合 */
	if (*string1 < *string2) {
		return -1;
	}
	/* 文字列1が大きかった場合 */
	else if (*string1 > * string2) {
		return 1;
	}
	else {
		return 0;
	}
}


/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	char stringFirst[] = "abcdefghijklmnopqrstuvwxyz";	// 文字列配列1
	char* stringSecond = NULL;	// 文字列配列2

	/* メモリ確保 */
	stringSecond = new char[27];

	/* 文字列のコピー */
	memcpy(stringSecond, stringFirst, 27);

	char inputChar;	// 入力値

	/* メッセージ出力 */
	std::cout << "文字列入力\n";

	/* 入力 */
	std::cin >> inputChar;

	char *result;	// 結果

	/* bserch実行 */
	result = reinterpret_cast<char*>(bsearch(&inputChar, stringFirst, 27, sizeof(char), reinterpret_cast<int (*)(const void*, const void*)>(Comper)));

	/* 結果がNULLで無かった場合 */
	if (result != NULL) {
		/* メッセージ出力 */
		std::cout << result - stringFirst << "が一致(2次元配列)\n";
	}
	else {
		/* メッセージ出力 */
		std::cout << "見つからなかった";
	}

	/* bserch実行 */
	result = reinterpret_cast<char*>(bsearch(&inputChar, stringFirst, 27, sizeof(char), reinterpret_cast<int (*)(const void*, const void*)>(Comper)));

	/* 結果がNULLで無かった場合 */
	if (result != NULL) {
		/* メッセージ出力 */
		std::cout << result - stringFirst << "が一致(ポインタ配列)\n";
	}
	else {
		/* メッセージ出力 */
		std::cout << "見つからなかった";
	}

	/* メモリ開放 */
	delete[] stringSecond;
}