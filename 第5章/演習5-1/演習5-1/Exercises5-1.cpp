/**
 * @file Exerises5-1.cpp
 * @brief 演習5-1	要素型がint型で要素数が5の配列の要素に対して、先頭から順に5,4,3,2,1を代入して表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20200225
 */
#include <iostream>
/**
 * @fn
 * メイン関数
 * @brief 配列を出力する関数
 * @return 0:正常終了
 */
int main() {

	const int element =5;	// 要素数
	int number[element]={5,4,3,2,1};	// 数字の配列
	
	/* 要素数分だけループ */
	for (int i = 0; i < element; i++) {
		/* 配列の数値出力 */
		std::cout<<number[i]<<"\n";
	}
	return 0;
}