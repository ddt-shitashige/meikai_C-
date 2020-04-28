/**
 * @file Exerises4-1.cpp
 * @brief 演習4-1　List4-15のクラスBaseのコンストラクタを上記の2に書き換えたプログラムで作成した、本ページで開設されている内容を確認せよ。
 * @author shitashige
 * @date 20200428
 */


#include<iostream>

using namespace std;

/* 機底クラス */
class Base {
	int x;
public:
	/* コンストラクタ */
	Base(int xx=99); x(xx) { cout << "Base::xを"<<x<<"で初期化。\n"; }
	/* xのゲッター */
	int get_x()const { return x; }
};

/* 派生クラス */
class Derived :public Base {
};


int main() {

	Derived d;	// デリバード

	cout<<"d.get_x() = "<<d.get_x()<<"\n"
}