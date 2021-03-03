/**
 * @file Exerises6-12.cpp
 * @brief 演習6-12	b以上a以下の全整数の和を求める関数sumを作成せよ。なお、bに対する実引数が省略されて呼び出された場合はbを1と見まして合計を求める事。
					int sum(int a, int b)
 * @author shitashige
 * @date 20200323
 */


#include <iostream>
using namespace std;

/**
  * @fn
  * sum
  * @brief b以上a以下の全整数の和を求める関数
  * @param a 最大値
  * @param b 最小値
  * @return
  */
int sum(int a, int b = 1) {
	int returnNumber = 0;	// リターンする数値


	/* リターンする数値にb以上a以下の数値を加算する */
	for (int i = b; i <= a; i++) {
		/* リターンする数値にbから繰り上がっていく数値を加算 */
		returnNumber += i;
	}
	return returnNumber;
}

/**
 * @fn
 * main
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {

	/* メッセージ出力 */
	cout << "数値を2つ入力してください。\n";

	int maxNumber;	// 最大番号
	int minNumber;	// 最小番号

	/* 最小値と最大値をユーザー入力 */
	cin >> maxNumber >> minNumber;

	/* 全和数の関数を呼び出して表示*/
	cout << "結果は「" << sum(maxNumber, minNumber) << "」でした。\n二つ目省略時は「" << sum(maxNumber) << "」でした。\n";



	return 0;
}