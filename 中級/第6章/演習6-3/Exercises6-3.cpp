#include<iostream>
#include"human.h"
#include"computer.h"

/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {

	Human human;  // 人
	Computer computer; // コンピューター
	int inputnumber;	// 入力数値

	/* メッセージ表示 */
	std::cout << "0～2を入力してください\n";
	/* 要素格納 */
	std::cin >> inputnumber;
	/* 数値格納 */
	human.InputElement(inputnumber);
	/* 数値格納 */
	computer.SetElement();

	/* 文字列出力 */
	std::cout << "人間：" << human.element << "\nCOM:" << computer.element;
}