/**
 * @file Exerises5-10.cpp
 * @brief 演習5-10	4行3列の行列と3行4列の行列の積を求めるプログラムを作成せよ。各構成要素の値はキーボードから読み込むこと。
 * @author shitashige
 * @date 20200308
 */
#include <iostream>

 /**
  * @fn
  * メイン関数
  * @brief 行列の積を求める関数
  * @return 0:正常終了
  */
int main() {

	int firstQueue[3][4] = { 0 };	// 最初の行列
	int secondQueue[4][3] = { 0 };	// 2つめの行列
	int answerQueue[3][3] = { 0 };	// 答えの行列
	int answerNumber = 0;	// 回答

	/* 入力促し文字列表示 */
	std::cout << "最初の行列の数字を入力してください。\n";

	/* 行列の中身を格納するループ */
	for (int i = 0; i < 3; i++) {
		/* 行列の中身を格納するループ */
		for (int j = 0; j < 4; j++) {
			/* 行列の中身を格納 */
			std::cin >> firstQueue[i][j];
		}
	}

	/* 入力促し文字列表示 */
	std::cout << "2つ目の行列の数字を入力してください。\n";

	/* 行列の中身を格納するループ */
	for (int i = 0; i < 4; i++) {
		/* 行列の中身を格納するループ */
		for (int j = 0; j < 3; j++) {
			/* 行列の中身を格納 */
			std::cin >> secondQueue[i][j];
		}
	}

	/* 行列の計算結果を格納するループ */
	for (int i = 0; i < 3; i++) {
		/* 行列の計算結果を格納するループ */
		for (int j = 0; j < 3; j++) {
			/* 行列の計算結果の途中を格納するループ */
			for (int k = 0; k < 4; k++) {
				/* 行列の計算結果途中の値を格納 */
				answerNumber += firstQueue[i][k] * secondQueue[k][j];
			}
			/* 行列の計算結果格納 */
			answerQueue[i][j] = answerNumber;
			/* 計算結果の途中値を初期化 */
			answerNumber = 0;

			/* 結果出力 */
			std::cout << answerQueue[i][j] << " ";
		}
		/* 改行出力 */
		std::cout << "\n";
	}
	return 0;
}