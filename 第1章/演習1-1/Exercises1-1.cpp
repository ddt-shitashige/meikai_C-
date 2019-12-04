/**
 * @file Exerises.cpp
 * @brief 演習1-1　ヘッダ<iostream>をインクルードする指令が欠如していると、どうなるであろうか。プログラムをコンパイルして検証せよ。
 * @author shitashige
 * @date 20191204
 */

/*
 * C++の文字を出力する「cout」のライブラリに関する情報を格納されている<iostream>を読み込まなかった為、
 * コンパイルエラーが発生する。
 */
 //#include <iostream>;
#include <iostream>;


 /**
  * @fn
  * メイン関数
  * @brief ヘッダをインクルードする指令が欠如している場合の動作確認
  * @return 0:正常終了
  */

int main() {

	/*	ABCの文字列を出力	*/
	std::cout << "ABC" ;

	/*	特に問題はない為、0をリターンする。	*/
	return 0;
}