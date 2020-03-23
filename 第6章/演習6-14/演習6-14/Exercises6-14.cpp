/**
 * @file Exerises6-14.cpp
 * @brief 演習6-14	a,bを昇順(a≦bとなるように並び替える)にソートする関数sortを作成せよ。
					void sort (int &a, int &b)
 * @author shitashige
 * @date 20200322
 */


#include <iostream>


/**
  * @fn
  * sort
  * @brief 昇順にソートする
  * @param a 数値1
  * @param b 数値2
  * @return
  */
void sort(int &a,int &b) {
	/* aの方が大きかったらaとbを入れ替える */
	if (a > b) {
		/* aとnを入れ替える */
		std::swap(a,b);
	}

}

/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {


	/* メッセージ出力 */
	std::cout << "数値を2つ入力してください。\n";

	int maxNumber;	// 最大番号
	int minNumber;	// 最小番号

	/* 最小値と最大値をユーザー入力 */
	std::cin >> maxNumber >> minNumber;

	sort(minNumber,maxNumber);

	/* 全和数の関数を呼び出して表示*/
	std::cout << "ソートした結果、小さい値「" << minNumber << "」\n大きい値「" << maxNumber << "」となりました\n";
	return 0;
}