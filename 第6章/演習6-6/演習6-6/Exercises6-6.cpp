/**
 * @file Exerises6-6.cpp
 * @brief 演習6-6	「こんにちは。」と表示する関数helloを作成せよ。
					void hello();
 * @author shitashige
 * @date 20200317
 */


#include <iostream>

 /**
   * @fn
   * 文字を表示する関数
   * @brief 「hello」を表示する。
   * @return 
   */
void hello() {
	/* 結果表示 */
	std::cout << "こんにちは。";
}


/**
  * @fn
  * メイン関数
  * @brief メイン関数
  * @return 0:正常終了
  */
int main() {

	/* hello関数呼び出し */
	hello();
	return 0;
}
