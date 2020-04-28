/**
 * @file Exerises4-3.cpp
 * @brief ���K4-3�@List4-12�̃N���XBase�^��Derived�^�ɑ΂��āA�A�b�v�L���X�g�ƃ_�E���L���X�g�����݂�v���O�������쐬����BList4-22���Q�l�ɂ��鎖�B
 * @author shitashige
 * @date 20200428
 */




#include <iostream>

/* �@��N���X */
class Base{
	int a;	// �ϐ�a
	int b;	// �ϐ�b

public:
	Base(int aa, int bb) :a(aa), b(bb) {};
	void func() const {
		/* ���b�Z�[�W�\�� */
		std::cout << "a=" << a << "\n";
	}
};

/* �h���N���X */
class Derived :public Base {
	int x;	// �ϐ�x
public:
	Derived(int aa, int bb, int xx) :Base(aa, bb), x(xx) {}

	void  method() const {
		func();
		/* ���b�Z�[�W�\�� */
		std::cout << "x = " << x << '\n';
	}
};

/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int  main() {
	/* �A�b�v�L���X�g */
	Base *base=new Derived(1,2,3);	// �x�[�X
	Derived* derived;	// �f���o�[�h

	/* ���b�Z�[�W�\�� */
	base->func();


	/* �_�E���L���X�g */
	derived = static_cast<Derived*>(base);

	/* ���b�Z�[�W�\�� */
	std::cout << "�_�E���L���X�g��F\n";

	/* �l�\�� */
	derived->func();
	derived->method();

	/* �������J�� */
	delete base;
}