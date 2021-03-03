/**
 * @file Exerises6-13.cpp
 * @brief 演習6-13	List6-14のプログラムにa=y;を追加してプログラムの挙動を確認せよ。
 * @author shitashige
 * @date 20200323
 */


#include <iostream>
using namespace std;

/**
 * @fn
 * main
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	
	int x=1;	// x値
	int y=2;	// y値
	int &a=x;	// aの値はxのメモリを見るようにする。

	/* a値出力 */
	cout << "a = " << a << '\n';
	/* x値出力 */
	cout << "x = " << x << '\n';
	/* y値出力 */
	cout << "y = " << y << '\n';

	/* a値を5に変更(x値も5に変わる) */
	a=5;

	/* a値出力 */
	cout << "a = " << a << '\n';
	/* x値出力 */
	cout << "x = " << x << '\n';
	/* y値出力 */
	cout << "y = " << y << '\n';

	/* aとxをy値に変更 */
	a = y;

	/* a値出力 */
	cout << "a = " << a << '\n';
	/* x値出力 */
	cout << "x = " << x << '\n';
	/* y値出力 */
	cout << "y = " << y << '\n';

	return 0;
}