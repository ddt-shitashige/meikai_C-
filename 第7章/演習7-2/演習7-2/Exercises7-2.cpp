/**
 * @file Exerises7-21.cpp
 * @brief 演習7-2	List6-15の関数swapを、参照わたしではなく、ポイントわたしによって行うように変更したプログラムを作成せよ。
 * @author shitashige
 * @date 20200324
 */



#include <iostream>

using namespace std;
/**
 * @fn
 * main
 * @brief 引数1と引数2の値を交換
 * @param x 1つ目の数値
 * @param y 2つ目の数値
 * @return 0:正常終了
 */
void swap(int *x, int *y) {
	/* tにxを入れる*/
	int t = *x;
	/* xの値をyにする */
	*x = *y;
	/* yの値をxにする */
	*y = t;

}
/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	int a, b;    // aとbの数値

	/* メッセージを表示したのち、a値を入力 */
	cout << "変数a:"; cin >> a;
	/* メッセージを表示したのち、b値を入力 */
	cout << "変数b:"; cin >> b;

	/* a値とb値を交換 */
	swap(a, b);

	/* メッセージ表示 */
	cout << "変数aとbの値を交換しました。\n";
	/* メッセージ表示 */
	cout << "変数aの値は" << a << "です\n";
	/* メッセージ表示 */
	cout << "変数bの値は" << b << "です\n";

	return 0;
}