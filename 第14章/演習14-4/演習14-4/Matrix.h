#pragma once
class Matrix {
	int height;	// 行数
	int width;		// 列数
	double *m;	// 先頭要素へのポインタ

public:
	Matrix(int height, int width);	// コンストラクタ
	Matrix(const Matrix &x);	// コピーコンストラクタ
	~Matrix();	// デストラクタ

	Matrix &operator=(const Matrix &matrix);	// 演算子=
	friend Matrix operator+(const Matrix &x, const Matrix &y);	// 演算子+
	friend Matrix operator-(const Matrix &x, const Matrix &y);	// 演算子-
	friend Matrix operator*(const Matrix &x, const Matrix &y);	// 演算子*

	/* 値取得 */
	double GetNumber(int height, int width) const;

	/* 値設定 */
	void SetNumber(int height, int width, double SetNumber);

};