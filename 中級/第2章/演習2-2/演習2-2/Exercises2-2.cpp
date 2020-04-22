/**
 * @file Exerises2-2.cpp
 * @brief 演習2-2 符号無し整数xの全ビットを右にnビット回転した値を返す関数rrotateと、左にnビット開店した値を返すlrotateを作成せよ。
 * @author shitashige
 * @date 20020420
 */


#include <iostream>


 /**
  * @fn
  * @brief 右にnビット回転する関数
  * @param x 整数
  * @param n 回転数
  * @return 回答
  */
unsigned rrotate(unsigned x, int n) {

	unsigned bottomNumber = 0;	// 最下層のビット値
	unsigned topNumber = 0U;	// 最上位のビット値(一旦オール1にする)
	/* 回転数分ループ */
	for (int i = 0; i < n; i++) {
		/* 最下層のピット値取得 */
		bottomNumber = x & 1U;

		/* 最上位のビット値を左に1ずらす */
		topNumber = topNumber / 2;

		/* +1して、最上位のみ1にする */
		topNumber++;

		/* 最下層の値最上位を同じにする */
		topNumber = topNumber * bottomNumber;

		/* 計算 */
		x = x / 2 + topNumber;

	}
	return x;

}

/**
 * @fn
 * @brief 左にnビット回転する関数
 * @param x 整数
 * @param n 回転数
 * @return 回答
 */
unsigned lrotate(unsigned x, int n) {

	unsigned topNumber = 0;	// 最上位のビット値
	/* 回転数分ループ */
	for (int i = 0; i < n; i++) {
		/* 最上位のピット値取得 */
		topNumber = x & 1>>sizeof(unsigned);

		/* トップナンバーが0なら最上は0 */
		if (topNumber == 0) {
			/* 桁数ずらし */
			x = x * 2;
		}
		else {
			/* 桁数ずらし＋1 */
			x = x * 2 + 1;
		}
	}
	return x;
}



/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	unsigned number;	// 数値
	unsigned cicle;	// 回転数

	/* メッセージ出力 */
	std::cout << "数値と回転数を入力してください\n";

	/* 数値入力 */
	std::cin >> number >> cicle;

	/* 結果出力 */
	std::cout << "結果(右):" << rrotate(number, cicle) << "\n結果(左):" << lrotate(number, cicle);

}
