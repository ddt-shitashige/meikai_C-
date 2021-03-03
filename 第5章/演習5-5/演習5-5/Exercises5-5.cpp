/**
 * @file Exerises5-5.cpp
 * @brief 演習5-5	異なる要素が同じ値とならないように演習5-3のプログラムを改変したプログラムを作成せよ。例えば、{1,3,5,6,1,2}とならないようにすること。
 * @author shitashige
 * @date 20200303
 */


#include <iostream>
#include <ctime>

 /**
  * @fn
  * メイン関数
  * @brief 配列にランダム数値を入れる関数
  * @return 0:正常終了
  */
int main() {

	const int element = 6;	// 要素数
	int rundomNumber = 0;	// ランダム数値
	int number[element] = { 0 };	// 数字の配列
	bool sameFlg = false;			// 配列の中に同じ数値が入っているかの判定フラグ

	/* 初期シードを決定 */
	srand((unsigned int)time(NULL));


	/* 要素数分だけループ */
	for (int i = 0; i < element; i++) {
		/* 乱数から10のあまりを求める事により、値が0～9の間になる。そして+1する為、1～10になる */
		rundomNumber = rand() % 10 + 1;

		/* 配列に格納されている数値とランダム数値を比較する為のループ */
		for (int j = 0; j < i; j++) {
			/* もし、一時保存数値とランダム数値が同じなら、ループの最初に戻る */
			if (number[j] == rundomNumber) {
				/* iをデクリメント */
				i--;
				/* 判定フラグをONにする */
				sameFlg = true;
				/* ループから抜ける */
				break;
			}
		}
		/* 判定フラグがONだった場合の処理 */
		if (sameFlg) {
			/* 判定フラグをOFFにする */
			sameFlg = false;
			/* ループをやり直す */
			continue;
		}

		/* 配列にランダム数値を格納 */
		number[i] = rundomNumber;

		/* 配列の数値出力 */
		std::cout << number[i] << "\n";
	}

	return 0;
}