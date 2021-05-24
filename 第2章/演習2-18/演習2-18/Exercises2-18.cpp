/*
 * @file  Exerises2-18.cpp
 * @brief 演習2-18	以下のif文が何を行うのかを説明せよ。
					if (a = 0)c = 3;
 * @author shitashige
 * @date 20200103   
 */

#include <iostream>

/**
 * @fn
 * メイン関数
 * @brief if (a = 0)c = 3;を確かめる関数。
 * @return 0:正常終了
 */

int main() {
	int a = 1;	// 変数a（問題文にてこのように定義するように書いてあった為）
	int c = 1;	// 変数c（問題文にてこのように定義するように書いてあった為）

	/* aに0を格納する。0はC++ではfalse扱いになるので、if文の中が実行されず、cに3は格納されない */
	if (a = 0)c = 3;

	/* 結果出力 */
	std::cout << "a：" << a << "\nc：" << c;

	return 0;
}