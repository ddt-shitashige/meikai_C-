/**
 * @file Exerises7-2.cpp
 * @brief 演習7-2　List7-1のクラスＤｅｒｉｖｅｄにメンバ変数printを追加せよ。尚、メンバ変数printは、以下の形式の表示を行うものとする。
 * @author shitashige
 * @date 20200430
 */


#include <iostream>

using namespace std;

/* 機底クラス1 */
class Base1 {
public:
	int x;	// 変数x
	/* コンストラクタ */
	Base1(int a = 0) :x(a) {
		cout << "Base1::xを" << x << "に初期化しました。\n";
	}
	/* 文字列出力 */
	void print() { cout << "Base1クラスです:x=" << x << "\n"; }
};

/* 機底クラス2 */
class Base2 {
public:
	int x;
	Base2(int a = 0) :x(a) {
		/* 文字列出力 */
		cout << "Base2::xを" << x << "に初期化しました\n";
	}
	void print() {
		/* 文字列出力 */
		cout << "Base2クラスです:x=" << x << "\n";
	}
};

/* 派生クラス */
class Derived :public Base1, public Base2 {
	int y;
public:
	/* コンストラクタ */
	Derived(int a,int b,int c):y(c),Base2(a),Base1(b){
		/* 文字列出力 */
		cout << "Derived::yを" << y << "に初期化しました。\n";
	}
	void func(int a, int b) {
		Base1::x = a;
		Base2::x = b;
	}

	/* 文字列出力関数 */
	void print() {
		/* 文字列出力 */
		Base1::print();
		/* 文字列出力 */
		Base2::print();
		/* 文字列出力 */
		cout << "Derivedクラスです:y=" << y << "\n";
	}

};


/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	/* デリバード定義 */
	Derived z(1, 2, 3);
	/* 値格納 */
	z.func(1, 2);
	/* 文字列出力 */
	z.Base1::print();
	/* 文字列出力 */
	z.Base2::print();
	/* 文字列出力 */
	z.print();
}