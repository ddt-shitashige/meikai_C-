
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


	char *answer=NULL;	// 答え　

	/* メモリ確保ループ */
	for (int i = 0; i < nmemb * size; i++) {
		/* メモリ確保 */
		answer=new char[nmemb * size];
	}
	const char* target = reinterpret_cast<const char*>(base);	//対象物


	/* 値格納ループ */
	for (int i = 0; i < nmemb; i++) {
		/* 値格納 */
		answer[i*size]= target[i];
	}
	

	int result = 0;	// 結果

	/* 比較ループ */
	for (int i = 0; i < nmemb/2; i++) {
		/* 値比較 */
		result = Compar(const_cast<void*>(reinterpret_cast<const void*>(&answer[2 * (i * size)])), const_cast<void*>(reinterpret_cast<const void*>(&answer[2 * (i * size) + 1])));
		/* 左の数値の方が大きかった場合の処理 */
		if (result == 1) {
			/* 値を入れ替える */
			memswap(const_cast<void*>(reinterpret_cast<const void*>(&answer[2*(i*size)])),
				const_cast<void*>(reinterpret_cast<const void*>(&answer[2*(i*size)+1])), size);
		}

	}
	int leftUpper = 0;	// 入れ替えたかの確認(左
	int rightUpper = 0;	// 入れ替えたかの確認(右)
	char *cache;	// キャッシュ
	int count;	// カウント
	/* 値格納ループ */
	for (int i = 1; i*i*2 <= nmemb ; i++) {
		count=0;
		/* 値格納ループ */
		for(int j=1;j*j*i<nmemb;j++){
			/* 初期可*/
			leftUpper = 0;
			/* 初期化 */
			rightUpper = 0;
			/* メモリ確保 */
			cache = new char[i * 4 * size];

			/* 値格納ループ */
			for (int k = 0; leftUpper<i* 2&&rightUpper<i*2; k++) {
				/* 前と後ろの値を比較 */
				result = Compar(answer + (leftUpper+j*j-1) * size, answer + (1*j*i+j*j*i + rightUpper) * size);
				/* 左の数値の方が大きかった場合の処理 */
				if (result == 1) {
					/* 値格納 */
					cache[k]=answer[1*j*i + j * j*i + rightUpper];
					/* 1になったら、右をインクリメント */
					rightUpper++;
				}
				else {
					/* 値格納 */
					cache[k] = answer[leftUpper + j * j-1];

					/* 1になったら、左をインクリメント */
					leftUpper++;
				}
			}
			/* 左が先に到達した場合 */
			if (leftUpper == i*2) {
				/* 値格納ループ */
				for(int l=leftUpper+rightUpper;l<i*j*4;l++){
					/* 値格納 */
					cache[l]=answer[rightUpper+count+i*i];
					/* インクリメント */
					rightUpper++;
				}
			}

			/* 右が先に到達した場合 */
			if (rightUpper == i * 2) {
				/* 値格納ループ */
				for (int k = leftUpper + rightUpper; k < i * 4; k++) {
					/* 値格納 */
					cache[k] = answer[leftUpper + count*(j-1)];
					/* インクリメント */
					leftUpper++;
				}
			}

			/* 値格納ループ */
			for (int l = 0; l < i * 4; l++) {
				/* 値格納 */
				answer[count]=cache[l];
				count++;
			}

			/* メモリ開放 */
			delete[] cache;
		}

	}
	/* 値格納 */
	memcpy(base,answer,size*nmemb);
}

/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {

	char string[] = "65318724";

	margesort(string, 8, 1, Compar);

	/* メッセージ出力ループ */
	for (int i = 0; i < 8; i++) {
		/* メッセージ出力 */
		std::cout << string[i];
	}

}