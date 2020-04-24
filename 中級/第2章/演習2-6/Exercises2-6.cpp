/**
 * @file Exerises2-6.cpp
 * @brief 演習2-6 ここで学習した3つの型変換(同一ビットへの型変換・より長いビットへの型変換・より短いビットへの型変換)を確認できるぷろぐらむを作成せよ。変数前後の値とビット構成を表示する事。
 * @author shitashige
 * @date 20020421
 */

#include <iostream>

using namespace std;

/**
 * @fn
 * @brief ビット幅を数える関数
 * @param x 数値
 * @return 回答
 */
int count_bits(unsigned x) {
	int bits = 0;	// ビット幅
	/* 0が来るまでループ */
	while (x) {
		/* 1だったらビット幅のカウントアップ */
		if (x & 1U)bits++;
		/* 右に桁をずらす */
		x >>= 1;
	}
	return bits;
}

/**
 * @fn
 * @brief ビット幅を返却する関数
 * @return ビット幅
 */
int int_bits() {
	return count_bits(~0U);
}

/**
 * @fn
 * @brief char型のビット値を表示する関数
 * @param x 数値
 */
void charPrintBits(char x) {
	/* ビット数分ループする */
	for (int i = sizeof(char) * 8 - 1; i >= 0; i--) {
		/* 結果を出力 */
		cout << ((x >> i) & 1U ? '1' : '0');
	}
}


/**
 * @fn
 * @brief short型のビット値を表示する関数
 * @param x 数値
 */
void shortPrintBits(short x) {
	/* ビット数分ループする */
	for (int i = sizeof(short) * 8 - 1; i >= 0; i--) {
		/* 結果を出力 */
		cout << ((x >> i) & 1U ? '1' : '0');
	}
}

/**
 * @fn
 * @brief long型のビット値を表示する関数
 * @param x 数値
 */
void longPrintBits(long x) {
	/* ビット数分ループする */
	for (int i = sizeof(long) * 8 - 1; i >= 0; i--) {
		/* 結果を出力 */
		cout << ((x >> i) & 1U ? '1' : '0');
	}
}


/**
 * @fn
 * @brief メイン関数
 * @return 
 */
int main() {
	short number;	// 数値
	/* メッセージ出力 */
	cout << "数値入力\n";
	/* 数値入力 */
	cin >> number;
	/* 結果出力 */
	cout << "short:"; shortPrintBits(number); cout << "\n";
	/* 結果出力 */
	cout << "char:"; charPrintBits(static_cast<char>(number)); cout << "\n";
	/* 結果出力 */
	cout << "long:"; longPrintBits(static_cast<long>(number)); cout << "\n";

}