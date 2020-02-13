/**
 * @file Exerises4-7.cpp
 * @brief	浮動小数点の情報をtypeid演算子によって表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20200213
 */

#include <iostream>

/**
 * @fn
 * メイン関数
 * @brief 浮動小数点のタイプを表示する関数
 * @return 0:正常終了
 */
int main() {

    float floatNumber = 0;				// float数字
    double doubleNumber = 0;			// double数字
    long double longDoubleNumber = 0;	// lobgdouble数字

    /* 結果出力 */
    std::cout << "floatタイプ：" << typeid(floatNumber).name() << "\n" << "doubleタイプ：" << typeid(doubleNumber).name() << "\n" << "longdoubleサイズ：" << typeid(longDoubleNumber).name() << "\n";

    return 0;
}