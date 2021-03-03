#include<string>
#include<sstream>
#include<iostream>

/* �}�`�N���X */
class Shape {
public:
	/* �������z�f�X�g���N�^ */
	virtual ~Shape() = 0;

	/* ���� */
	virtual Shape* clone() const = 0;

	/* �G�� */
	virtual void draw() const = 0;

	/* ������\�� */
	virtual std::string to_string() const = 0;

	/* ������t���G�� */
	void print() const {
		std::cout << to_string() << "\n";
		draw();
	}

	/* �f�o�b�O�p���\�� */
	virtual void debug() const = 0;

};

/* �������z�f�X�g���N�^ */
inline Shape::~Shape() {};

/* �f�o�b�O�p���\�� */
inline void Shape::debug() const {
	/* ������o�� */
	std::cout << "-- �f�o�b�O��� --\n";
	/* ������o�� */
	std::cout << "�^�F" << typeid(*this).name() << "\n";
	/* ������o�� */
	std::cout << "�A�h���X�F" << this << "\n";

}

/* �_�N���X */
class Point :public Shape {
public:
	/* �G�� */
	void draw() const {
		/* ������o�� */
		std::cout << "*\n";
	}

	/* ���� */
	Point* clone() const {
		return new Point;
	}

	/* ������\�� */
	std::string to_string() const {
		return "Point";
	}

	/* �f�o�b�O�p���\�� */
	void debug() const {
		/* �f�o�b�O�R�}���h�Ăяo�� */
		Shape::debug();
	}
};

/* �����N���X */
class Line :public Shape {
protected:
	int length;	// ����

public:
	/* �R���X�g���N�^ */
	Line(int len) :length(len) { }

	/* ����(length�̃Q�b�^) */
	int get_length()const { return length; }

	/* ����(length)�̃Z�b�^�[ */
	void set_length(int len) { length = len; }

	/* �f�o�b�O�p���\�� */
	void debug() const {
		/* �f�o�b�O���b�Z�[�W�\�� */
		Shape::debug();
		/* ������o�� */
		std::cout << "length:" << length << "\n";
	}
};

/* ���������N���X */
class HorzLine :public Line {
public:
	/* �R���X�g���N�^ */
	HorzLine(int len) :Line(len) {}

	/* ���� */
	virtual HorzLine* clone() const {
		return new HorzLine(length);
	}

	/* �G�� */
	void draw() const {
		for (int i = 1; i <= length; i++) {
			/* ������o�� */
			std::cout << "-";
		}
		/* ������o�� */
		std::cout << "\n";
	}

	/* ������\�� */
	std::string to_string() const {
		std::ostringstream os;
		/* ���b�Z�[�W�\�� */
		os << "HorzLine(length:" << length << ")";
		return os.str();
	}
};

/* ���������N���X */
class VertLine :public Line {
public:
	/* �R���X�g���N�^ */
	VertLine(int len) :Line(len) {}

	/* ���� */
	virtual VertLine* clone() const {
		return new VertLine(length);
	}

	/* �G�� */
	void draw() const {
		for (int i = 1; i <= length; i++) {
			/* ������o�� */
			std::cout << "|\n";
		}
	}

	/* ������\�� */
	std::string to_string() const {
		std::ostringstream os;
		/* ���b�Z�[�W�\�� */
		os << "VertLine(length:" << length << ")";
		return os.str();
	}
};

/* �����`�N���X */
class Rectangle : public Shape {
	int width;	// ��
	int heigth;	// ����
public:
	/* �R���X�g���N�^ */
	Rectangle(int w, int h) :width(w), heigth(h) {};

	/* ���� */
	Rectangle* clone() const {
		return new Rectangle(width, heigth);
	}

	/* �G�� */
	void draw() const {
		/* �������[�v */
		for (int i = 1; i <= heigth; i++) {
			/* �����[�v */
			for (int j = 1; j <= width; j++) {
				/* ������o�� */
				std::cout << "*";
			}
			std::cout << "\n";
		}
	}

	/* ������\�� */
	std::string to_string() const {
		std::ostringstream os;
		/* ���b�Z�[�W�\�� */
		os << "Rectangle(width:" << width << ",height:" << heigth << ")";
		return os.str();
	}

