/**
 * @file Exerises8-18.cpp
 * @brief 演習8-18	文字列として表された実数値を、double型の実数に変換した値を返す関数str2doubleを作成せよ。たとえば、文字列sが"13.5"であれば、返却するのは実数値13.5である。sが実数として解釈できないような文字列である場合は、0.0を返すこと。
 *					str2double(const char *s)
 * @author shitashige
 * @date 20200326
 */


#include <iostream>
const int stringLen = 30;	// 文字長さ

 /**
  * @fn
  * str2double
  * @brief 文字列を数値に変換する
  * @param s 文字列
  * @return
  */
double str2double(const char *s) {

	int pointCount = 0;	// ポイントカウント
	/* 文字列確認ループ */
	for (int i = 0; i < std::strlen(s); i++) {
		/* 数値確認 */
		if (!((s[i] >= '0' && s[i] <= '9') || s[i] == '.')) {
			/* 数値と小数点以外だと0をリターン */
			return 0.0;
		}
		/* 小数点確認 */
		else if (s[i] == '.') {
			/* ポイントカウントカウントアップ */
			pointCount++;
		}
		/* ポイントカウントが1より大きければ0をリターン */
		if (pointCount > 1) {
			return 0.0;
		}
	}

	double integerNumber = 0;	// 整数値
	double decimalNumber = 1;	// 小数値

	/* ポイントカウントをリセット */
	pointCount = 0;
	/* 数値作成ループ */
	for (int i = 0; i < std::strlen(s); i++) {

		/* 小数点だった場合の処理 */
		if (s[i] == '.') {
			/* ポイントカウントカウントアップ */
			pointCount++;
			/* ループの最初に戻る */
			continue;
		}
		/* 数値だった場合の処理 */
		else {
			/* 返却数値を計算 */
			integerNumber = integerNumber * 10 + (s[i] - '0');
		}
		/* ポイントカウントが1だったら小数値を増やす */
		if (pointCount == 1) {
			/* 返却数値を計算 */
			decimalNumber = decimalNumber / 10;
		}
	}
	/* 返却数値をリターン */
	return integerNumber * decimalNumber;
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
	std::cout << "結果:" << str2double(InputString);

}