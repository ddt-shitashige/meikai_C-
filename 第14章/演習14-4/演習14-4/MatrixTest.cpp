/**
 * @file Exerises14-4.cpp
 * @brief 演習14-4	簡易的な行列クラスMatrixを作成せよ。以下のコードを参考にして、コンストラクタ・デストラクタ・各メンバ関数を、自分で設計すること。
 *					class Matrix {
 *						int height;	// 行数
 *						int width;		// 列数
 *						double *m;	// 先頭要素へのポインタ
 *					
 *					public:
 *						Matrix(int, int);	// コンストラクタ
 *						Matrix(const Matrix &);	// コピーコンストラクタ
 *						~Matrix();	// デストラクタ
 *						 // +, -, *, = などの演算子を定義せよ。
 * @author shitashige
 * @date 20200402
 */


#include <iostream>
#include "Matrix.h"

/* メイン関数 */
int main() {
	Matrix firstMatrix(2,2);	// マトリクス1
	Matrix secondMatrix(2,2);	// マトリクス2


	/* メッセージ出力 */
	std::cout<<"足し算：\n";


	/* 結果出力のループ */
	for (int i = 0; i < 2; i++) {
		/* 結果出力のループ */
		for (int j = 0; j < 2; j++) {
			/* 数値セット */
			firstMatrix.SetNumber(i, j, 2);
			/* 数値セット */
			secondMatrix.SetNumber(i, j, 2);
		}
	}
	/* 行列の足し算 */
	Matrix AnswerMatrix = firstMatrix + secondMatrix;

	/* 結果出力のループ */
	for (int i = 0; i < 2; i++) {
		/* 結果出力のループ */
		for (int j = 0; j < 2; j++) {
			std::cout<<AnswerMatrix.GetNumber(i,j)<<" ,";
		}
		/* メッセージ出力 */
		std::cout<<'\n';
	}

	/* 結果出力のループ */
	for (int i = 0; i < 2; i++) {
		/* 結果出力のループ */
		for (int j = 0; j < 2; j++) {
			/* 数値セット */
			firstMatrix.SetNumber(i, j, 3);
			/* 数値セット */
			secondMatrix.SetNumber(i, j, 2);
		}
	}
	/* 行列の引き算 */
	AnswerMatrix = firstMatrix - secondMatrix;


	/* メッセージ出力 */
	std::cout << "引き算：\n";

	/* 結果出力のループ */
	for (int i = 0; i < 2; i++) {
		/* 結果出力のループ */
		for (int j = 0; j < 2; j++) {
			std::cout << AnswerMatrix.GetNumber(i, j) << " ,";
		}
		/* メッセージ出力 */
		std::cout << '\n';
	}


	Matrix thirdMatrix(3, 2);	// マトリクス3
	Matrix forseMatrix(2, 4);	// マトリクス4

	/* 数値セット */
	thirdMatrix.SetNumber(0,0, 0);
	thirdMatrix.SetNumber(0, 1, 1);
	thirdMatrix.SetNumber(1, 0, 2);
	thirdMatrix.SetNumber(1, 1, 3);
	thirdMatrix.SetNumber(2, 0, 4);
	thirdMatrix.SetNumber(2, 1, 5);
	forseMatrix.SetNumber(0, 0, 0);
	forseMatrix.SetNumber(0, 1, 1);
	forseMatrix.SetNumber(0, 2, 2);
	forseMatrix.SetNumber(0, 3, 3);
	forseMatrix.SetNumber(1, 0, 4);
	forseMatrix.SetNumber(1, 1, 5);
	forseMatrix.SetNumber(1, 2, 6);
	forseMatrix.SetNumber(1, 3, 7);

	/* 行列の掛け算*/
	Matrix fifthMatrix = thirdMatrix * forseMatrix;



	/* メッセージ出力 */
	std::cout << "掛け算：\n";

	/* 結果出力のループ */
	for (int i = 0; i < 3; i++) {
		/* 結果出力のループ */
		for (int j = 0; j < 4; j++) {
			std::cout << fifthMatrix.GetNumber(i, j) << " ,";
		}
		/* メッセージ出力 */
		std::cout << '\n';
	}

}