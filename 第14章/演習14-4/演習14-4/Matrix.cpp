#include <iomanip>
#include "Matrix.h"

/* コンストラクタ */
Matrix::Matrix(int height, int width) {

	/* 高さ設定 */
	Matrix::height=height;

	/* 横設定 */
	Matrix::width=width;

	/* メモリ確保 */
	m = new double[Matrix::height* Matrix::width];
}

/* コピーコンストラクタ */
Matrix::Matrix(const Matrix &matrix) {
	/* 高さコピー */
	height = matrix.height;
	/* 横幅コピー */
	width = matrix.width;

	/* メモリ確保 */
	m = new double[height * width];

	/* 要素コピーループ */
	for (int i = 0; i < height * width; i++) {
		/* 要素コピー */
		m[i] = matrix.m[i];
	}

}
/* デストラクタ */
Matrix::~Matrix() {
	/* メモリ削除 */
	delete[] m;
}


/* 演算子= */
Matrix &Matrix::operator=(const Matrix &matrix) {
	/* 自己初期化処理 */
	if (&matrix != this) {
		/* 要素数が違った場合の処理 */
		if (height * width != matrix.height * matrix.height) {
			/* メモリ削除 */
			delete[] m;
		}
	}
	/* 要素コピーループ */
	for (int i = 0; i < height * width; i++) {
		/* 要素コピー */
		m[i] = matrix.m[i];
	}
	return *this;
}

/* 演算子+ */
Matrix operator+(const Matrix &x, const Matrix &y) {
	Matrix cacheMatrix = x;	// 一時保存のマトリクス

	/* 要素数分ループ */
	for (int i = 0; i < x.height * x.width; i++) {
		/* 要素コピー */
		cacheMatrix.m[i] = x.m[i] + y.m[i];
	}
	return cacheMatrix;

}

/* 演算子- */
Matrix operator-(const Matrix &x, const Matrix &y) {
	Matrix cacheMatrix = x;	// 一時保存のマトリクス

	/* 要素数分ループ */
	for (int i = 0; i < x.height * x.width; i++) {
		/* 要素コピー */
		cacheMatrix.m[i] = x.m[i] - y.m[i];
	}
	return cacheMatrix;


}
/* 演算子* */
Matrix operator*(const Matrix &x, const Matrix &y) {
	Matrix cacheMatrix(x.height, y.width);	// 一時保存のマトリクス

	/* 高さ分ループ */
	for (int i = 0; i < cacheMatrix.height; i++) {
		/* 横幅文ループ */
		for (int j = 0; j < cacheMatrix.width; j++) {
			/* 配列の中身初期化 */
			cacheMatrix.m[i * cacheMatrix.width + j] = 0;
			/* xの横幅分ループ */
			for (int k = 0; k < x.width; k++) {
				/* 行列計算 */
				cacheMatrix.m[i * cacheMatrix.width + j] += x.m[i * x.width + k] * y.m[k * y.width + j];
			}
		}
	}
	return cacheMatrix;
}

/* 値取得 */
double Matrix::GetNumber(int height, int width) const{
	return  m[height * Matrix::width+ width];
}

/* 値設定 */
void Matrix::SetNumber(int height, int width, double setNumber) {
	/* 数値をセット */
	m[height*Matrix::width + width] = setNumber;
}

