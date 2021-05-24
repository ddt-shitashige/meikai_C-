/*
 * @file  Exerises2-17.cpp
 * @brief 演習2-17	変数aがdouble型で、変数bがint型であるとする。以下の代入によって、それぞれの変数の値はどのようになるかを説明せよ。
					a = b =1.5
 * @author shitashige
 * @date 20200101
 */

#include <iostream>

/**
 * @fn
 * メイン関数
 * @brief a=b=1.5を確かめる関数。
 * @return 0:正常終了
 */
int main() {
	double a;	// 変数a（問題文にてこのように定義するように書いてあった為）
	int b;		// 変数b（問題文にてこのように定義するように書いてあった為）

	/* bに1.5を代入するが、int型なので1になる。1をdouble型のaに代入する為、aは1となる。 */
	a = b = 1.5;

	/* 文字出力 */
	std::cout << "変数a:" << a << "\n変数b:" << b;

	return 0;
}