/**
 * @file Exerises2-5.cpp
 * @brief 演習2-5 符号なし整数xの全ビットを1と0で荒らした文字列（例えばunsigned型が16ビットで値が43690であればナル文字を含めた17文字の文字列"10101010101010"また、unsigned型が32ビットであればナル文字を含めた33文字の文字列を作成し、その文字列の先頭文字を返却する関数を作成せよ。
 * @author shitashige
 * @date 20020421
 */

#include <iostream>

using namespace std;

/* 整数xの中の1であるビット数を求める */
int count_bits(unsigned x) {
	int bits = 0;
	while (x) {
		if (x& 1U)bits++;
		x >>= 1;
	}
	return bits;
}

/* int型 unsigned型のビット数を求める */
int int_bits() {
	return count_bits(~0U);
}

/* unsinged型のビット構成を表示 */
void print_bits(unsigned x) {
	for (int i = int_bits() - 1; i >= 0; i--)
		cout << ((x >> i) & 1U ? '1' : '0');
}

/**
 * @fn
 * @brief 先頭文字を返却する関数
 * @param x 文字列
 * @return 回答
 */
const char* bits_of(unsigned x) {

	char *returnString = {};	// 返却文字列

	/* メモリ確保 */
	returnString = new char[1];

	/* 先頭の値を最下値に移動させる */
	x >>= sizeof(unsigned);

	/* 最下値によって処理を分岐 */
	if (x == 0) {
		/* 0格納 */
		returnString[0] = '0';
		return returnString;
	}
	else {
		/* 1格納 */
		returnString[0] = '1';
		return returnString;
	}
}



int main() {
	unsigned a, b;
	cout << "非負の整数2つ入力せよ\n";
	cout << "a:"; cin >> a;
	cout << "b:"; cin >> b;

	cout << "a    ="; print_bits(a); cout << "\n";
	cout << "b    ="; print_bits(b); cout << "\n";
	cout << "a&b  ="; print_bits(a&b); cout << "\n";	// 論理和
	cout << "a|b  ="; print_bits(a|b); cout << "\n";	// 論理積
	cout << "a^b  ="; print_bits(a^b); cout << "\n";	// 論理差
	cout << "-a	="; print_bits(~a); cout << "\n";	// 1の歩数
	cout << "-b	="; print_bits(~b); cout << "\n";	// 1の歩数


	const char *answerA;	// Aの結果
	const char *answerB;	// Bの結果
	answerA = bits_of(a);	//	結果を静的記憶期間を持つ配列に格納
	answerB = bits_of(b);	//	結果を静的記憶期間を持つ配列に格納
	/* 結果出力 */
	cout << "aの最上位：" << answerA[0] << "\n";
	/* 結果出力 */
	cout << "bの最上位：" << answerB[0] << "\n";

	/* メモリ開放 */
	delete[] answerA;
	/* メモリ開放 */
	delete[] answerB;
}