	/* �f�o�b�O�p���\�� */
	void debug() const {
		/* �f�o�b�O�p���\�� */
		Shape::debug();
		/* ������o�� */
		std::cout << "width:" << width << "\n";
		/* ������o�� */
		std::cout << "heigth:" << heigth << "\n";
	}
};

/* �}�`�N���X�Q�p�̑}���q */
inline std::ostream& operator<<(std::ostream os, const Shape& s){
	return os << s.to_string();
}


/* �񓙕ӎO�p�`�N���X */
class Triangle :public Shape {

protected:
	/* �A�X�^���X�N�\�� */
	void drowAstarisk(int element) const {
		/* �v�f�������[�v */
		for (int i = 0; i < element; i++) {
			/* ���b�Z�[�W�\�� */
			std::cout << "*";
		}
	}

	/* �󔒕\�� */
	void drowBlank(int element) const {
		/* �v�f�������[�v */
		for (int i = 0; i < element; i++) {
			/* ���b�Z�[�W�\�� */
			std::cout << " ";
		}
	}
	/* ���s */
	void changeLen()const{
		/* ������o�� */
		std::cout << "\n";
	}
public:
	/* �f�o�b�O�p���\�� */
	void debug() const {
	}
};

/* �E�オ���p�Ȃ��� */
class RightTop :public::Triangle {

	int element;	// �v�f��

public:
	/* �R���X�g���N�^ */
	RightTop(int x) : element(x) {}

	/* �G�� */
	void draw() const {
		/* �v�f�������[�v */
		for (int i = 0; i < element; i++) {
			/* �󔒕\�� */
			drowBlank(i);
			/* �A�X�^���X�N�\�� */
			drowAstarisk(element - i);
			/* ���s�\�� */
			changeLen();
		}
	}

	/* ���� */
	RightTop* clone() const {
		return new RightTop(element);
	}

	/* ������\�� */
	std::string to_string() const {
		std::ostringstream os;
		/* ���b�Z�[�W�\�� */
		os << "RightTop(length:" << element << ")";
		return os.str();
	}

};

/* �E�������p�Ȃ��� */
class RightUnder :public::Triangle {

	int element;	// �v�f��

public:
	/* �R���X�g���N�^ */
	RightUnder(int x) : element(x) {}

	/* �G�� */
	void draw() const{
		/* �v�f�������[�v */
		for (int i = 1; i <= element; i++) {
			/* �󔒕\�� */
			drowBlank(element - i);
			/* �A�X�^���X�N�\�� */
			drowAstarisk(i);
			/* ���s�\�� */
			changeLen();
		}
	}
	/* ���� */
	RightUnder* clone() const {
		return new RightUnder(element);
	}
	/* ������\�� */
	std::string to_string() const {
		std::ostringstream os;
		/* ���b�Z�[�W�\�� */
		os << "RightUnder(length:" << element << ")";
		return os.str();
	}
};


/* ���オ���p�Ȃ��� */
class LeftTop :public::Triangle {

	int element;	// �v�f��

public:
	/* �R���X�g���N�^ */
	LeftTop(int x) : element(x) {}

	/* �G�� */
	void draw() const {
		/* �v�f�������[�v */
		for (int i = 0; i < element; i++) {
			/* �A�X�^���X�N�\�� */
			drowAstarisk(element - i);
			/* ���s�\�� */
			changeLen();
		}
	}
	/* ���� */
	LeftTop* clone() const {
		return new LeftTop(element);
	}
	/* ������\�� */
	std::string to_string() const {
		std::ostringstream os;
		/* ���b�Z�[�W�\�� */
		os << "LeftTop(length:" << element << ")";
		return os.str();
	}

};

/* ���オ���p�Ȃ��� */
class LeftUnder :public::Triangle {

	int element;	// �v�f��

public:
	/* �R���X�g���N�^ */
	LeftUnder(int x) : element(x) {}

	/* �G�� */
	void draw() const {
		/* �v�f�������[�v */
		for (int i = 1; i <= element; i++) {
			/* �A�X�^���X�N�\�� */
			drowAstarisk(i);
			/* ���s�\�� */
			changeLen();
		}
	}
	/* ���� */
	LeftUnder* clone() const {
		return new LeftUnder(element);
	}

	/* ������\�� */
	std::string to_string() const {
		std::ostringstream os;
		/* ���b�Z�[�W�\�� */
		os << "LeftUnder(length:" << element << ")";
		return os.str();
	}

};