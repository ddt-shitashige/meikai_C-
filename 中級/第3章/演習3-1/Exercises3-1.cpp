/**
 * @file Exerises3-1.cpp
 * @brief 演習3-1 List3-2は「良」の識別表示と「優または可」の識別表示を行うプログラムであった。これら以外の条件でも識別表示するように変更したプログラムを作成せよ。
 * @author shitashige
 * @date 20020424
 */



#include <ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

/* 成績は良[B:70～79]か？*/
bool isB(int x) {
	return x >= 70 && x <= 79;
}

/* 成績は優[A:80～100]または可[C:60～69]か？ */
bool isAorC(int x) {
	return(x >= 80 && x <= 100 || (x >= 60 && x <= 69));
}

/*
 *@fn
 * @brief 60点以下かチェックする関数
 * @param x 点数
 * @return 結果
 */
bool isNg(int x) {
	return(x < 60);
}


/* 関数fit(x)の返却値が真である配列aの要素の識別表示 */
void put_list(const int a[], int n, bool(*fit)(int)) {

	/* 要素分ループ */
	for (int i = 0; i < n; i++) {
		/* 引数によるチェック */
		if ((*fit)(a[i])) {
			/* メッセージ出力 */
			cout << "★";
		}
		else {
			/* メッセージ出力 */
			cout << "　";
		}
		/* メッセージ出力 */
		cout << "a[" << i << "] = " << a[i] << '\n';
	}
}

/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	int a[10];	// 点数
	int n = sizeof(a) / sizeof(a[0]);	// 要素数

	srand(time(NULL));	// 乱数の種を初期化
	
	/* 要素数ループ */
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 101;	// 0～100の乱数を代入
	}

	/* メッセージ出力 */
	cout << "良----------\n";
	put_list(a, n, isB);	// 良[B]に★を付けて一覧表示
	/* メッセージ出力 */
	cout << "\n優または可--\n";
	put_list(a, n, isAorC);	// 優[A]または可[C]に★を付けて一覧表示

	/* メッセージ出力 */
	cout << "\n不可-------\n";
	/* 関数呼び出し */
	put_list(a, n, isNg);


}