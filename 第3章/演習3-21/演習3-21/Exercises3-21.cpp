/**
 * @file Exerises3-21.cpp
 * @brief	n弾のピラミッドを表示するプログラムを作成せよ(右図は4段の例)
			第i行目には(i-1)*2+1個の*記号を表示する事
			(最終行である第n行目には(n-1)*2+1個の*記号が表示することになる）
 * @author shitashige
 * @date 20200123
 */


#include "iostream"

/**
 * @fn
 * メイン関数
 * @brief *のピラミッドを表示する関数
 * @return 0:正常終了
 */

int main() {

	int inputCount;		// 入力カウント

	/* 文字出力 */
	std::cout << "数値を入力してください。";
	/* 数値入力 */
	std::cin >> inputCount;

	/* 入力数の列分ループする */
	for (int i = 1; i <= inputCount; i++) {
		/* 入力数の行分+現在の列数分ループする(こうすることでピラミッドの右側をカバーできる) */
		for (int j = 1; j < inputCount + i; j++) {
			/* 入力カウントより、-1することでピラミッドの左側の始点を決定する */
			if (inputCount - i < j) {
				/* 文字出力 */
				std::cout << "*";
			}
			else {
				/* 文字出力 */
				std::cout << " ";
			}
		}
		/* 改行 */
		std::cout << "\n";
	}

}