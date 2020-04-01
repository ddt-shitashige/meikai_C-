/**
 * @file Exerises14-2.cpp
 * @brief 演習14-2	クラスInyArrayのオブジェクトを自己初期化する宣言IntArrayx=x;では、オブジェクトxのデータメンバnelemとvecが不定値で初期化される。自己初期化が行われた際に、データメンバを不定値で初期化しないようにコピーコンストラクタを改良せよ。
 * @author shitashige
 * @date 20200401
 */


#include <iostream>
#include "IntArray.h"

/* メイン関数 */
int main(){

	IntArray intArray = intArray;

	std::cout << "サイズ：" << intArray.size() << "\n中身："<< intArray[0] << "\n";
}