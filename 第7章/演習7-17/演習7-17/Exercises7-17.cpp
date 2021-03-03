
/**
 * @file Exerises7-17.cpp
 * @brief 演習7-17	ポインタpが指すオブジェクトの先頭nバイトにvを代入する関数mem_setを作成せよ。
 * @author shitashige
 * @date 20200324
 */

#include <iostream>
#include <iomanip>



/**
 * @fn
 * main
 * @brief 先頭に文字列を格納する
 * @param p 受け取った配列
 * @param n 要素数
 * @param v 挿入する文字列
 * @return
 */
void mem_set(void *p, int n, unsigned char v) {

	char *shadowP = NULL;	// pは直接変更できないので、仮のP

	/* 仮PとPの指し示すポインタを同じにする */
	shadowP = (char *)p;

	/* vの内容を格納するループ */
	for (int i = 0; i < n; i++) {
		shadowP[i] = v;
	}

}

/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	char *charArray = NULL;	// char型のポインタ確保

	int charElement;	// char型の要素数

	/* メッセージ表示 */
	std::cout << "配列の確保数;";
	/* 要素数入力 */
	std::cin >> charElement;

	/* 例外処理確認 */
	try {
		/* メモリ確保 */
		charArray = new char[charElement]();
	}
	/* メモリ確保失敗時 */
	catch (std::bad_alloc) {
		/* メッセージ表示 */
		std::cout << "エラーが発生しました。";
	}

	/* Nullチェック */
	if (charArray == NULL) {
		/* メッセージ表示 */
		std::cout << "メモリが確保できませんでした。";

	}

	int interruptionNumber;	// 割り込み文字数


	/* メッセージ表示 */
	std::cout << "割り込み文字数;";
	/* 要素数入力 */
	std::cin >> interruptionNumber;



	char inputString;	// 入力する文字

	/* メッセージ表示 */
	std::cout << "文字を入力してください。";
	/* 文字入力 */
	std::cin >>inputString;

	/* 文字代入関数呼び出し */
	mem_set((void*)charArray, interruptionNumber,inputString);


	for (int i = 0; i < charElement; i++) {
		std::cout<<charArray[i];
	}


	/* メモリ開放 */
	delete[] charArray;


}