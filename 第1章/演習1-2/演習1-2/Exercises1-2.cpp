/**
 * @file Exerises1-2.cpp
 * @brief 演習1-2　List1-1(p.4)のプログラムからusing指令を削除して、coutをstd::coutに変更したプログラムを作成せよ。
 * @author shitashige
 * @date 20191204
 */

#include <iostream>

 /**
  * @fn
  * メイン関数
  * @brief ヘッダをインクルードする指令が欠如している場合の動作確認
  * @return 0:正常終了
  */
int main() {
	/*
	 * 名前空間宣言を削除した事により、coutを使用する際に、std::を宣言してあげないと、
	 * coutが使用できない。
	 */
	std::cout << "初めてのC++プログラム。\n";
	std::cout << "画面に出力しています。\n";

	return 0;
}