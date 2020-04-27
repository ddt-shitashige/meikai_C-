
#include<iostream>

namespace {
	/**
	 * @fn
	 * @brief 値入れ替え関数
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
	/**
	 * @fn
	 * @brief 値入れ替え関数
	 * @param x 入れ替えるポインタ
	 * @param y 入れ替えるポインタ
	 * @param element1 要素数1
	 * @param element2 要素数2
	 * @param data 返却用データ
	 * @return 0:正常終了
	 */
	void Memcatch(void* x, void* y, size_t element1, size_t element2, unsigned char *data) {
		unsigned char* a = reinterpret_cast<unsigned char*>(x);	// 型変換したポインタa
		unsigned char* b = reinterpret_cast<unsigned char*>(y);	// 型変換したポインタb
		int leftCount = 0;	// 左カウント
		int rightCount = 0;	// 右カウント

		/* カウントが要素数になるまでループ */
		for (int i=0; leftCount < element1 || rightCount || element2;i++) {
			/* 右と左を比較する */
			if (a[leftCount] > b[rightCount]) {
				/* 小さい値を格納 */
				data[i] = b[rightCount];
				/* インクリメント */
				rightCount++;
			}
			else {
				/* 小さい値を格納 */
				data[i] = a[leftCount];
				/* インクリメント */
				leftCount++;
			}
		}
	}

}

/*
 *@fn
 * @brief 比較
 * @param string1 文字列1
 * @param string2 文字列2
 * @return 結果
 */
int Compar(const void* string1, const void* string2) {


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

static bool callflg = false;

/**
 * @fn
 * @brief マージソート
 * @param base 対象物
 * @param nmemb 要素数
 * @param size 大きさ
 * @param conpar 比較関数
 * @return 0:正常終了
 */
void margesort(void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*)) {

	int result = 0;	// 結果
	int flontElement = 0;	// 前の要素数
	const char* target = reinterpret_cast<const char*>(base);	//対象物
	/* 要素が1だった場合、何もしない */
	if (nmemb == 1) {
		flontElement = 1;	// 前の要素数を1にする。
	}
	/* 要素が2だった場合、 */
	else if (nmemb == 2) {
		/* 値を比較 */
		result = Compar(target, target + size);
		/* 左の数値の方が大きかった場合の処理 */
		if (result == 1) {
			/* 値を入れ替える */
			memswap(const_cast<void*>(reinterpret_cast<const void*>(&target[0])),
				const_cast<void*>(reinterpret_cast<const void*>(&target[size])), size);
		}
	}
	else {
		/* 後半部でなかった場合 */
		if (callflg == false) {
			/* 呼び出しフラグをTRUEにする */
			callflg = true;
			/*  要素を分割する*/
			margesort(const_cast<void*>(reinterpret_cast<const void*>(target)), nmemb / 2, size, Compar);
		}
		else {
			/*  要素を分割する*/
			margesort(const_cast<void*>(reinterpret_cast<const void*>(&target[nmemb/2])), nmemb / 2, size, Compar);

		}
	}

	/*
	 * 反対側の処理を行なう
	 */
	int halfNmemb = nmemb / 2;	// 半分の要素数
	int leftUpper = 0;	// 入れ替えたかの確認(左
	int rightUpper = 0;	// 入れ替えたかの確認(右)



	 /* 要素が1だった場合の処理*/
	if (nmemb == 2 && flontElement == 1) {
		/* 値並べ替えループ */
		for (int i = 0; i < 2; i++) {
			/* 前と後ろの値を比較 */
			result = Compar(target + (i * size), target + (halfNmemb + 2) * size);
			/* 左の数値の方が大きかった場合の処理 */
			if (result == 1) {
				/* 値を入れ替える */
				memswap(const_cast<void*>(reinterpret_cast<const void*>(&target[halfNmemb * size])),
					const_cast<void*>(reinterpret_cast<const void*>(&target[(halfNmemb * size + size) * size])), size);
			}
		}
	}
	/* 右要素が2だった場合、 */
	else if (nmemb == 1 || nmemb == 2) {
		/* 値を比較 */
		result = Compar(target, target + (nmemb * size));
		/* 左の数値の方が大きかった場合の処理 */
		if (result == 1) {
			/* 値を入れ替える */
			memswap(const_cast<void*>(reinterpret_cast<const void*>(&target[nmemb*size])),
				const_cast<void*>(reinterpret_cast<const void*>(&target[nmemb * size+1])), size);
			/* 入れ替えた数値(左)をインクリメント */
		}
		/* 値並べ替えループ */
		for (int i = 0; i < 2; i++) {

			/* 呼び出しフラグがONならループ脱出 */
			if (callflg == true) {
				break;
			}
			/* 前と後ろの値を比較 */
			result = Compar(target + (leftUpper) * size, target + (nmemb + rightUpper) * size);
			/* 左の数値の方が大きかった場合の処理 */
			if (result == 1) {
				/* 比較が初回の場合2桁入れ替える */
				if (leftUpper == 0 && rightUpper == 0) {
					/* 値を入れ替える */
					memswap(const_cast<void*>(reinterpret_cast<const void*>(&target[0])),
						const_cast<void*>(reinterpret_cast<const void*>(&target[nmemb * size])), size);
					/* 値を入れ替える */
					memswap(const_cast<void*>(reinterpret_cast<const void*>(&target[size])),
						const_cast<void*>(reinterpret_cast<const void*>(&target[(nmemb + 1) * size])), size);

				}
				else {
					/* 値を入れ替える */
					memswap(const_cast<void*>(reinterpret_cast<const void*>(&target[(+leftUpper) * size])),
						const_cast<void*>(reinterpret_cast<const void*>(&target[(nmemb + rightUpper) * size])), size);
				}
				/* 1になったら、右をインクリメント */
				leftUpper =1;
			}
			else {
				/* 1になったら、左をインクリメント */
				rightUpper = 1;

				/* 先頭要素が1つだった場合、ブレイク */
				if (flontElement == 1) {
					break;
				}
			}
		}
	}
	else {
		/* 呼び出しフラグをONにする */
		callflg = true;
		/*  要素を分割する*/
		margesort(const_cast<void*>(reinterpret_cast<const void*>(&target[(nmemb * size)])), nmemb, size, Compar);
	}

}

/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	//char string[] = "zyxwvutsrqponmlkjihgfedcba";	// 文字列配列1

	char string[] = "65318724";

	margesort(string, 8, 1, Compar);

	/* メッセージ出力ループ */
	for (int i = 0; i < 8; i++) {
		/* メッセージ出力 */
		std::cout << string[i];
	}

}