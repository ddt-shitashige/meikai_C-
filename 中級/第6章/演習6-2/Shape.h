#include<string>
#include<sstream>
#include<iostream>

/* 図形クラス */
class Shape {
public:
	/* 純粋仮想デストラクタ */
	virtual ~Shape() = 0;

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

/* 純粋仮想デストラクタ */
inline Shape::~Shape() {};

/* デバッグ用情報表示 */
inline void Shape::debug() const {
	/* 文字列出力 */
	std::cout << "-- デバッグ情報 --\n";
	/* 文字列出力 */
	std::cout << "型：" << typeid(*this).name() << "\n";
	/* 文字列出力 */
	std::cout << "アドレス：" << this << "\n";

}

/* 点クラス */
class Point :public Shape {
public:
	/* 絵画 */
	void draw() const {
		/* 文字列出力 */
		std::cout << "*\n";
	}

	/* 複製 */
	Point* clone() const {
		return new Point;
	}

	/* 文字列表現 */
	std::string to_string() const {
		return "Point";
	}

	/* デバッグ用情報表示 */
	void debug() const {
		/* デバッグコマンド呼び出し */
		Shape::debug();
	}
};

/* 直線クラス */
class Line :public Shape {
protected:
	int length;	// 長さ

public:
	/* コンストラクタ */
	Line(int len) :length(len) { }

	/* 長さ(lengthのゲッタ) */
	int get_length()const { return length; }

	/* 長さ(length)のセッター */
	void set_length(int len) { length = len; }

	/* デバッグ用情報表示 */
	void debug() const {
		/* デバッグメッセージ表示 */
		Shape::debug();
		/* 文字列出力 */
		std::cout << "length:" << length << "\n";
	}
};

/* 水平直線クラス */
class HorzLine :public Line {
public:
	/* コンストラクタ */
	HorzLine(int len) :Line(len) {}

	/* 複製 */
	virtual HorzLine* clone() const {
		return new HorzLine(length);
	}

	/* 絵画 */
	void draw() const {
		for (int i = 1; i <= length; i++) {
			/* 文字列出力 */
			std::cout << "-";
		}
		/* 文字列出力 */
		std::cout << "\n";
	}

	/* 文字列表現 */
	std::string to_string() const {
		std::ostringstream os;
		/* メッセージ表示 */
		os << "HorzLine(length:" << length << ")";
		return os.str();
	}
};

/* 垂直直線クラス */
class VertLine :public Line {
public:
	/* コンストラクタ */
	VertLine(int len) :Line(len) {}

	/* 複製 */
	virtual VertLine* clone() const {
		return new VertLine(length);
	}

	/* 絵画 */
	void draw() const {
		for (int i = 1; i <= length; i++) {
			/* 文字列出力 */
			std::cout << "|\n";
		}
	}

	/* 文字列表現 */
	std::string to_string() const {
		std::ostringstream os;
		/* メッセージ表示 */
		os << "VertLine(length:" << length << ")";
		return os.str();
	}
};

/* 長方形クラス */
class Rectangle : public Shape {
	int width;	// 幅
	int heigth;	// 高さ
public:
	/* コンストラクタ */
	Rectangle(int w, int h) :width(w), heigth(h) {};

	/* 複製 */
	Rectangle* clone() const {
		return new Rectangle(width, heigth);
	}

	/* 絵画 */
	void draw() const {
		/* 高さループ */
		for (int i = 1; i <= heigth; i++) {
			/* 幅ループ */
			for (int j = 1; j <= width; j++) {
				/* 文字列出力 */
				std::cout << "*";
			}
			std::cout << "\n";
		}
	}

	/* 文字列表現 */
	std::string to_string() const {
		std::ostringstream os;
		/* メッセージ表示 */
		os << "Rectangle(width:" << width << ",height:" << heigth << ")";
		return os.str();
	}

	/* デバッグ用情報表示 */
	void debug() const {
		/* デバッグ用情報表示 */
		Shape::debug();
		/* 文字列出力 */
		std::cout << "width:" << width << "\n";
		/* 文字列出力 */
		std::cout << "heigth:" << heigth << "\n";
	}
};

/* 図形クラス群用の挿入子 */
inline std::ostream& operator<<(std::ostream os, const Shape& s){
	return os << s.to_string();
}


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
	void changeLen()const{
		/* 文字列出力 */
		std::cout << "\n";
	}
public:
	/* デバッグ用情報表示 */
	void debug() const {
	}
};

/* 右上が直角なもの */
class RightTop :public::Triangle {

	int element;	// 要素数

public:
	/* コンストラクタ */
	RightTop(int x) : element(x) {}

	/* 絵画 */
	void draw() const {
		/* 要素数分ループ */
		for (int i = 0; i < element; i++) {
			/* 空白表示 */
			drowBlank(i);
			/* アスタリスク表示 */
			drowAstarisk(element - i);
			/* 改行表示 */
			changeLen();
		}
	}

	/* 複製 */
	RightTop* clone() const {
		return new RightTop(element);
	}

	/* 文字列表現 */
	std::string to_string() const {
		std::ostringstream os;
		/* メッセージ表示 */
		os << "RightTop(length:" << element << ")";
		return os.str();
	}

};

/* 右下が直角なもの */
class RightUnder :public::Triangle {

	int element;	// 要素数

public:
	/* コンストラクタ */
	RightUnder(int x) : element(x) {}

	/* 絵画 */
	void draw() const{
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
	RightUnder* clone() const {
		return new RightUnder(element);
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
class LeftTop :public::Triangle {

	int element;	// 要素数

public:
	/* コンストラクタ */
	LeftTop(int x) : element(x) {}

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
	LeftTop* clone() const {
		return new LeftTop(element);
	}
	/* 文字列表現 */
	std::string to_string() const {
		std::ostringstream os;
		/* メッセージ表示 */
		os << "LeftTop(length:" << element << ")";
		return os.str();
	}

};

/* 左上が直角なもの */
class LeftUnder :public::Triangle {

	int element;	// 要素数

public:
	/* コンストラクタ */
	LeftUnder(int x) : element(x) {}

	/* 絵画 */
	void draw() const {
		/* 要素数分ループ */
		for (int i = 1; i <= element; i++) {
			/* アスタリスク表示 */
			drowAstarisk(i);
			/* 改行表示 */
			changeLen();
		}
	}
	/* 複製 */
	LeftUnder* clone() const {
		return new LeftUnder(element);
	}

	/* 文字列表現 */
	std::string to_string() const {
		std::ostringstream os;
		/* メッセージ表示 */
		os << "LeftUnder(length:" << element << ")";
		return os.str();
	}

};