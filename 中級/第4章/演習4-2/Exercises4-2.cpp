/**
 * @file Exerises4-2.cpp
 * @brief 演習4-2　デストラクタの起動の順序を確認できるように、List4-15のプログラムを書き換えたプログラムを作成せよ。
 * @author shitashige
 * @date 20200428
 */



#include<iostream>

using namespace std;


/* クラスDerivedの機底クラス */
class Base {
	int x;	// ｘ

public:
	Base(int a = 0) :x(a) { cout << "Base::xを" << x << "で初期化\n"; }
	~Base(){ cout << "Base:デストラクタ\n"; }	// デストラクタ

};

/* クラスDerivedにメンバとして含まれるクラス */
class Memb {
	int x;

public:
	Memb(int a = 0) :x(a) { cout << "Memb::xを" << x << "で初期化\n"; }
	~Memb() { cout << "Memb:デストラクタ\n"; }	// デストラクタ

};


/* クラスDerivedはクラスBaseから派生 */
class Derived :public Base {
	int y; // y
	Memb m1;	// メンバー1
	Memb m2;	// メンバー2

	void say() { y = 0; cout << "Derived::yを" << y << "で初期化\n"; };	// メッセージ表示

public:
	Derived() { say(); };	// コンストラクタ
	Derived(int a, int b, int c) :m2(a), m1(b), Base(c) { say(); }	// コンストラクタ
	~Derived() { cout << "Derived:デストラクタ\n"; }	// デストラクタ


};

int main() {
	Derived dl;	// デリバード
	/* メッセージ表示 */
	cout << "\n";
	Derived d2(1, 2, 3);	// デリバード2
}