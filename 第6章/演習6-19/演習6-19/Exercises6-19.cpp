/**
 * @file Exerises6-19.cpp
 * @brief 演習6-19	List6-21の関数rを、不正な添字に大して安全に動作するものに書き換えよ。静的記憶域期間を持つint型の変数を関数内部で定義して、idxが0逸上a_size未満でなければ、その変数への参照を返却する事。
 * @author shitashige
 * @date 20200322
 */


#include <iostream>
#include <ctime>
#include <cstdlib>


 /**
   * @fn
   * rand1
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