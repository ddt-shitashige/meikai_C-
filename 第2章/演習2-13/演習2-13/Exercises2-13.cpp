/*
 * @file  Exerises2-13.cpp
 * @brief 演習2-13	二つの整数値を読み込んで降順(大きい順)に並び変えるプログラムを作成せよ
 * @author shitashige
 * @date 20191229
 */
#include <iostream>

 /**
  * @fn
  * メイン関数
  * @brief 降順に並び替えるメソッド
  * @return 0:正常終了
  */
int main() {
	int inputNumberFirst = 0;		// 最初に入力された数字
	int inputNumberSecond = 0;		// 2番目に入力された数字B
	int cacheNumber = 0;			// 一時保存番号

	/* ユーザーに入力を促すメッセージ */
	std::cout << "文字入力を2回連続で行ってください。";

	/* 文字入力 */
	std::cin >> inputNumberFirst;

	/* 文字入力 */
	std::cin >> inputNumberSecond;

	/*
	 * 降順並び替え処理
	 */
	 /* 最初に入力した文字が二番目に入力した文字より小さければ値を入れ替える */
	if (inputNumberFirst < inputNumberSecond) {
		/* 一時保存番号に最初に入力した数字を保持する */
		cacheNumber = inputNumberFirst;
		/* 最初に入力した数字に2番目に入力した数字を入れる */
		inputNumberFirst = inputNumberSecond;
		/* 一時保存番号の数値を2番目に入力された数字に入れる */
		inputNumberSecond = cacheNumber;
	}

	std::cout << "降順に並び替えた結果、" << inputNumberFirst << "," << inputNumberSecond << "となりました。";

	return 0;
}