/**
 * @file Exerises6-16.cpp
 * @brief 演習6-16	静的記憶域期間を持つ配列の全要素が0で初期化されることを確認するプログラムを作成せよ。
 * @author shitashige
 * @date 20200322
 */


#include <iostream>

/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	const int element = 5;	// 要素数
	static int staticArray[5];	// 性的記憶期間を持つ配列
    int Array[5];	// 自動記憶期間を持つ配列


    /* メッセージ出力 */
    std::cout << "静的記憶期間の場合\n";

	/* 配列の中身出力 */
	for (int i=0; i < element; i++) {
		/* メッセージ出力 */
		std::cout<<"["<<i<<"]="<<staticArray[i]<<" \n";
	}
    /* メッセージ出力 */
    std::cout << "自動記憶期間の場合\n";

    /* 配列の中身出力 */
    for (int i = 0; i < element; i++) {
        /* メッセージ出力 */
        std::cout << "[" << i << "]=" << Array[i] << " \n";
    }

	return 0;
}