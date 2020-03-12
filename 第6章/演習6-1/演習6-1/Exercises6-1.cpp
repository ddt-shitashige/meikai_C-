/**
 * @file Exerises6-1.cpp
 * @brief 演習6-1	受け取ったint型の引数の値nが負であれば-1を返却し、0であれば0を返却し、正であれば1を返却する関数sign_ofを作成せよ。以下の部分を作成する事。
 					int sign_of(int n){ ... }
 * @author shitashige
 * @date 20200312
 */



#include <iostream>

 /**
   * @fn
   * 符号判別関数
   * @brief 符号を判定する
   * @return 0:nが0
   * @return 1:nが正値
   * @return -0:nが負値
   */
int sign_of(int n) {
	/* nが正値なら1を返す */
	if (n > 0)
		return 1;
	/* nが負値なら-1を返す */
	else if (n < 0)
		return -1;
	/* nが0なら0を返す */
	else
		return 0;

}


/**
  * @fn
  * メイン関数
  * @brief 合計と平均を求める関数
  * @return 0:正常終了
  */
int main() {

	int inputNumber = 0;	// 入力数値
	int returnNumber = 0;	// 戻り数値

	/* 入力促し表示 */
	std::cout << "数値を入力してください。\n";

	/* 数値入力 */
	std::cin >> inputNumber;

	/* 正負判定 */
	returnNumber = sign_of(inputNumber);

	/* 戻り値判定 */
	if (returnNumber == 1) {
		/* 結果表示 */
		std::cout << "正値です\n";
	}
	/* 戻り値判定 */
	else if (returnNumber == -1) {
		/* 結果表示 */
		std::cout << "負値です\n";

	}
	/* 戻り値判定 */
	else {
		/* 結果表示 */
		std::cout << "0です\n";
	}
	return 0;
}
