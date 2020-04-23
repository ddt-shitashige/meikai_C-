/**
 * @file Exerises2-4.cpp
 * @brief 演習2-4 符号なし整数xの第posビットから第pos＋n-1ビットまでのn個のビットを1にした値を返す関数set_n,0にした値を返す関数reset_n,反転した値を返す関数inverse_nを作成せよ。
 * @author shitashige
 * @date 20020423
 */



#include<iostream>

 /**
  * @fn
  * @brief 符号なし整数xの第posビットから第pos＋n-1ビットまでのn個のビットを1にした値を返す関数
  * @param x 整数
  * @param pos 箇所
  * @param n 回転数
  * @return 回答
  */
unsigned set_n(unsigned x, int pos, int n) {

	unsigned number = 0;	// 数値

	/* 1の値をn個作成するループ */
	for (int i = 1; i < n; i++) {
		/* 最下層bitを1 */
		number = number| 1;
		/* 左に1ずらす */
		number = number << 1;
	}

	/* pos分ずらすループ */
	for (int i = 1; i < pos; i++) {
		/* 左に1ずらす */
		number = number << 1;
	}

	/* 計算したものをリターン */
	return x | number;
	   }


/**
 * @fn
 * @brief 符号なし整数xの第posビットから第pos＋n-1ビットまでのn個のビットを0にした値を返す関数
 * @param x 整数
 * @param pos 箇所
 * @param n 回転数
 * @return 回答
 */
unsigned reset_n(unsigned x, int pos, int n) {

	unsigned number = 0;	// 数値

	/* 1の値をn個作成するループ */
	for (int i = 1; i < n; i++) {
		/* 最下層bitを1 */
		number = number | 1;
		/* 左に1ずらす */
		number = number << 1;
	}

	/* pos分ずらすループ */
	for (int i = 1; i < pos; i++) {
		/* 左に1ずらす */
		number = number << 1;
	}
	/* 値を反転する */
	number = ~number;

	/* 計算したものをリターン */
	return x & number;
}


/*
 *@fn
 * @brief 符号なし整数xの第posビットから第pos＋n-1ビットまでのn個のビットに反転した値を返す関数
 * @param x 整数
 * @param pos 箇所
 * @param n 回転数
 * @return 回答
 */
unsigned inverse_n(unsigned x, int pos, int n) {
	unsigned number = 0;	// 数値

	/* 1の値をn個作成するループ */
	for (int i = 1; i < n; i++) {
		/* 最下層bitを1 */
		number = number | 1;
		/* 左に1ずらす */
		number = number << 1;
	}

	/* pos分ずらすループ */
	for (int i = 1; i < pos; i++) {
		/* 左に1ずらす */
		number = number << 1;
	}

	/* 計算したものをリターン */
	return x ^ number;
}
/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {

	unsigned number;	// 数値
	unsigned pos;	// 箇所
	unsigned count;	// カウント


	/* メッセージ出力 */
	std::cout << "数値と箇所とカウントを入力してください\n";

	/* 数値入力 */
	std::cin >> number >> pos >> count;

	/* 結果出力 */
	std::cout << "結果(set):" << set_n(number, pos,count) << "\n結果(reset):" << reset_n(number, pos,count) << "\n結果(inverse):" << inverse_n(number, pos,count);

}