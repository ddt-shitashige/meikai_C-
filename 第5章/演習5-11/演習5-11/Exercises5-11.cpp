/**
 * @file Exerises5-11.cpp
 * @brief 演習5-11	6人の2科目(国語,数学)の点数を読み込んで、科目ごとの合計点と平均点、学生毎の合計点と平均点を求めるプログラムを作成せよ。
 * @author shitashige
 * @date 20200309
 */
#include <iostream>

 /**
  * @fn
  * メイン関数
  * @brief 合計と平均を求める関数
  * @return 0:正常終了
  */
int main() {

	const int people = 6;	// 人数
	const int subject = 2;	// 科目
	int studentQueue[people][subject] = { 0 };	// 学生の行列


	/* 入力促し文字列表示 */
	std::cout << "学生の点数を入力してください。\n";

	/* 行列の中身を格納するループ */
	for (int i = 0; i < people; i++) {
		/* 行列の中身を格納するループ */
		for (int j = 0; j < subject; j++) {
			/* 行列の中身を格納 */
			std::cin >> studentQueue[i][j];
		}
	}

	/*
	 * 科目の合計平均を求める
	 */
	 /*
	  * 国語を求める
	  */
	int japaneseAverage = 0;	// 国語の平均
	int japaneseTotal = 0;	// 国語の合計

	/* 平均を求めるループ */
	for (int i = 0; i < people; i++) {
		/* 国語の合計点を求める */
		japaneseTotal += studentQueue[i][0];
	}
	/* 国語の平均を求める */
	japaneseAverage = japaneseTotal / people;

	/* 結果出力 */
	std::cout << " 国語の合計：" << japaneseTotal << "\n";
	/* 結果出力 */
	std::cout << " 国語の平均：" << japaneseAverage << "\n";



	/*
	 * 数学を求める
	 */
	int mathAverage = 0;	// 数学の平均
	int mathTotal = 0;	// 数学の合計

	/* 平均を求めるループ */
	for (int i = 0; i < people; i++) {
		/* 数学の合計点を求める */
		mathTotal += studentQueue[i][1];
	}
	/* 数学の平均を求める */
	mathAverage = mathTotal / people;

	/* 結果出力 */
	std::cout << " 数学の合計：" << mathTotal << "\n";
	/* 結果出力 */
	std::cout << " 数学の平均：" << mathAverage << "\n";


	/*
	 * 学生の合計平均を求める
	 */
	int studentAverage[people] = { 0 };	// 学生の平均点数
	int studentTotal[people] = { 0 };	// 学生の合計点数

	/* 平均を求めるループ */
	for (int i = 0; i < people; i++) {
		/* 平均を求めるループ */
		for (int j = 0; j < subject; j++) {
			/* 学生の合計点を求める */
			studentTotal[i] += studentQueue[i][j];
		}
		/* 学生の平均点を求める */
		studentAverage[i] = studentTotal[i] / subject;
		/* 結果出力 */
		std::cout << " 学生[" << i << "]の合計：" << studentTotal[i] << "\n";
		/* 結果出力 */
		std::cout << " 学生[" << i << "]の平均：" << studentAverage[i] << "\n";

	}

	return 0;
}