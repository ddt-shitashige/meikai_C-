/**
 * @file Exerises7-15.cpp
 * @brief 演習7-15	double型のオブジェクトを生成して0.0で初期化するプログラムを作成せよ。
 * @author shitashige
 * @date 20200324
 */


#include <iostream>
#include <iomanip>



/**
 * @fn
 * main
 * @brief main関数
 * @return 0:正常終了
 */
int main() {

	double *doubleNumber;	// ダブル型の数値

	/* ダブル型のメモリ確保 */
	doubleNumber= new double();

	/* ダブル型表示 */
	std::cout<<std::fixed << std::setprecision(1) <<*doubleNumber;

	/* メモリ開放 */
	delete doubleNumber;

	return 0;

}