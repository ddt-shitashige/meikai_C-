/**
 * @file Exerises2-11.cpp
 * @brief 演習2-11	キーボードから読み込んだ3つの整数の中央値を求めて表示するプログラムを作成せよ。
					※例えば2,3,1の中央値は2で、1,2,1の中央値は1で、3,3,3の中央値は3である。。
 * @author shitashige
 * @date 20191225
 */
#include <iostream>
using namespace std;
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

	/* ユーザーに入力を促すメッセージ */
	cout << "数字を3つ連続で入力してください";

	/* 文字を入力させる */
	cin >> firstInputNumber >> secondInputNumber >> thirdInputNumber;




	return 0;
}