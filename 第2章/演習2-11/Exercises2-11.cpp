/**
 * @file Exerises2-11.cpp
 * @brief 演習2-11	キーボードから読み込んだ3つの整数の中央値を求めて表示するプログラムを作成せよ。
					※例えば2,3,1の中央値は2で、1,2,1の中央値は1で、3,3,3の中央値は3である。。
 * @author shitashige
 * @date 20191225
 */
#include <iostream>
/**
 * @fn
 * メイン関数
 * @brief 3つの数字を入力させて中央値を求めるメソッド。
 * @return 0:正常終了
 */
int main() {
	int firstInputNumber = 0;	// 1番目に入力された数字
	int secondInputNumber = 0;	// 2番目に入力された数字
	int thirdInputNumber = 0;	// 3番目に入力された数字
	int medianResult = 0;		// 最小結果
	int maximumResult = 0;		// 最大結果

	/* ユーザーに入力を促すメッセージ */
	std::cout << "数字を3つ連続で入力してください";

	/* 文字を入力させる */
	std::cin >> firstInputNumber >> secondInputNumber >> thirdInputNumber;

	/* firstInputNumberと secondInputNumberを比較して、小さい方をmedianResultに格納する */
	medianResult = firstInputNumber < secondInputNumber ? firstInputNumber : secondInputNumber;

	/* minimumResuktとthirdInputNumberを比較して、小さい方をmedianResultに格納する */
	medianResult = medianResult < thirdInputNumber ? medianResult : thirdInputNumber;

	/* firstInputNumberと secondInputNumberを比較して、大きい方をmaximumResultに格納する */
	maximumResult = firstInputNumber < secondInputNumber ? secondInputNumber : firstInputNumber;

	/* minimumResuktとthirdInputNumberを比較して、大きい方をmaximumResultに格納する */
	maximumResult = maximumResult < thirdInputNumber ? thirdInputNumber : maximumResult;
	
	/* 今から出力する内容を伝える文字列 */
	std::cout<<"中央値は";

	/* 同じ値があれば、それは中央値になるので、その数値を出力 */
	if (firstInputNumber == secondInputNumber) {
		/* 結果出力 */
		std::cout<< firstInputNumber <<"です。";
		/* 最後の文を出力したので、メソッド終了 */
		return 0;
	}
	/* 同じ値があれば、それは中央値になるので、その数値を出力 */
	else if (firstInputNumber == thirdInputNumber) {
		/* 結果出力 */
		std::cout << firstInputNumber << "です。";
		/* 最後の文を出力したので、メソッド終了 */
		return 0;
	}
	/* 同じ値があれば、それは中央値になるので、その数値を出力 */
	else if (secondInputNumber == thirdInputNumber) {
		/* 結果出力 */
		std::cout << secondInputNumber << "です。";
		/* 最後の文を出力したので、メソッド終了 */
		return 0;
	}


	/* 1番目に入力した文字が中央値であればその値を出力 */
	if (firstInputNumber != medianResult && firstInputNumber != maximumResult) {
		/* 結果出力 */
		std::cout << firstInputNumber << "です。";
	}
	/* 2番目に入力した文字が中央値であればその値を出力 */
	else if (secondInputNumber != medianResult && secondInputNumber != maximumResult) {
		/* 結果出力 */
		std::cout << secondInputNumber << "です。";
	}
	/* 3番目に入力した文字が中央値であればその値を出力 */
	else if (thirdInputNumber != medianResult && thirdInputNumber != maximumResult) {
		/* 結果出力 */
		std::cout << thirdInputNumber << "です。";
	}


	return 0;
}