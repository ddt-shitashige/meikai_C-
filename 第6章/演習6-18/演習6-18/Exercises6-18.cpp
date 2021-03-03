/**
 * @file Exerises6-18.cpp
 * @brief 演習6-18	0以上9以下の乱数を返却するrand1を作成せよ。複数回呼び出された場合に、連続して同じ値を返さないようにすること。（例えば1回前に呼び出された際に5を返却していれば、5以外の数値を返却しなければならない。
 *					void rand1 ()
 * @author shitashige
 * @date 20200322
 */


#include <iostream>
#include <ctime>
#include <cstdlib>


 /**
   * @fn
   * put_count
   * @brief ランダム数値生成
   * @return
   */
int rand1() {
	static int prevNunber;	// 1つ前の数値
	int Number;			// 数値
	/* 初期シード決定 */
	srand(time(NULL));

	do {

		/* 10以下の数値をランダム精製 */
		Number = rand() % 10;
		/* 現在の数値と1つ前の数値が同じだったらもう一回ループ */
	} while (Number == prevNunber);

	/* 1つ前の数値に現在の数値を入れる */
	prevNunber = Number;
	return Number;
}

/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {


	/* メッセージ出力 */
	std::cout << "カウント値を入力してください。\n";

	int count;   // カウント値

	/* 最小値と最大値をユーザー入力 */
	std::cin >> count;

	/* ユーザーが入力した数値分ループ */
	for (int i = 0; i < count; i++) {

		/* 呼び出しカウント関数呼び出し */
		std::cout << "結果は[" << rand1() << "]です\n";

	}

	return 0;
}