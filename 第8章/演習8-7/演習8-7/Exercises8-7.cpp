/**
 * @file Exerises8-7.cpp
 * @brief 演習8-7	文字列sに含まれる数字文字'0', '1', … , '9'の個数をカウントして、各数字文字の個数をc[0], c[1], … , c[9] に格納する関数count_digitsを作成せよ。たとえば、文字列sが"W140S500L88"であれば、c[0]に3を、c[1], c[4], c[5]に1を、c[8]に2を格納し、それ以外の要素には0を格納する。
 *					void count_digits(const char *s, int c[])
 * @author shitashige
 * @date 20200325
 */


#include <iostream>



/**
 * @fn
 * count_digits
 * @brief 数値のカウントを行う
 * @param s 文字列
 * @param a カウント結果
 * @return
 */
void count_digits(const char *s, int c[]) {
	int count = 0;	// カウンタ
	/* null文字が来るまでループ */
	for (int i = 0; i < std::strlen(s); i++) {
		/* 文字が0以上9以下だった場合の処理 */
		if (s[i]>='0'&&s[i]<='9' ) {
			/* cの中の数値をカウントアップ(0で引くのは文字コードの関係) */
			c[s[i]-'0']++;
		}
	}
	return;
}


/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	const int stringLen = 30;	// 文字長さ

	int countArray[10]={0};	// カウントの構造体 

	char inputString[stringLen];	// 入力文字

	/* メッセージ表示 */
	std::cout << "文字列を入力してください。";

	/* 文字列入力 */
	std::cin.getline(inputString, stringLen);

	/* カウント関数呼び出し */
	count_digits(inputString, countArray);
	
	/* countArrayの配列の要素数分ループする */
	for (int i = 0; i < sizeof(countArray) / sizeof(int); i++) {
		/* 結果出力 */
		std::cout<<"c["<<i<<"]"<<"="<<countArray[i]<<"\n";
	}


}