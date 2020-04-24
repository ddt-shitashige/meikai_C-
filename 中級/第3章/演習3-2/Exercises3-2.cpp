/**
 * @file Exerises3-2.cpp
 * @brief 演習3-2 指定された条件を満たす要素を配列から線形探索する関数search_ifを作成せよ。
 * 第一引数aは探索対象の配列であり、第二引数nは要素数である。第三引数condには条件をみたすかどうかの判定を行う為の関数へのポインタを受け取る。条件を満たす要素の内、最も戦闘は和の要素の添え字を返却する事。ただし、探索に失敗した場合には-1を返却するものとする。
 * この関数は例えば「15以上30以下の要素の探索」「5で割り切れる要素の探索」といったに似の条件での探索を可能とする。
 * @author shitashige
 * @date 20020424
 */


#include <ctime>
#include<cstdlib>
#include<iostream>



/*
 *@fn
 * @brief 15以上30未満判定関数
 * @param number 数値
 * @return 結果
 */
bool fifteenToThirty(int number) {
	return number >= 15 && number < 30;
}

/*
 *@fn
 * @brief 5で割り切れる
 * @param number 数値
 * @return 結果
 */
bool divisibleFive(int number) {
	return !(number % 5);
}


/*
 *@fn
 * @brief 判定する関数
 * @param a 要素
 * @param n 要素数
 * @param cond 判定
 * @return 結果
 */
int search_if(const int a[], int n, bool cond(int n)) {
	/* 要素数ループ */
	for (int i = 0; i < n; i++) {
		/* 判定 */
		if ((cond)(a[i]))
			return a[i];
	}
	return -1;
}


/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	int point[10];	// 点数
	int element = sizeof(point) / sizeof(point[0]);	// 要素数

	srand(time(NULL));	// 乱数の種を初期化

	/* 要素数ループ */
	for (int i = 0; i < element; i++) {
		point[i] = rand() % 101;	// 0～100の乱数を代入
	}

	/* 要素分ループ */
	for (int i = 0; i < element; i++) {
		/* メッセージ出力 */
		std::cout << "a[" << i << "] = " << point[i] << '\n';
	}

	/* メッセージ出力 */
	std::cout << "15以上30以下：" << search_if(point, element, fifteenToThirty) << '\n';

	/* メッセージ出力 */
	std::cout << "5で割り切れる：" << search_if(point, element, divisibleFive) << '\n';


}