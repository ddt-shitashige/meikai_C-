/**
 * @file Exerises7-3.cpp
 * @brief 演習7-3	List6-16の関数sortを、参照わたしではなく、ポイントわたしによって行うように変更したプログラムを作成せよ。
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
 * @return
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
 * @brief 引数1と引数2と引数3を昇順にソート
 * @param a 1つ目の数値
 * @param b 2つ目の数値
 * @param c 3つ目の数値
 * @return
 */
void sort (int *a, int *b, int *c) {
	/* aとbの値を入れ替える */
	if (*a > *b)swap(a, b);
	/* bとcの値を入れ替える */
	if (*b > *c)swap(b, c);
	/* aとbの値を入れ替える */
	if (*a > *b)swap(a, b);
}

/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	int a, b,c;    // aとbとcの数値

	/* メッセージを表示したのち、a値を入力 */
	cout << "変数a:"; cin >> a;
	/* メッセージを表示したのち、b値を入力 */
	cout << "変数b:"; cin >> b;
	/* メッセージを表示したのち、b値を入力 */
	cout << "変数c:"; cin >> c;

	/* a値とb値を交換 */
	sort(&a, &b, &c);

	/* メッセージ表示 */
	cout << "変数aとbとcの値を昇順にソートしました。\n";
	/* メッセージ表示 */
	cout << "変数aの値は" << a << "です\n";
	/* メッセージ表示 */
	cout << "変数bの値は" << b << "です\n";
	/* メッセージ表示 */
	cout << "変数cの値は" << c << "です\n";


	return 0;
}