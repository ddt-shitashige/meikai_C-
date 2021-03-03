/**
 * @file Exerises4-8.cpp
 * @brief	以下の算術演算を行う格式にsizeof演算子やtypeid演算子を適用した値を表示するプログラムを作成せよ。また、実行結果に対する考察を行う事。
 *			int+int double+double int+double double+int
 * @author shitashige
 * @date 20200213
 */

#include <iostream>

/**
 * @fn
 * メイン関数
 * @brief 型が違う変数の演算を行う関数
 * @return 0:正常終了
 */
int main() {

	int intNoOne = 1;				// int1
	int intNoTwo = 1;				// int2
	double doubleNoOne = 1;			// double1
	double doubleNoTwo = 1;			// double2

	/* 結果出力 */
	std::cout << "<int+int>\n size" << sizeof(intNoOne + intNoTwo) << "\n type:" << typeid(intNoOne + intNoTwo).name()
		<< "\n<double+double>\n size" << sizeof(doubleNoOne + doubleNoTwo) << "\n type:" << typeid(doubleNoOne + doubleNoTwo).name()
		<< "\n<int+double>\n size" << sizeof(intNoOne + doubleNoTwo) << "\n type:" << typeid(intNoOne + doubleNoTwo).name()
		<< "\n<double+int>\n size" << sizeof(intNoOne + doubleNoTwo) << "\n type:" << typeid(intNoOne + doubleNoTwo).name();
		/*
		 * 考察：より、メモリをとる型が優先される。
		 */

	return 0;
}