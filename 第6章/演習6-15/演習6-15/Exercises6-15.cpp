/**
 * @file Exerises6-15.cpp
 * @brief 演習6-15	時刻ｘ時ｙ分のｄｙ分後の時刻を求める関数spendを作成せよ。なｐ時刻の表現は24時間制であるものとする。例えば、23時59分後の2分後の時刻は0時1分となる。
					void spend (int &x, int &y int dy)
 * @author shitashige
 * @date 20200322
 */


#include <iostream>


 /**
   * @fn
   * spend
   * @brief 分を加算する
   * @param x 時間
   * @param y 分
   * @param dy 加算する分
   * @return
   */
void spend(int &x, int &y, int dy) {
	/* 時間部分に分の繰り上げを考慮した値を加算する */
	x=(x+((y+dy)/60))%24;
	/* 分部分は足して60の余りを求める事により求める */
	y=(y+dy)%60;
}

/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	int hour;	// 時間
	int min;	// 分
	int addMin;  // 加算分数
	do{
	/* メッセージ出力 */
	std::cout << "時間と分と加算分数を入力してください。\n";

	/* 時間と分と加算分数をユーザー入力 */
	std::cin >> hour >> min >> addMin;
	/* 数値が範囲外ならループ */
	} while (hour>24||min>60);

	/* 加算関数呼び出し */
	spend(hour, min, addMin);

	/* 結果を表示*/
	std::cout << "加算した結果["<<hour << "時" << min << "分]となりました。\n";
	return 0;
}