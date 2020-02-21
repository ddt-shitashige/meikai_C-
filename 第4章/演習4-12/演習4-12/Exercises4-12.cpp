/**
 * @file Exerises4-12.cpp
 * @brief	トランプの記号(ダイヤ,ハート,クラブ,スペード)の四つの列挙子を持つ列挙体を定義せよ。
 *			各列挙子の値は先頭から順に0,1,2,3とし、List4-17と同様にキーボードから値を読み込んで、表示する事。
 * @author shitashige
 * @date 20200219
 */

#include <iostream>

 /**
  * @fn
  * メイン関数
  * @brief 数値によってトランプの種類を表示する関数
  * @return 0:正常終了
  */
int main() {

	enum trump { Diamond, Heart, Club, Spade };	// トランプの列挙体
	int inputNumber;	// 入力した数値

	/* 入力値が列挙体の数値意外だともう一度入力させる */
	do {
		/* 数値入力促し */
		std::cout << "0～3の数値を入力して下さい。\n";

		/* 数値入力 */
		std::cin >> inputNumber;
	} while (inputNumber<Diamond || inputNumber>Spade);

	/* 入力値によって処理を分ける */
	switch (inputNumber) {
		/* 0だった場合 */
	case Diamond:
		/* カードの種類を表示 */
		std::cout << "ダイヤ\n";
		break;
	case Heart:
		/* カードの種類を表示 */
		std::cout << "ハート\n";
		break;
	case Club:
		/* カードの種類を表示 */
		std::cout << "クラブ\n";
		break;
	case Spade:
		/* カードの種類を表示 */
		std::cout << "スペード\n";
		break;
	default:
		break;
	}
	return;
}