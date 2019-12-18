/**
 * @file Exerises2-5.cpp
 * @brief 演習2-5	正の整数値を読み込んで、それを3で割った値に応じて、『その値は3で割り切れます。』『その値を3で割った余剰は1です』
					『その値を3で割った余剰は2です』のいずれかを表示するプログラムを作成せよ。
					※正でない値を読み込んだ場合は『正でない値が入力されました。』と表示する事。
 * @author shitashige
 * @date 20191218
 */

#include <iostream> 

 /**
  * @fn
  * メイン関数
  * @brief 3で割り切れるか否かを判断し余りを求めるメソッド
  * @return 0:正常終了
  */
int main() {

	int inputNumber = 0;		// 入力された数字
	int really = 0;				// あまり

	/* ユーザー入力を促すメッセージを表示 */
	std::cout << "数値を入力して下さい。";

	/* ユーザー入力 */
	std::cin >> inputNumber;

	/* 負値か同化を判断 */
	if (inputNumber < 0) {
		/* メッセージ表示 */
		std::cout << "正でない値が入力されました。\n";
		return 0;
	}

	/* あまりの計算 */
	really = inputNumber % 3;

	/* 割り切れていた場合は以下のメッセージを表示する。 */
	if (really == 0) {
		/* メッセージ表示 */
		std::cout << "その値は3で割り切れます。\n";
	}
	/* 割りきれなかった場合 */
	else {
		/* メッセージ表示 */
		std::cout << "その値を3で割った余剰は" << really << "です。";
	}
	return 0;
}