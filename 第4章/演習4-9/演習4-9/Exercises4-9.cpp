/**
 * @file Exerises4-9.cpp
 * @brief	3つの整数値を読み込んで、その合計と平均を表示するプログラムを作成せよ。
 *			平均は実数地で表示する事。キャスト記法を用いるもの。関数的記法を用いるもの。static_cast記法を用いるものを作成する事。
 * @author shitashige
 * @date 20200216
 */


#include <iostream>

/**
 * @fn
 * メイン関数
 * @brief 平均を求める関数
 * @return 0:正常終了
 */
int main() {

	int inputNoOne = 1;				// 入力ナンバー1
	int inputNoTwo = 1;				// 入力ナンバー2
	int inputNoThree = 1;			// 入力ナンバー3

	/* 数値入力促し */
	std::cout << "数値を3つ入力して下さい";

	/* 数値入力 */
	std::cin >> inputNoOne >> inputNoTwo >> inputNoThree;

	/* 結果出力 */
	std::cout << "合計：" << inputNoOne + inputNoTwo + inputNoThree << "\n"
		<< "実数値平均：" << (inputNoOne + inputNoTwo + inputNoThree) / 3 << "\n"
		<< "キャスト平均：" << (double)(inputNoOne + inputNoTwo + inputNoThree) / 3 << "\n"
		<< "関数的記法平均：" << double((inputNoOne + inputNoTwo + inputNoThree) / 3) << "\n"
		<< "static_cast平均：" << static_cast<double>((inputNoOne + inputNoTwo + inputNoThree) / 3) << "\n";

	return 0;
}