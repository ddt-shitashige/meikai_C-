/**
 * @file Exerises3-13.cpp
 * @brief	身長と標準体重の対応表を表示するプログラムを作成せよ。
			表示する身長の範囲(開始値/終了値/増分)は整数値として読み込むこと。
 * @author shitashige
 * @date 20200116
 */

#include <iostream>
/**
 * @fn
 * メイン関数
 * @brief 標準体重を求め、表示する関数
 * @return 0:正常終了
 */
int main() {

	int minHeight;		// 最低身長
	int maxHeight;		// 最大身長
	int everyHeight;	// 高さ毎の値

	/* 100cm以下だと、値がおかしくなるので、弾く */
	do {
		/* 最低値の入力を促すメッセージ表示 */
		std::cout << "何cmから:";

		/* 最低身長を入力 */
		std::cin >> minHeight;
		/* 100cm以下ならそれを伝える文を出力 */
		if (minHeight < 100) {
			/* 文言出力 */
			std::cout << "100以上を入力してください。\n";
		}
	} while (minHeight < 100);

	/* 最大身長が最低身長より小さいともう一度やり直させる。 */
	do {
		/* 最大値の入力を促すメッセージ表示 */
		std::cout << "何cmまで:";

		/* 最大身長を入力 */
		std::cin >> maxHeight;

		/* 最低身長以下ならそれを伝える文を出力 */
		if (minHeight <= minHeight) {
			/* 文言出力 */
			std::cout << "最低値以上を入力してください。\n";
		}

	} while (maxHeight < minHeight);
	/* 何cm毎かの入力を促すメッセージ表示 */
	std::cout << "何cmごと:";

	/* 何cm毎かを入力 */
	std::cin >> everyHeight;

	/* ヘッダー部を出力 */
	std::cout << "身長  標準体重\n";

	/* 最低身長から最大身長までの間、増分値をプラスしていき、表示する */
	for (int i = minHeight; i <= maxHeight; i += everyHeight) {

		std::cout << i << "   " << (i - 100) * 0.9 << "\n";
	}
	return 0;
}