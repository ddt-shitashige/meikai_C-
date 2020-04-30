/**
 * @file Exerises7-3.cpp
 * @brief 演習7-3　左上直角の二等辺三角形RectEquilTriangleLUと右下直角のRectEqquilTriangleRBを作成せよ
 * @author shitashige
 * @date 20200430
 */

#include<string>
#include<sstream>
#include<iostream>

/* 図形クラス */
class Shape {
public:

	/* 複製 */
	virtual Shape* clone() const = 0;

	/* 絵画 */
	virtual void draw() const = 0;

	/* 文字列表現 */
	virtual std::string to_string() const = 0;

	/* 情報解説付き絵画 */
	void print() const {
		std::cout << to_string() << "\n";
		draw();
	}

	/* デバッグ用情報表示 */
	virtual void debug() const = 0;

};

/* 二等辺三角形クラス */
class Triangle :public Shape {

protected:
	/* アスタリスク表示 */
	void drowAstarisk(int element) const {
		/* 要素数分ループ */
		for (int i = 0; i < element; i++) {
			/* メッセージ表示 */
			std::cout << "*";
		}
	}

	/* 空白表示 */
	void drowBlank(int element) const {
		/* 要素数分ループ */
		for (int i = 0; i < element; i++) {
			/* メッセージ表示 */
			std::cout << " ";
		}
	}
	/* 改行 */
	void changeLen()const {
		/* 文字列出力 */
		std::cout << "\n";
	}
public:
	/* デバッグ用情報表示 */
	void debug() const {
	}
};

/* 右下が直角なもの */
class RectEqquilTriangleRB :public::Triangle {

	int element;	// 要素数

public:
	/* コンストラクタ */
	RectEqquilTriangleRB(int x) : element(x) {}

	/* 絵画 */
	void draw() const {
		/* 要素数分ループ */
		for (int i = 1; i <= element; i++) {
			/* 空白表示 */
			drowBlank(element - i);
			/* アスタリスク表示 */
			drowAstarisk(i);
			/* 改行表示 */
			changeLen();
		}
	}
	/* 複製 */
	RectEqquilTriangleRB* clone() const {
		return new RectEqquilTriangleRB(element);
	}
	/* 文字列表現 */
	std::string to_string() const {
		std::ostringstream os;
		/* メッセージ表示 */
		os << "RightUnder(length:" << element << ")";
		return os.str();
	}
};

/* 左上が直角なもの */
class RectEquilTriangleLU :public::Triangle {

	int element;	// 要素数

public:
	/* コンストラクタ */
	RectEquilTriangleLU(int x) : element(x) {}

	/* 絵画 */
	void draw() const {
		/* 要素数分ループ */
		for (int i = 0; i < element; i++) {
			/* アスタリスク表示 */
			drowAstarisk(element - i);
			/* 改行表示 */
			changeLen();
		}
	}
	/* 複製 */
	RectEquilTriangleLU* clone() const {
		return new RectEquilTriangleLU(element);
	}
	/* 文字列表現 */
	std::string to_string() const {
		std::ostringstream os;
		/* メッセージ表示 */
		os << "LeftTop(length:" << element << ")";
		return os.str();
	}

};

/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	int element;// 要素

	/* 文字列出力 */
	std::cout << "要素を入力";
	/* 数値入力 */
	std::cin >> element;

	Shape* shape[] = {
	new RectEqquilTriangleRB(element),
	new RectEquilTriangleLU(element),
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