/**
 * @file Exerises4-10.cpp
 * @brief	List4-15のように、float型の変数を0.0から1.0まで0.001ずつ増やしていく様子とList4-16のように、
 *			int型の変数を0から1000までインクリメントした値を1000で割った値を求める様子を、横に並べて表示するプログラムを作成せよ。
 * @author shitashige
 * @date 20200216
 */


#include <iostream>
#include<iomanip>

<<<<<<< HEAD
 /**
  * @fn
  * メイン関数
  * @brief インクリメントした数を表示する関数
  * @return 0:正常終了
  */
int main() {

	float floatsSum = 0;	// float型の足す数値
=======
/**
 * @fn
 * メイン関数
 * @brief インクリメントした数を表示する関数
 * @return 0:正常終了
 */
int main() {

	float floatsSum=0;	// float型の足す数値
>>>>>>> b43ba42f5974634951db7266696f60b0145ef646

	/* テンプレート出力 */
	std::cout << "  float      int\n------------------\n";

	/* 1000回ループ */
<<<<<<< HEAD
	for (int i = 0; i <= 1000; i++) {
		/* 数値の桁数を6桁にしていして、数値出力 */
		std::cout << std::fixed << std::setprecision(6) << floatsSum << "   " << static_cast<float>(i) / 1000 << "\n";
		/* float型の足す数値に0.001足す */
		floatsSum += 0.001F;
=======
	for(int i=0;i<=1000;i++){
		/* 数値の桁数を6桁にしていして、数値出力 */
		std::cout<<std::fixed<<std::setprecision(6) << floatsSum<<"   "<<static_cast<float>(i)/1000<<"\n";
		/* float型の足す数値に0.001足す */
		floatsSum+=0.001F;
>>>>>>> b43ba42f5974634951db7266696f60b0145ef646
	}
	return 0;
}