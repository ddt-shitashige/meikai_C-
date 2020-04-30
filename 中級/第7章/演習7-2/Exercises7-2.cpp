/**
 * @file Exerises7-2.cpp
 * @brief ���K7-2�@List7-1�̃N���X�c�������������Ƀ����o�ϐ�print��ǉ�����B���A�����o�ϐ�print�́A�ȉ��̌`���̕\�����s�����̂Ƃ���B
 * @author shitashige
 * @date 20200430
 */


#include <iostream>

using namespace std;

/* �@��N���X1 */
class Base1 {
public:
	int x;	// �ϐ�x
	/* �R���X�g���N�^ */
	Base1(int a = 0) :x(a) {
		cout << "Base1::x��" << x << "�ɏ��������܂����B\n";
	}
	/* ������o�� */
	void print() { cout << "Base1�N���X�ł�:x=" << x << "\n"; }
};

/* �@��N���X2 */
class Base2 {
public:
	int x;
	Base2(int a = 0) :x(a) {
		/* ������o�� */
		cout << "Base2::x��" << x << "�ɏ��������܂���\n";
	}
	void print() {
		/* ������o�� */
		cout << "Base2�N���X�ł�:x=" << x << "\n";
	}
};

/* �h���N���X */
class Derived :public Base1, public Base2 {
	int y;
public:
	/* �R���X�g���N�^ */
	Derived(int a,int b,int c):y(c),Base2(a),Base1(b){
		/* ������o�� */
		cout << "Derived::y��" << y << "�ɏ��������܂����B\n";
	}
	void func(int a, int b) {
		Base1::x = a;
		Base2::x = b;
	}

	/* ������o�͊֐� */
	void print() {
		/* ������o�� */
		Base1::print();
		/* ������o�� */
		Base2::print();
		/* ������o�� */
		cout << "Derived�N���X�ł�:y=" << y << "\n";
	}

};


/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	/* �f���o�[�h��` */
	Derived z(1, 2, 3);
	/* �l�i�[ */
	z.func(1, 2);
	/* ������o�� */
	z.Base1::print();
	/* ������o�� */
	z.Base2::print();
	/* ������o�� */
	z.print();
}