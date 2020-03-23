/**
 * @file Exerises6-17.cpp
 * @brief 演習6-17	呼び出された回数を表示する関数put_countを作成せよ。右に示すのは、関数put_countを3回呼び出した実行結果である。
 					void put_count ()
 * @author shitashige
 * @date 20200322
 */


#include <iostream>


 /**
   * @fn
   * put_count
   * @brief この関数を呼び出された回数を表示する
   * @return
   */
void put_count() {
	static int countNumber; // カウント数値
	/* カウント数値カウントアップ */
	countNumber++;
	/* メッセージ出力 */
	std::cout<<"put_count："<< countNumber <<"回目\n";
}

/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {


	/* メッセージ出力 */
	std::cout << "カウント値を入力してください。\n";

	int count;   // カウント値

	/* 最小値と最大値をユーザー入力 */
	std::cin >> count;

	/* ユーザーが入力した数値分ループ */
	for (int i=0; i < count; i++) {
		/* 呼び出しカウント関数呼び出し */
		put_count();
	}

	return 0;
}