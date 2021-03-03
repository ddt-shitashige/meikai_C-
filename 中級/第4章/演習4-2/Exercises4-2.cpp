/**
 * @file Exerises4-2.cpp
 * @brief ���K4-2�@�f�X�g���N�^�̋N���̏������m�F�ł���悤�ɁAList4-15�̃v���O�����������������v���O�������쐬����B
 * @author shitashige
 * @date 20200428
 */



#include<iostream>

using namespace std;


/* �N���XDerived�̋@��N���X */
class Base {
	int x;	// ��

public:
	Base(int a = 0) :x(a) { cout << "Base::x��" << x << "�ŏ�����\n"; }
	~Base(){ cout << "Base:�f�X�g���N�^\n"; }	// �f�X�g���N�^

};

/* �N���XDerived�Ƀ����o�Ƃ��Ċ܂܂��N���X */
class Memb {
	int x;

public:
	Memb(int a = 0) :x(a) { cout << "Memb::x��" << x << "�ŏ�����\n"; }
	~Memb() { cout << "Memb:�f�X�g���N�^\n"; }	// �f�X�g���N�^

};


/* �N���XDerived�̓N���XBase����h�� */
class Derived :public Base {
	int y; // y
	Memb m1;	// �����o�[1
	Memb m2;	// �����o�[2

	void say() { y = 0; cout << "Derived::y��" << y << "�ŏ�����\n"; };	// ���b�Z�[�W�\��

public:
	Derived() { say(); };	// �R���X�g���N�^
	Derived(int a, int b, int c) :m2(a), m1(b), Base(c) { say(); }	// �R���X�g���N�^
	~Derived() { cout << "Derived:�f�X�g���N�^\n"; }	// �f�X�g���N�^


};

int main() {
	Derived dl;	// �f���o�[�h
	/* ���b�Z�[�W�\�� */
	cout << "\n";
	Derived d2(1, 2, 3);	// �f���o�[�h2
}