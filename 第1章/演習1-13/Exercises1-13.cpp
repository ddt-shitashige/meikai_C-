/**
 * @file Exerises1-13.cpp
 * @brief 演習1-13	以下に示すプログラムを作成せよ。
					1.1桁の正の整数値(すなわち1以上9以下の値)をランダムに生成して表示。
					2.1桁の負の整数値(すなわち1以上9以下の値)をランダムに生成して表示。
					3.1桁の正の整数値(すなわち10以上99以下の値)をランダムに生成して表示。
 * @author shitashige
 * @date 20191211
 */

#include <ctime>
#include <cstdlib>
#include <iostream>
 /**
  * @fn
  * メイン関数
  * @brief 乱数を生成して、表示する関数。
  * @return 0:正常終了
  */
int main() {


	/*
	 * 1桁の正の整数値を求める。
	 */
	/* 初期シードを決定 */
	srand((unsigned int)time(NULL));

	int oneDigitPositiveValue = 0;	// 1桁の正の整数値
	
	/* 乱数から9のあまりを求める事により、値が0～8の間になる */
	oneDigitPositiveValue = rand() % 9;

	/* 0～8の間の値をインクリメントする事により、1～9の値となる */
	oneDigitPositiveValue++;

	/* 結果出力 */
	std::cout << "1桁の正の整数値は" << oneDigitPositiveValue << "\n";

	
	/*
	 * 1桁の負の整数値を求める
	 */
	/* シードをリセット */
	srand((unsigned int)time(NULL));

	int oneDigitNegativeValue = 0;	// 1桁の負の整数値

	/* 乱数から9のあまりを求め、-1を乗算する事により、値が0～-8の間になる */
	oneDigitNegativeValue = rand() % 9 * (-1);

	/* 0～8の間の値をデインクリメントする事により、-1～-9の値となる */
	oneDigitNegativeValue--;


	/* 結果出力 */
	std::cout << "1桁の負の整数値は" << oneDigitNegativeValue << "\n";


	/*
	 * 2桁の正の整数値を求める
	 */
	/* シードをリセット */
	srand((unsigned int)time(NULL));

	int twoDigitNegativeValue = 0;	// 2桁の正の整数値

	/* 乱数から90のあまりを求める事により、値が0～89の間になる */
	twoDigitNegativeValue = rand() % 90;

	/* 0～89の間の値を+10する事により、10～99の値となる */
	twoDigitNegativeValue += 10;


	/* 結果出力 */
	std::cout << "2桁の正の整数値は" << twoDigitNegativeValue << "\n";

	return 0;
}