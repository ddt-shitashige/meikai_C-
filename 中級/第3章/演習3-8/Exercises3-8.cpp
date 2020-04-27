/**
 * @file Exerises3-6.cpp
 * @brief 演習3-6	bserch関数を用いて、文字列の配列から探索を行うプログラムを作成せよ。2次元配列で実現された文字列の配列からの探索を行うプログラムと、文字列の先頭文字へのポインタの配列で実現された文字列の配列からの探索を行うプログラムの2つを作ること。
 * @author shitashige
 * @date 20200427
 */

#include<iostream>
#include<cstdlib>

 /*
  *@fn
  * @brief 比較
  * @param string1 文字列1
  * @param string2 文字列2
  * @return 結果
  */
int Comper(const void* string1, const void* string2) {


	/* 文字列2が大きかった場合 */
	if (*(char*)string1 < *(char*)string2) {
		return -1;
	}
	/* 文字列1が大きかった場合 */
	else if (*(char*)string1 > *(char*)string2) {
		return 1;
	}
	else {
		return 0;
	}
}

/**
 * @fn
 * @brief メイン関数
 * @param key 探索オブジェクト
 * @param base 先頭要素
 * @param nmemb 要素数
 * @param size 大きさ
 * @param conpar 比較関数
  * @return 0:正常終了
 */
void* seqsearch(const void* key, const void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*)) {
	const char* x = reinterpret_cast<const char*>(base);	// 格納ｘ定義
	/* 大きさループ */
	for(size_t i = 0; i < nmemb; i++) {
		/* 探索が成功した場合の処理 */
		if (!compar(key, reinterpret_cast<const void*>(&x[i * size]))) {
			return const_cast<void*>(reinterpret_cast<const void*>(&x[i * size]));
		}
	}
	return NULL;
}

/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	char string[] = "abcdefghijklmnopqrstuvwxyz";	// 文字列配列1
	char search[] = "g";	// 探索文字列


	char* result;	// 結果

	result = (char*)seqsearch(search,string, 27, 1, Comper);

	/* 結果がNULLで無かった場合 */
	if (result != NULL) {
		/* メッセージ出力 */
		std::cout << result - string << "が一致(ポインタ配列)\n";
	}
	else {
		/* メッセージ出力 */
		std::cout << "見つからなかった";
	}

}
	
	
	
	
	
	
	

	
	
	
	