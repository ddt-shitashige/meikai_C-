#include "Exercises1-7.h"
/**
 * @file Exerises1-7.cpp
 * @brief 演習1-7	3つのint型変数に値を代入し、それらの合計と平均を求めるプログラムを作成せよ。
 * @author shitashige
 * @date 20191211
 */



/**
 * @brief main関数
 * @return 0:正常
 */
int main() {

	const int firstInt = 3;		// 1つ目のint型
	const int secondInt = 6;	// 2つ目のint型
	const int thirdInt = 9;		// 3つ目のint型

	/* 合計値出力 */
	std::cout << "合計値:" << calculationTotal(firstInt, secondInt, thirdInt) << "\n";

	/* 平均値出力 */
	std::cout << "平均値:" << calculationAverage(firstInt, secondInt, thirdInt) << "\n";
}


/**
 * @brief 3つの引数に与えられた数字の平均値を求める関数
 * @param[in] firstNumber 1つ目の数字
 * @param[in] secondNumber 2つ目の数字
 * @param[in] thirdNumber 3つ目の数字
 * @return 平均値
 */
int calculationAverage(const int firstNumber, const int secondNumber, const int thirdNumber){

	/* 平均値計算 */
	return ((firstNumber + secondNumber + thirdNumber) / 3);
}


/**
 * @brief 3つの引数に与えられた数字の合計値を求める関数
 * @param[in] firstNumber 1つ目の数字
 * @param[in] secondNumber 2つ目の数字
 * @param[in] thirdNumber 3つ目の数字
 * @return 合計値
 */
int calculationTotal(const int firstNumber, const int secondNumber, const int thirdNumber) {

	/* 合計値計算 */
	return (firstNumber + secondNumber + thirdNumber);
}