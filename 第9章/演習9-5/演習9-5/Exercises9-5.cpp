/**
 * @file Exerises9-5.cpp
 * @brief 演習9-5	配列の全要素の最小値を求める関数テンプレートを作成せよ。なお、最も小さい文字列を求められるようにするために、const char*型に明示的に特殊化したものをあわせて作成すること。
 *					template <class Type> Type minof (const Type x[], int n)
 * @author shitashige
 * @date 20200327
 */


#include <iostream>
#include <string.h>

const int stringElement=30;	// 文字数

 /**
  * @fn
  * minof
  * @brief 数値の最小値をリターンする
  * @param x 配列
  * @param n 要素数
  * @return 最小値
  */
template <class Type> Type minof (Type x[], int n) {
	/* 配列の最初の要素を格納 */
	Type minNumber=x[0];	// 最小値

	/* 要素数全てループ */
	for (int i = 0; i < n; i++) {
		/* 要素数の比較 */
		if (minNumber > x[i]) {
			/* minが最小値で無かったら値を格納する */
			minNumber = (x[i]);
		}
	}
	/* 最小値を返却 */
	return minNumber;
}

/**
 * @fn
 * minof
 * @brief 文字列の最小値をリターンする
 * @param x 配列
 * @param n 要素数
 * @return 最小値
 */
template <> const char* minof<const char*> (const char **x, int n) {

	char *minChar =NULL;	// 最小値

	/* メモリ確保 */
	minChar=new char[stringElement];

	/* 最初の要素格納 */
	minChar=const_cast<char*>(x[0]);

	/* 要素数全てループ */
	for (int i = 0; i < n; i++) {
		/* 要素の比較 */
		if (strcmp(minChar, x[i]) > 0) {
			/* minが最小値で無かったら値を格納する */
			minChar = const_cast<char*>(x[i]);
		}
	}

	/* 最小値を返却 */
	return minChar;
}


/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {


	int inputNumber[2];	// 入力数値	
	const char inputString[2][stringElement]={"ABC","ABB"};	// 固定文字

	/* メッセージ表示 */
	std::cout << "数値を入力してください。";

	/* 文字列入力 */
	std::cin >> inputNumber[0];

	/* メッセージ表示 */
	std::cout << "数値を入力してください。";

	/* 文字列入力 */
	std::cin >> inputNumber[1];

	/* 結果表示 */
	std::cout << "結果：" << minof(inputNumber, 2)<<"\n";

	const char *aa[]={"ABC","ABB"};


	/* 結果表示 */
	std::cout << "結果：" << minof(aa, 2);

}