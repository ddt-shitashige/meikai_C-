/**
 * @file Exerises7-1.cpp
 * @brief 演習7-1	List7-2に&ptrの表示を追加したプログラムを作成せよ。
 * @author shitashige
 * @date 20200322
 */



#include <iostream>

using namespace std;

/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	int n = 135;	// 数値n

	/* ｎの値表示 */
	cout << "n  :" << n << '\n';

	/* nのメモリ番地表示 */
	cout << "&n  :" << &n << "番地\n";

	int* ptr = &n;	// nの番地


	/* nのメモリ番地表示 */
	cout << "ptr  :" << ptr << "番地\n";

	/* nの値表示 */
	cout << "*ptr :" << *ptr << "\n";

	/* nのメモリ番地が格納してあるメモリ番地を表示 */
	cout << "&ptr :" << &ptr << "番地\n";


	return 0;
}