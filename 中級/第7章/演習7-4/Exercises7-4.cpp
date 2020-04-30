/**
 * @file Exerises7-4.cpp
 * @brief 演習7-4　3次元クラスThreeDimensionalを中層機底クラスとして定義せよ。さらに、ThreeDimensionalを継承するクラスを自由に定義せよ。
 * @author shitashige
 * @date 20200430
 */

#include <iostream>
#include "Cube.h"
/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */

int main() {
	Cube cube;	//立方体
	double lenght;	// 辺の長さ

	/* 文字列出力 */
	std::cout << "辺の長さを入力";

	/* 数値入力 */
	std::cin >> lenght;

	/* 辺登録 */
	cube.Inputside(lenght);

	/* 面積計算 */
	cube.Area();

	/* 結果出力 */
	cube.Print();


}