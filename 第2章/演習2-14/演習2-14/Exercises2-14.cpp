/*
 * @file  Exerises2-14.cpp
 * @brief 演習2-14	0,1,2のいずれかの値の乱数を生成し、0であれば「グー」1であれば「チョキ」2であれば「パー」と表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20191230
 */
#include <iostream>
#include <ctime>
#include <cstdlib>

 /**
  * @fn
  * メイン関数
  * @brief じゃんけんの結果を表示するプログラム
  * @return 0:正常終了
  */
int main() {

	int randomNumber = 0;			// ランダム数字

	/* 初期シード決定 */
	srand(time(NULL));
 
	/* 3未満の数値を作成 */
	randomNumber = rand() % 3;

	/* スイッチ文にて、表示文字を変える */
	switch (randomNumber) {
		/* 乱数が0だった場合 */
		case 0: std::cout << "グー";
			break;
		/* 乱数が1だった場合 */
		case 1: std::cout << "チョキ";
			break;
		/* 乱数が2だった場合 */
		case 2: std::cout << "パー";
			break;
	}
	return 0;
}