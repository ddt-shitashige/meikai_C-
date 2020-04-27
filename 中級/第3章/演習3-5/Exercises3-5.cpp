/**
 * @file Exerises3-5.cpp
 * @brief 演習3-5	九九の加算表と乗算票のどちらを表示するのかを選択させ、選択された表を表示するプログラムを作成せよ。List3-8に準じたプログラムと、List3C-1に準じたプログラムの2つを作成する事。
 * @author shitashige
 * @date 20200427
 */


#include <iostream>
#include<iomanip>

enum cal { Sum, Mul, Invalid };// 列挙型定義
typedef void (*Calculation)(int ,int);	//新データ型定義
cal selected;	// 選択値


/*
 *@fn
 * @brief 足し算
 * @param x1 加算値1
 * @param x2 加算値2
 * @return 結果
 */
void SumCalculation(int x1, int x2) {
	/* メッセージ出力 */
	std::cout << std::setw(3) << x1 + x2;
}
/*
 *
 *@fn
 * @brief 乗算
 * @param x1 乗算値1
 * @param x2 乗算値2
 * @return 結果
 */
void MulCalculation(int x1, int x2) {
	/* メッセージ出力 */
	std::cout << std::setw(3) << x1 * x2;
}

Calculation calculation[] = { SumCalculation,MulCalculation };	// 配列の定義

/*
 *@fn
 * @brief 九九の表を出力
 * @param calc 計算を呼び出す関数
 * @return 結果
 */
void Kuku(void calc(int, int)) {
	/* メッセージ出力 */
	std::cout << "  |";
	/* 数値出力ループ */
	for (int i = 1; i <= 9; i++) {
		/* メッセージ出力 */
		std::cout << std::setw(3) << i;
	}
	/* 改行 */
	std::cout << "\n--+";
	/* 線出力ループ */
	for (int i = 1; i <= 27; i++) {
		/* メッセージ出力 */
		std::cout << '-';
	}
	/* 改行*/
	std::cout << "\n";
	/* 結果出力ループ */
	for (int i = 1; i <= 9; i++) {
		std::cout << i << " |";
		for (int j = 1; j <= 9; j++) {
			/* メッセージ出力 */
			calc(i, j);
		}
		/* 改行*/
		std::cout << "\n";
	}
	/* 改行ループ */
	std::cout << "\n";
}

/*
 *@fn
 * @brief 判断関数
 * @param number 入力値
 * @return 結果
 */
void(*Judge(int number))(int, int ){
	/* 判断する */
	if (Sum == number) {
		return SumCalculation;
	}
	else {
		return MulCalculation;
	}
}

/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	int inputNumber;	// 入力値

	/* メッセージ出力 */
	std::cout << "どちらを表示？\n";

	/* 入力 */
	std::cin >> inputNumber;

	/* 入力値によって変更 */
	if (Sum == inputNumber) {
		/* 足し算の九九を実行 */
		Kuku(SumCalculation);
	}
	else {
		/* 掛け算の九九を実行 */
		Kuku(MulCalculation);
	}

	/* 改行*/
	std::cout << "\n\n";

	/* 数値判断 */
	void (*result)(int,int) = (Judge(inputNumber));
	/* 実行 */
	Kuku(result);


}
