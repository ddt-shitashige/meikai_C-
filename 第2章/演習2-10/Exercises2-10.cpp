/**
 * @file Exerises2-10.cpp
 * @brief 演習2-10	キーボードから読み込んだ三つの整数の最小値を求めて表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20191225
 */
#include <iostream>
using namespace std;
 /**
  * @fn
  * メイン関数
  * @brief 3つの数字を入力させて最小値を求めるメソッド
  * @return 0:正常終了
  */
int main() {

	int firstInputNumber;	// 1番目に入力された数字
	int secondInputNumber;	// 2番目に入力された数字
	int thirdInputNumber;	// 3番目に入力された数字
	int minimumResukt;		// 最小結果

	/* ユーザーに入力を促すメッセージ */
	cout << "数字を3つ連続で入力してください";

	/* 文字を入力 */
	cin >> firstInputNumber >> secondInputNumber >> thirdInputNumber;

	/* firstInputNumberと secondInputNumberを比較して、小さい方をminimumResuktに格納する */
	minimumResukt = firstInputNumber < secondInputNumber ? firstInputNumber : secondInputNumber;

	/* minimumResuktとthirdInputNumberを比較して、小さい方をminimumResuktに格納する */
	minimumResukt = minimumResukt < thirdInputNumber ? minimumResukt : thirdInputNumber;

	/* 結果表示 */
	cout << "最小数値は" << minimumResukt << "です。";

	return 0;
}