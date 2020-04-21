/**
 * @file Exerises2-3.cpp
 * @brief 演習2-3 符号無し整数xの第posビットを、1にした値を返す関数set、0にした値を返す関数reset、反転した値を返す関数inverseを作成せよ。
 * @author shitashige
 * @date 20020421
 */



#include<iostream>

/**
 * @fn
 * @brief 符号無し整数xの下位第posビットを、1にした値を返す関数
 * @param x 整数
 * @param n 回転数
 * @return 回答
 */
unsigned set(unsigned x, int pos) {

	unsigned number = 1;	// 数値

	/* 1の値をpos分ずらす */
	number=number << pos-1;

	/* pos分ずらしたところに1を格納 */
	return x | number;

	
}


/**
 * @fn
 * @brief 符号無し整数xの下位第posビットを、0にした値を返す関数
 * @param x 整数
 * @param n 回転数
 * @return 回答
 */
unsigned reset(unsigned x, int pos) {

	unsigned number = 1;	// 数値

	/* 1の値をpos分ずらす */
	number=number << pos-1;
	/* 逆転し0にする */
	number = ~number;

	/* pos分ずらしたところに0を格納 */
	return x & number;
}


/*
 *@fn
 * @brief 符号無し整数xの下位第posビットを、反転した値を返す関数
 * @param x 整数
 * @param n 回転数
 * @return 回答
 */
unsigned inverse(unsigned x, int pos) {
	unsigned number = 1;	// 数値

	/* 1の値をpos分ずらす */
	number = number << pos -1;
	/* pos分ずらしたところに排他的論理和を格納 */
	return x ^ number;


}
/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {

	unsigned number;	// 数値
	unsigned pos;	// 箇所


	/* メッセージ出力 */
	std::cout << "数値と箇所を入力してください\n";

	/* 数値入力 */
	std::cin >> number >> pos;

	/* 結果出力 */
	std::cout << "結果(set):" << set(number, pos) << "\n結果(reset):" << reset(number, pos)<< "\n結果(inverse):" << inverse(number, pos);

}
