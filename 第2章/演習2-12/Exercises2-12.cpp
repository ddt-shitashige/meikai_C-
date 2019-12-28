/*
 * @file  Exerises2-12.cpp
 * @brief 演習2-12	List 2-13と同様に、二つの整数値を読み込んで、小さいほうの値を大きい方の値の両方を表示するプログラムを作成せよ。
					ただし、二つの整数値が等しい場合は右に示すように『二つの値は同じです。』と表示する事。
 * @author shitashige
 * @date 20191228
 */
 #include <iostream>

/**
 * @fn
 * メイン関数
 * @brief 最小値と最大値を求めるメソッド。
 * @return 0:正常終了
 */
int main() {
	int inputNumberA = 0;		// 入力された数字A
	int inputNumberB = 0;		// 入力された数字B
	
	/* ユーザーに入力を促すメッセージ */
	std::cout << "整数a";

	/* 文字入力 */
	std::cin >> inputNumberA;

	/* ユーザーに入力を促すメッセージ */
	std::cout << "整数b";

	/* 文字入力 */
	std::cin >> inputNumberB;
	
	/* AとBが同じ値だった時の処理 */
	if (inputNumberA == inputNumberB) {
		/* 結果出力 */
		std::cout << "二つの値は同じです。";
		/* これ以下の処理は行う必要がないのでリターン */
		return 0;
	}

	/* 小さい値を条件演算子で求めながら出力 */
	std::cout << "小さい方の値は" << (inputNumberA < inputNumberB ? inputNumberA : inputNumberB) <<"です。\n";
	/* 大きい値を条件演算子で求めながら出力 */
	std::cout << "大きい方の値は" << (inputNumberA < inputNumberB ? inputNumberB : inputNumberA) << "です。\n";

	return 0;
}