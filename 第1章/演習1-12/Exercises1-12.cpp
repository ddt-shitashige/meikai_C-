/**
 * @file Exerises1-12.cpp
 * @brief 演習1-12	右に示すように。三角形の底辺と高さを読み込んで、その面積を表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20191211
 */
#include <iostream>


using namespace std;


/**
 * @brief main関数
 * @return 0:正常
 */
int main() {
	double base = 0;		// 底辺
	double height = 0;		// 高さ

	/* 目的を表示 */
	cout << "三角形の面積を求めます。\n";

	/* 底辺入力を促すメッセージを表示 */
	cout << "底辺を入力してください。\n";

	/* 底辺入力 */
	cin >> base;

	/* 高さの入力を促すメッセージを表示 */
	cout << "高さを入力してください。\n";

	/* 高さ入力 */
	cin >> height;

	/* 面積出力 */
	cout << "面積は" << (base * height) / 2 << "です。";
}