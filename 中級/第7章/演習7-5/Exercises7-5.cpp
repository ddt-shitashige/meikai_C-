/**
 * @file Exerises7-5.cpp
 * @brief 演習7-5　List7-14の各クラスにデストラクタを追加して、オブジェクト解体の順序の確認を行え。
 * @author shitashige
 * @date 20200430
 */

#include <iostream>

using namespace std;

/* V1クラス */
class V1 {
public:
	V1() { cout << "V1を初期化\n"; }
	~V1() { cout << "V1を終了\n"; }
};

/* V2クラス */
class V2 {
public:
	V2() { cout << "V2を初期化\n"; }
	~V2() { cout << "V2を終了\n"; }

};

/* Xクラス */
class X :virtual public V1, virtual public V2 {
public:
	X() { cout << "Xを初期化\n"; }
	~X() { cout << "Xを終了\n"; }
};

/* Yクラス */
class Y :virtual public V2, virtual public V1{
public:
	Y() { cout << "Yを初期化\n"; }
	~Y() { cout << "Yを終了\n"; }

};

/* Zクラス */
class Z :public X, public Y{
public:
	Z() { cout << "Zを初期化\n"; }
	~Z() { cout << "Zを終了\n"; }

};

int main() {
	Z dummy;
}