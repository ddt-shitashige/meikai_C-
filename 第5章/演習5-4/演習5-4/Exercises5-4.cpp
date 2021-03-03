/**
 * @file Exerises5-4.cpp
 * @brief 演習5-4	連続する要素が同じ値とならないように演習5-3のプログラムを改変したプログラムを作成せよ。例えば、{1,3,5,5,3,2}とならないようにすること。
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
	int cacheNumber = 0;		// 一時保存数値
	int rundomNumber = 0;	// ランダム数値
	int number[element] = { 0 };	// 数字の配列

	/* 初期シードを決定 */
	srand((unsigned int)time(NULL));


	/* 要素数分だけループ */
	for (int i = 0; i < element; i++) {
		/* 乱数から10のあまりを求める事により、値が0～9の間になる。そして+1する為、1～10になる */
		cacheNumber = rand() % 10 + 1;

		/* もし、一時保存数値とランダム数値が同じなら、ループの最初に戻る */
		if (cacheNumber == rundomNumber) {
			/* iをデクリメント */
			i--;
			/* ループの最初に戻る */
			continue;
		}
		/* ランダム数値に一時保存数値を格納 */
		rundomNumber = cacheNumber;

		/* 配列にランダム数値を格納 */
		number[i] = rundomNumber;

		/* 配列の数値出力 */
		std::cout << number[i] << "\n";
	}

	return 0;
}