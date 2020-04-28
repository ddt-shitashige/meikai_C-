/**
 * @file Exerises4-3.cpp
 * @brief 演習4-3　List4-12のクラスBase型とDerived型に対して、アップキャストとダウンキャストを試みるプログラムを作成せよ。List4-22を参考にする事。
 * @author shitashige
 * @date 20200428
 */




#include <iostream>

/* 機底クラス */
class Base{
	int a;	// 変数a
	int b;	// 変数b

public:
	Base(int aa, int bb) :a(aa), b(bb) {};
	void func() const {
		/* メッセージ表示 */
		std::cout << "a=" << a << "\n";
	}
};

/* 派生クラス */
class Derived :public Base {
	int x;	// 変数x
public:
	Derived(int aa, int bb, int xx) :Base(aa, bb), x(xx) {}

	void  method() const {
		func();
		/* メッセージ表示 */
		std::cout << "x = " << x << '\n';
	}
};

/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int  main() {
	/* アップキャスト */
	Base *base=new Derived(1,2,3);	// ベース
	Derived* derived;	// デリバード

	/* メッセージ表示 */
	base->func();


	/* ダウンキャスト */
	derived = static_cast<Derived*>(base);

	/* メッセージ表示 */
	std::cout << "ダウンキャスト後：\n";

	/* 値表示 */
	derived->func();
	derived->method();

	/* メモリ開放 */
	delete base;
}