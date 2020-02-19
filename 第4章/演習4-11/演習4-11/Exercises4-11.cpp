/**
 * @file Exerises4-11.cpp
 * @brief	float型の変巣を0.0から1.0まで0.001ずつ増やしながら、その値とその値の2乗を表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20200219
 */

#include <iostream>
#include<iomanip>

/**
 * @fn
 * メイン関数
 * @brief インクリメントした数を表示する関数
 * @return 0:正常終了
 */
int main() {

	/* 1000回ループ */
	for (float i = 0; i <= 1; i+=0.001) {
		/* 0.001ずつ増やした値とその2乗値を表示 */
		std::cout << std::fixed << std::setprecision(6) << i << "\t" << i*i << "\n";
	}
	return 0;
}