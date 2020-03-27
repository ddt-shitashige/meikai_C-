/**
 * @file Exerises9-2.cpp
 * @brief 演習9-2	二つの整数値xとyの最大公約数をユークリッドの互除法を用いて求める関数
 *					int gcd(int x, int y)
 *					を作成せよ。
 * @author shitashige
 * @date 20200327
 */


#include <iostream>

 /**
  * @fn
  * gcd
  * @brief 最大公約数を求める
  * @param firstPointer 1番目のポインタ
  * @param secondPointer 2番目のポインタ
  * @return
  */
int gcd(int x, int y) {

	/* xの方を大きくする処理*/
	if (x < y) {
		/* 数値入れ替え */
		int cacheNumber = x;	// 一時保存数値
		/* 数値入れ替え */
		x = y;
		/* 数値入れ替え */
		y = cacheNumber;
	}

	/* 正方形の余りを求める処理 */
	if (x % y != 0) {

		/* 0以外だと正方形ではないため、もう一度行う。 */
		return gcd(y, x % y);
	}
	/* 余りが無ければ正方形なので返却処理 */
	else {
		/* 辺の長さを返却 */
		return y;
	}
}



/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {


	int firstInputNumber;	// 入力数値1	
	int secondInputNumber;	// 入力数値2	

	/* メッセージ表示 */
	std::cout << "数値を入力してください。";

	/* 文字列入力 */
	std::cin >> firstInputNumber;

	/* メッセージ表示 */
	std::cout << "数値を入力してください。";

	/* 文字列入力 */
	std::cin >> secondInputNumber;


	/* 結果表示 */
	std::cout << "結果：" << gcd(firstInputNumber, secondInputNumber);
}