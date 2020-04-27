/**
 * @file Exerises3-10.cpp
 * @brief 演習3-10	List3-16の関数binsearchxを利用するプログラムを作成せよ。
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
	else if (*(char*)string1 > * (char*)string2) {
		return 1;
	}
	else {
		return 0;
	}
}

/**
 * @fn
 * @brief 汎用2分探索関数
 * @param key 探索オブジェクト
 * @param base 先頭要素
 * @param nmemb 要素数
 * @param size 大きさ
 * @param conpar 比較関数
  * @return 0:正常終了
 */
void* binsearchx(const void* key, const void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*)) {

	/* 大きさが0以上の場合 */
	if (nmemb > 0) {
		const char* x = reinterpret_cast<const char*>(base);	// 格納X定義
		size_t pl = 0;	// 探索範囲先頭の添え字
		size_t pr = nmemb - 1;	// 探索範囲末尾の添え字
		size_t pc;	// 探索範囲中央の添え字

		/* 無限ループ */
		while (1) {
			int comp = compar(key, reinterpret_cast<const void*>(&x[(pc = (pl + pr) / 2) * size]));	// 探索結果
			/* 探索成功時 */
			if (comp == 0) {
				/* 探索文字列と等しい先頭の要素を探す */
				for (; pc > pl; pc--) {
					/* 等しい値があったらループから抜ける */
					if (compar(key, reinterpret_cast<const void*>(&x[pc = (pl + pr) / 2 * size]))) {
						break;
					}
					return const_cast<void*>(reinterpret_cast<const void*>(&x[pc * size]));
				}
			}
			/* 探索範囲終了時 */
			else if (pl == pr) {
				break;
			}
			/* 探索範囲後半に絞り込む */
			else if (comp > 0) {
				pl = pc + 1;
			}
			/* 探索範囲前半に絞り込む */
			else {
				pr = pc - 1;
			}
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

	result = (char*)binsearchx(search, string, 27, 1, Comper);

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