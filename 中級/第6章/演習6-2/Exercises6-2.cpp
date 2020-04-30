/**
 * @file Exerises6-2.cpp
 * @brief 演習6-2　前問で作成したクラスを含め、全ての図形クラス群をテストするプログラムを作成せよ。List6-4と同じく、Shape型の配列を利用して、オブジェクトの生成と表示を行う事。ただし、ここの要素が参照するオブジェクトはプログラム内で与えるのではなく、キーボードから読み込むようにすること。
 * @author shitashige
 * @date 20200430
 */

#include "Shape.h"

int main() {
	int element;// 要素

	/* 文字列出力 */
	std::cout << "要素を入力";
	/* 数値入力 */
	std::cin >> element;

	Shape* shape[] = {
	new Point(),
	new HorzLine(element),
	new VertLine(element),
	new Rectangle(element,element),
	new RightTop(element),
	new RightUnder(element),
	new LeftTop(element),
	new LeftUnder(element)
	};

	/* 要素数分ループ */
	for (int i = 0; i < sizeof(shape) / sizeof(shape[0]); i++) {
		/* 文字列出力 */
		std::cout << "shape[" << i << "]\n";
		/* 結果出力 */
		shape[i]->print();
		/* 文字列出力 */
		std::cout << "\n";
	}

	/* 要素数分ループ */
	for (int i = 0; i < sizeof(shape) / sizeof(shape[0]); i++) {
		/* メモリ開放 */
		delete shape[i];
	}
}