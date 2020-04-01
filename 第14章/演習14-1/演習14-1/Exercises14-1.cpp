/**
 * @file Exerises14-1.cpp
 * @brief 演習14-1	デストラクタがデータメンバの逆順に呼び出されることを確認するためのプログラムを作成せよ。
 * @author shitashige
 * @date 20200401
 */

#include <iostream>

/* 1つ目のクラス */
class FirstClass {
	public:
		FirstClass() {
			std::cout<<"1つ目のクラスのコンストラクタ\n";
		}
		~FirstClass() {
			std::cout << "1つ目のクラスのデストラクタ\n";
		}
};

/* 1つ目のクラス */
class SecondClass {
public:
	SecondClass() {
		std::cout << "2つ目のクラスのコンストラクタ\n";
		FirstClass();
	}
	~SecondClass() {
		std::cout << "2つ目のクラスのデストラクタ\n";
	}
};

/* メイン関数 */
int main() {
	SecondClass();
}