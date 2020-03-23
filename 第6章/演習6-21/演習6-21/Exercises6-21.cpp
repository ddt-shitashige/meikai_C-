/**
 * @file Exerises6-21.cpp
 * @brief 演習6-21	short型整数xの絶対値、int型整数xの絶対値...を求める以下に示す多重定義された関数群を作成せよ。
 *					short absolute(short x)
 *					int absolute(int x)
 *					long absolute(long x)
 *					float absolute(float x)
 *					double absolute(double x)
 *					long double absolute(long double x)
 * @author shitashige
 * @date 20200322
 */


#include <iostream>


 /**
   * @fn
   * absolute
   * @brief 絶対値返却
   * @param x 数値x
   * @return
   */
short absolute(short x) {

	/* 引数が負値だったら符号を反転してリターン */
	if (x < 0) {
		return -x;
	}

	return x;
}

/**
  * @fn
  * absolute
  * @brief 絶対値返却
  * @param x 数値x
  * @return
  */
int absolute(int x) {

	/* 引数が負値だったら符号を反転してリターン */
	if (x < 0) {
		return -x;
	}

	return x;
}


/**
  * @fn
  * absolute
  * @brief 絶対値返却
  * @param x 数値x
  * @return
  */
long absolute(long x) {

	/* 引数が負値だったら符号を反転してリターン */
	if (x < 0) {
		return -x;
	}

	return x;
}


/**
  * @fn
  * absolute
  * @brief 絶対値返却
  * @param x 数値x
  * @return
  */
float absolute(float x) {

	/* 引数が負値だったら符号を反転してリターン */
	if (x < 0) {
		return -x;
	}

	return x;
}


/**
  * @fn
  * absolute
  * @brief 絶対値返却
  * @param x 数値x
  * @return
  */
double absolute(double x) {

	/* 引数が負値だったら符号を反転してリターン */
	if (x < 0) {
		return -x;
	}

	return x;
}


/**
  * @fn
  * absolute
  * @brief 絶対値返却
  * @param x 数値x
  * @return
  */
long double absolute(long double x) {

	/* 引数が負値だったら符号を反転してリターン */
	if (x < 0) {
		return -x;
	}

	return x;
}



/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	short shortNumber=-1234;	// short型の数値
	int intNumber=-1234;	// int型の数値
	long longNumber=-1234;	// long型の数値
	float floatNumber=-1.234;	// float型の数値
	double doubleNumber=-1.234;	// double型の数値
	long double longDoubleNumber=-1.234; 	// longdounbe型の数値

	/* 結果出力 */
	std::cout << "short型絶対値変換:" << absolute(shortNumber) << "\nint型絶対値変換:" << absolute(intNumber) << "\nlong型絶対値変換:" << absolute(longNumber) << "\nfloat型絶対値変換:" << absolute(floatNumber) << "\ndouble型絶対値変換:" << absolute(doubleNumber) << "\nlongdouble型絶対値変換:" << absolute(longDoubleNumber);

	return 0;
}