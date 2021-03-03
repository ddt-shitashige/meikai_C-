/**
 * @file Exerises5-13.cpp
 * @brief 演習5-13	本文で開設した2次元配列の初期化を実際にプログラムを作成して確認せよ。
 * @author shitashige
 * @date 20200311
 */



#include <iostream>

/**
  * @fn
  * メイン関数
  * @brief 合計と平均を求める関数
  * @return 0:正常終了
  */
int main() {

	const int element=3;	// 要素数
	int thereQueue[element][element] = { {0,1,2},
										{3,4,5},
										{6,7,8}};	// 初期化子有行列
	int nonQueue[element][element]={};	// 初期化子無配列

	/* 情報表示 */
	std::cout << "初期化子有の配列は\n";

	/* 行列の中身を表示するループ  */
	for (int i = 0; i < element; i++) {
		/* 行列の中身を表示するループ  */
		for (int j = 0; j < element; j++) {
			/* 行列の中身表示 */
			std::cout << thereQueue[i][j] <<", ";
		}
		std::cout << "\n";
	}

	/* 情報表示 */
	std::cout << "初期化子無の配列は\n";

	/* 行列の中身を表示するループ  */
	for (int i = 0; i < element; i++) {
		/* 行列の中身を表示するループ  */
		for (int j = 0; j < element; j++) {
			/* 行列の中身表示 */
			std::cout << nonQueue[i][j] << ", ";
		}
		std::cout << "\n";
	}

	return 0;
}
