
/**
 * @file Exerises3-22.cpp
 * @brief	n弾の下向きピラミッドを表示する関数を作成せよ（右図は4段の列）。第i行目にはi%10によって得られる数字を表示する事。
 * @author shitashige
 * @date 20200127
 */


#include "iostream"

/**
 * @fn
 * メイン関数
 * @brief 列数の逆ピラミッドを作成する関数
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
		/* 入力数の行数を列から-1にする事によって、期待値に沿った形となる */
		for (int j = 1; j <= inputCount * 2 - i; j++) {
			/* 左側の空白行は列数-1に比例しているので、列数分空白を挟む */
			if (i > j) {
				/* 文字出力 */
				std::cout << " ";
			}
			else {
				/* 文字出力 */
				std::cout << i % 10;
			}
		}
		/* 改行 */
		std::cout << "\n";
	}
	return 0;
}