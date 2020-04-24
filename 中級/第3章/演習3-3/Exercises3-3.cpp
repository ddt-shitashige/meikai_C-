/**
 * @file Exerises3-3.cpp
 * @brief 演習3-3 指定された条件を満たす要素を配列から探索する関数search_if_allを作成せよ。
 * 先頭側の三つの引数は前問と同様である。
 * 指定された条件を満たす全要素の添え字を格納する為の配列を生成し、その配列の先頭要素へポインタを第4引数idxの刺すポインタに格納する事。なお、関数が返却するのは、格納した要素数（条件を満たした要素数）である。（例えば、配列{1,3,6,7,8}から偶数である要素を探索した場合は、6と8の添え字である。{2,4}を格納する配列を生成して、2を返却する）なお、条件を満たす要素が存在しない場合はidxのさすポインタにNULLを代入すると共に、0を返却する事。
 * @author shitashige
 * @date 20020424
 */


#include <ctime>
#include<cstdlib>
#include<iostream>


 /*
  *@fn
  * @brief 15以上30未満判定関数
  * @param number 数値
  * @return 結果
  */
bool fifteenToThirty(int number) {
	return number >= 15 && number < 30;
}

/*
 *@fn
 * @brief 5で割り切れる
 * @param number 数値
 * @return 結果
 */
bool divisibleFive(int number) {
	return !(number % 5);
}


/*
 *@fn
 * @brief 判定する関数
 * @param a 要素
 * @param n 要素数
 * @param cond 判定
 * @param idx 要素を格納した配列
 * @return 結果
 */
int search_if(const int a[], int n, bool cond(int n), int** idx) {
	int count = 0;	// カウント
	/* 要素数ループ */
	for (int i = 0; i < n; i++) {
		/* 判定 */
		if ((cond)(a[i])) {
			/* 数値格納 */
			(*idx)[count] = a[i];
			/* カウントアップ */
			count++;
		}
	}
	/* カウントが0だった場合の処理 */
	if (count == 0) {
		idx = NULL;
		return -1;
	}
	return count;
}


/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	int point[10];	// 点数
	int element = sizeof(point) / sizeof(point[0]);	// 要素数

	srand(time(NULL));	// 乱数の種を初期化

	/* 要素数ループ */
	for (int i = 0; i < element; i++) {
		point[i] = rand() % 101;	// 0～100の乱数を代入
	}

	/* 要素分ループ */
	for (int i = 0; i < element; i++) {
		/* メッセージ出力 */
		std::cout << "a[" << i << "] = " << point[i] << '\n';
	}

	/* 返却点数1の中身を定義 */
	int* firstbox = nullptr;
	/* メモリ確保 */
	firstbox = new int[10];

	/* 返却点数2の中身を定義 */
	int* secondbox = nullptr;
	/* メモリ確保 */
	secondbox = new int[10];

	int count = search_if(point, element, fifteenToThirty, &firstbox);	// カウント数

	/* メッセージ出力 */
	std::cout << "15以上30以下：\n";
	/* 要素数分ループ */
	for (int i = 0; i < count; i++) {
		/* メッセージ出力 */
		std::cout << firstbox[i] << '\n';
	}
	/* カウント計算 */
	count = search_if(point, element, divisibleFive, &secondbox);
	/* メッセージ出力 */
	std::cout << "5で割り切れる：\n";
	/* 要素数分ループ */
	for (int i = 0; i < count; i++) {
		/* メッセージ出力 */
		std::cout << secondbox[i] << '\n';
	}
}






















