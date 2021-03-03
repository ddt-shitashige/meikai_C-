/**
 * @file Exerises5-9.cpp
 * @brief 演習5-9	配列aの全要素を配列bに対して逆順にコピーするプログラムを作成せよ。
 * @author shitashige
 * @date 20200306
 */


#include <iostream>
#include <ctime>
#include <iomanip>

 /**
  * @fn
  * メイン関数
  * @brief 配列にランダム数値を入れて逆順する関数
  * @return 0:正常終了
  */
int main() {

	const int element = 10;	// 要素数
	int rundomNumber = 0;	// ランダム数値
	int number[element] = { 0 };	// 数字の配列
	int inversionNumber[element] = { 0 };	// 反転先の配列
	bool sameFlg = false;			// 配列の中に同じ数値が入っているかの判定フラグ


	/* 初期シードを決定 */
	srand((unsigned int)time(NULL));


	/* 要素数分だけループ */
	for (int i = 0; i < element; i++) {
		/* 乱数から100のあまりを求める事により、値が0～99の間になる。 */
		rundomNumber = rand() % 100;

		/* 配列にランダム数値を格納 */
		number[i] = rundomNumber;

		/* 配列の数値出力 */
		std::cout << "a[" << std::setw(2) << i << "]：" << number[i] << "\n";
	}

	/* テンプレート出力 */
	std::cout << "要素の並びを変更しました\n";



	/*
	 * 格納先を反転する
	 */
	 /* 要素数分だけループ */
	for (int i = 0; i < element; i++) {
		/* 数値配列から逆数値の配列にコピーする */
		inversionNumber[i] = number[element - i - 1];

		/* 配列の数値出力 */
		std::cout << "a[" << std::setw(2) << i << "]：" << inversionNumber[i] << "\n";
	}


	return 0;
}