/**
 * @file Exerises14-1.cpp
 * @brief 演習14-0	演習11-3で作成した時刻クラスに、各種の演算子関数を追加せよ。仕様などは自分で考えること。
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