/**
 * @file Exerises4-6.cpp
 * @brief	3種類の浮動小数点型の大きさをsizeof演算子によって、表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20200212
 */


#include <iostream>

/**
 * @fn
 * メイン関数
 * @brief 浮動小数点のさいずを表示する関数
 * @return 0:正常終了
 */
int main() {

	float floatNumber = 0;				// float数字
	double doubleNumber = 0;			// double数字
	long double longDoubleNumber = 0;	// lobgdouble数字

	/* 結果出力 */
	std::cout << "floatサイズ：" << sizeof(floatNumber) << "\n" << "doubleサイズ：" << sizeof(doubleNumber) << "\n" << "longdoubleサイズ：" << sizeof(longDoubleNumber) << "\n";

    return 0;
}