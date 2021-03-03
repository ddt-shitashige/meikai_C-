/**
 * @file Exerises5-3.cpp
 * @brief 演習5-3	要素型がint型で要素数が6の配列の全要素を1～10の乱数で埋め尽くすプログラムを作成せよ。
 * @author shitashige
 * @date 20200227
 */


#include <iostream>
#include <ctime>

/**
 * @fn
 * メイン関数
 * @brief 配列にランダム数値を入れる関数
 * @return 0:正常終了
 */
int main() {

	const int element = 6;	// 要素数
	int rundomNumber;	// ランダム数値
	int number[element] = {0};	// 数字の配列

	/* 初期シードを決定 */
	srand((unsigned int)time(NULL));


	/* 要素数分だけループ */
	for (int i = 0; i < element; i++) {
		/* 乱数から10のあまりを求める事により、値が0～9の間になる。そして+1する為、1～10になる */
		rundomNumber = rand() % 10 + 1;

		number[i]=rundomNumber;
		/* 配列の数値出力 */
		std::cout << number[i] << "\n";
	}

	return 0;
}