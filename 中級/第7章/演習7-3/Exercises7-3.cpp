/**
 * @file Exerises7-3.cpp
 * @brief ���K7-3�@���㒼�p�̓񓙕ӎO�p�`RectEquilTriangleLU�ƉE�����p��RectEqquilTriangleRB���쐬����
 * @author shitashige
 * @date 20200430
 */

#include<string>
#include<sstream>
#include<iostream>

/* �}�`�N���X */
class Shape {
public:

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
	void changeLen()const {
		/* ������o�� */
		std::cout << "\n";
	}
public:
	/* �f�o�b�O�p���\�� */
	void debug() const {
	}
};

/* �E�������p�Ȃ��� */
class RectEqquilTriangleRB :public::Triangle {

	int element;	// �v�f��

public:
	/* �R���X�g���N�^ */
	RectEqquilTriangleRB(int x) : element(x) {}

	/* �G�� */
	void draw() const {
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
	RectEqquilTriangleRB* clone() const {
		return new RectEqquilTriangleRB(element);
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
class RectEquilTriangleLU :public::Triangle {

	int element;	// �v�f��

public:
	/* �R���X�g���N�^ */
	RectEquilTriangleLU(int x) : element(x) {}

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
	RectEquilTriangleLU* clone() const {
		return new RectEquilTriangleLU(element);
	}
	/* ������\�� */
	std::string to_string() const {
		std::ostringstream os;
		/* ���b�Z�[�W�\�� */
		os << "LeftTop(length:" << element << ")";
		return os.str();
	}

};

/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	int element;// �v�f

	/* ������o�� */
	std::cout << "�v�f�����";
	/* ���l���� */
	std::cin >> element;

	Shape* shape[] = {
	new RectEqquilTriangleRB(element),
	new RectEquilTriangleLU(element),
	};

	/* �v�f�������[�v */
	for (int i = 0; i < sizeof(shape) / sizeof(shape[0]); i++) {
		/* ������o�� */
		std::cout << "shape[" << i << "]\n";
		/* ���ʏo�� */
		shape[i]->print();
		/* ������o�� */
		std::cout << "\n";
	}

	/* �v�f�������[�v */
	for (int i = 0; i < sizeof(shape) / sizeof(shape[0]); i++) {
		/* �������J�� */
		delete shape[i];
	}
}