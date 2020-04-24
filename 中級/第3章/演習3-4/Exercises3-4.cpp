


#include<iostream>


/*
 *@fn
 * @brief y軸の値を変換する関数
 * @param x x軸
 * @return 結果
 */
double f(double x) {
	return 2 * x;
}

/*
 *@fn
 * @brief 台形の面積を求める関数
 * @param x1 x開始軸
 * @param x2 x終了軸
 * @param n 分割数
 * @param fp 積分対象
 * @return 結果
 */
double daikei(double x1, double x2, int n, double fp(double)) {
	double range = x2 - x1;	// 範囲

	double lastTime = x1;	// 前回の開始値
	double unit = range / n;	// 1ユニットあたりの範囲

	double area = 0;	// 面積

	/* 面積を求めるループ */
	for (int i = 0; i < n; i++) {
		/* 台形の面積を求める */
		area += (f(lastTime) + f(lastTime + unit)) * unit / 2;

		/* 前回値更新 */
		lastTime += unit;
	}

	return area;
}


/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {

	std::cout << "面積は" << daikei(0, 10, 10, f) << "です。";

}
