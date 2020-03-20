/**
 * @file Exerises6-9.cpp
 * @brief 演習6-9	a以上b未満の乱数を生成して、その値を返却する関数randomを作成せよ。内部で乱数を生成する標準ライブラリであるrand関数を呼び出すこと。なおbの値がa未満である場合にはaの値をそのまま返却する事。
					int random(int a, int b)
 * @author shitashige
 * @date 20200320
 */


#include <iostream>
#include <ctime>
#include <iomanip>

 /**
   * @fn
   * a以上b以下のランダム値を出力する関数。
   * @brief a以上b未満のランダム値を出力する関数。
   * @param[in] a 下限値
   * @param[in] c 上限値
   * @return
   */
int random(int a, int b) {
	int rundomNumber = 0;	// ランダム数値

	/* b-aが0以下だったらaをリターンする */
	if (b - a <= 0) {
		return a;
	}


	/* 初期シードを決定 */
	srand((unsigned int)time(NULL));
	/* a以上b未満の乱数生成 */
	rundomNumber = rand() % (b-a)+a;

	return rundomNumber;

}

 /**
  * @fn
  * メイン関数
  * @brief ランダム値を表示する関数。
  * @return 0:正常終了
  */
int main() {

	int minNumber;	// a値
	int maxNumber;	// b値
	/* メッセージ出力 */
	std::cout << "a値とb値を入力してください。\n";
	
	/* a値入力 */
	std::cin>>minNumber;
	/* b値入力 */
	std::cin>>maxNumber;


	/* メッセージ出力 */
	std::cout << "a値とb値間のランダム値は["<<random(minNumber,maxNumber)<<"]です。\n";

	return 0;
}