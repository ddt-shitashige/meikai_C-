/**
 * @file Exerises5-12.cpp
 * @brief 演習5-12	三次元配列の要素数を示す式を示せ。プログラムを作成して核に荷を行う事。
 * @author shitashige
 * @date 20200310
 */

#include <iostream>

/**
  * @fn
  * メイン関数
  * @brief 合計と平均を求める関数
  * @return 0:正常終了
  */
int main() {
    int  queue[10][10][10] = { 0 };	// 行列

    std::cout << "三次元配列の要素数は" << sizeof(queue) / sizeof(int) << "です。";

    return 0;
}
