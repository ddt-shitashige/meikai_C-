/**
 * @file Exerises3-11.cpp
 * @brief 演習3-11	List3-17の関数quicksortを利用するプログラムを作成せよ。
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


namespace {
	/**
	 * @fn
	 * @brief 汎用2分探索関数
	 * @param key 探索オブジェクト
	 * @param x 入れ替えるポインタ
	 * @param y 入れ替えるポインタ
	 * @param n 大きさ
	 * @return 0:正常終了
	 */
	void memswap(void* x, void* y, size_t n) {
		unsigned char* a = reinterpret_cast<unsigned char*>(x);	// 型変換したポインタa
		unsigned char* b = reinterpret_cast<unsigned char*>(y);	// 型変換したポインタb
		/* 大きさが0になるまでループ */
		for (; n--; a++, b++) {
			/* 一時保存のcにaを入れる */
			unsigned char c = *a;
			/* 値入れ変え */
			*a = *b;
			/* 値入れ変え */
			*b = c;
		}
	}
}
/**
 * @fn
 * @brief 汎用クイックソート
 * @param key 探索オブジェクト
 * @param nmemb 要素数
 * @param size 大きさ
 * @param conpar 比較関数
 * @return 0:正常終了
 */
void quicksort(void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*)) {

	/* 大きさが0以上の場合 */
	if (nmemb > 0) {
		const char* v = reinterpret_cast<const char*>(base);	// 先頭要素のポインタv
		size_t pl = 0;	// 探索範囲先頭の添え字
		size_t pr = nmemb - 1;	// 探索範囲末尾の添え字
		size_t pv = nmemb;	// 枢軸
		size_t pt = (pl + pr) / 2;	// 枢軸の更新値
		const char* x = nullptr;	// 枢軸へのポインタ

		do {
			/* 枢軸が更新されていた場合、枢軸へのポインタを更新 */
			if (pv != pt)x = &v[(pv = pt) * size];
			/* 値を比較して大きければ添え字を＋1 */
			while (compar(reinterpret_cast<const void*>(&v[pl * size]), x) < 0) {
				pl++;
			}
			/* 値を比較して小さければ添え字を-1 */
			while (compar(reinterpret_cast<const void*>(&v[pr * size]), x) > 0) {
				pr--;
			}
			/* 右カーソルが左カーソルより大きくなってしまった場合の処理 */
			if (pl <= pr) {
				/* 左カーソルと枢軸が同じなら、右カーソルを枢軸に。右カーソルと枢軸が同じなら、左カーソルを枢軸に。そうでなければ現在地を格納する */
				pt = (pl == pv) ? pr : (pr == pv) ? pl : pv;
				/* 左カーソルと右カーソルの値を入れ替える */
				memswap(const_cast<void*>(reinterpret_cast<const void*>(&v[pl * size])),
					const_cast<void*>(reinterpret_cast<const void*>(&v[pr * size])), size);
				/* 左カーソルインクリメント */
				pl++;

				/* 右カーソルが0出なければ */
				if (pr == 0) {
					/* クイックライト実行 */
					goto QuickRight;
				}
				/* 右カーソルデクリメント */
				pr--;
			}
		} while (pl <= pr);

		/* 右カーソルが0だった場合 */
		if (0 < pr) {
			/* クイックソートを行う */
			quicksort(const_cast<void*>(reinterpret_cast<const void*>(&v[0])), pr + 1, size, compar);
		}

	QuickRight:
		if (pl < nmemb - 1) {
			/* クイックソートを行う */
			quicksort(const_cast<void*>(reinterpret_cast<const void*>(&v[pl * size])), nmemb - pl, size, compar);
		}
	}
}

/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	char string[] = "zyxwvutsrqponmlkjihgfedcba";	// 文字列配列1

	quicksort(string, 27, 1, Comper);

	/* メッセージ出力ループ */
	for (int i = 0; i < 27; i++) {
		/* メッセージ出力 */
		std::cout << string[i];
	}

}