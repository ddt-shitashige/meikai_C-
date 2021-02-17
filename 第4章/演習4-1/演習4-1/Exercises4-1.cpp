/**
 * @file Exerises4-1.cpp
 * @brief	全ての文字について、数字/英大文字/英小文字/記号文字などの文字種が分かる一覧表を出力するプログラムを作成せよ。
 * @author shitashige
 * @date 20200204
 */
#include <cctype>
#include <climits>
#include <iostream>
/**
 * @fn
 * メイン関数
 * @brief 文字種を表示する関数
 * @return 0:正常終了
 */
int main() {
	for (char i = 0;; i++) {

		/* 英数字か確認 */
		if (isalnum(i)) {
			/* 英語か確認 */
			if (isalpha(i)) {
				/* 英語の大文字か確認 */
				if(isupper(i)){
					/* 文字種出力 */
					std::cout << "英大文字:";
				}
				else{
					/* 文字種出力 */
					std::cout << "英小文字:";
				}
			}
			else {
				/* 文字種出力 */
				std::cout << "　　数字:";
			}
		}
		/* 記号文字か確認 */
		else if(isgraph(i)){
			/* 文字種出力 */
			std::cout<<"記号文字:";
		}
		else {
			std::cout << "　　　　:";

		}
		/* 文字コードから文字を判別 */
		switch (i) {
		/* 警報の場合 */
		case'\a':
			/* \aと出力 */
			std::cout << "\\a";
			break;
		/* 後退の場合 */
		case'\b':
			/* \bと出力 */
			std::cout << "\\b";
			break;
		/* 書式送りの場合 */
		case'\f':
			/* \fと出力 */
			std::cout << "\\f";
			break;
		/* 改行の場合 */
		case'\n':
			/* \nと出力 */
			std::cout << "\\n";
			break;
		/* 復帰の場合 */
		case'\r':
			/* \rと出力 */
			std::cout << "\\r";
			break;
		/* タブの場合 */
		case'\t':
			/* \tと出力 */
			std::cout << "\\t";
			break;
		/* 垂直タブの場合 */
		case'\v':
			/* \vと出力 */
			std::cout << "\\v";
			break;
		/* それ以外の場合 */
		default:
			/* 表示できる文字なら文字を出力無ければ空白を出力 */
			std::cout << ' ' << (isprint(i) ? i : ' ');
			break;
		}
		/* 整数型にキャストしたものを16進数で表示 */
		std::cout << ' ' << std::hex << int(i) << '\n';
		/* charの最大値を超えたらループから抜ける */
		if (i == CHAR_MAX) {
			/* ループから抜ける */
			break;
		}
	}
}