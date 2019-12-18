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
  * @brief ヘッダをインクルードする指令が欠如している場合の動作確認
  * @return 0:正常終了
  */
int main() {


	/*
	 * 1桁の正の整数値を求める。
	 */
	/* 初期シードを決定 */
	srand((unsigned int)time(NULL));

	int oneDigitPositiveValue = 0;	// 1桁の正の整数値
	
	/* この乱数生成だと、0が出ることがあるので、0を避ける為に、dowhile文で避ける */
	do {
		/* 10で割ることにより、1桁の乱数設定 */
		oneDigitPositiveValue = rand() % 10;
	}while(oneDigitPositiveValue == 0);

	/* 結果出力 */
	std::cout << "1桁の正の整数値は" << oneDigitPositiveValue << "\n";

	
	/*
	 * 1桁の負の整数値を求める
	 */
	/* シードをリセット */
	srand((unsigned int)time(NULL));

	int oneDigitNegativeValue = 0;	// 1桁の負の整数値

	/* この乱数生成だと、0が出ることがあるので、0を避ける為に、dowhile文で避ける */
	do {
		/* -1を掛けることで、負値の乱数設定 */
		oneDigitNegativeValue = rand() % 10 * (-1);
	} while (oneDigitPositiveValue == 0);

	/* 結果出力 */
	std::cout << "1桁の負の整数値は" << oneDigitNegativeValue << "\n";


	/*
	 * 2桁の正の整数値を求める
	 */
	/* シードをリセット */
	srand((unsigned int)time(NULL));

	int twoDigitNegativeValue = 0;	// 2桁の正の整数値

	/* 結果が1桁だった場合はもう一度やり直すループ */
	do {
		/* 乱数設定 */
		twoDigitNegativeValue = rand() % 100;

	} while (twoDigitNegativeValue <= 10);

	/* 結果出力 */
	std::cout << "2桁の正の整数値は" << twoDigitNegativeValue << "\n";

	return 0;
}