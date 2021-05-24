/*
 * @file  Exerises2-15.cpp
 * @brief 演習2-15	おみくじプログラムを作成せよ。乱数を生成して「大吉」「中吉」「小吉」「吉」「末吉」「凶」「大凶」のいずれかを表示する事。
 * @author shitashige
 * @date 20191231
 */
#include <iostream>
#include <ctime>
#include <cstdlib>

 /**
  * @fn
  * メイン関数
  * @brief おみくじの結果を表示するプログラム
  * @return 0:正常終了
  */
int main() {

	int randomNumber = 0;			// ランダム数字

	/* 初期シード決定 */
	srand(time(NULL));

	/* 3未満の数値を作成 */
	randomNumber = rand() % 7;

	/* スイッチ文にて、表示文字を変える */
	switch (randomNumber) {
		/* 乱数が0だった場合 */
		case 0: std::cout << "大吉";
			break;
		/* 乱数が1だった場合 */
		case 1: std::cout << "中吉";
			break;
		/* 乱数が2だった場合 */
		case 2: std::cout << "小吉";
			break;
		/* 乱数が3だった場合 */
		case 3: std::cout << "吉";
			break;
		/* 乱数が4だった場合 */
		case 4: std::cout << "末吉";
			break;
		/* 乱数が5だった場合 */
		case 5: std::cout << "凶";
			break;
		/* 乱数が6だった場合 */
		case 6: std::cout << "大凶";
			break;
	}
	return 0;
}