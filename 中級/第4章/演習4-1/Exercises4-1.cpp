/**
 * @file Exerises4-1.cpp
 * @brief ���K4-1�@List4-15�̃N���XBase�̃R���X�g���N�^����L��2�ɏ����������v���O�����ō쐬�����A�{�y�[�W�ŊJ�݂���Ă�����e���m�F����B
 * @author shitashige
 * @date 20200428
 */


#include<iostream>

using namespace std;

/* �@��N���X */
class Base {
	int x;
public:
	/* �R���X�g���N�^ */
	Base(int xx=99); x(xx) { cout << "Base::x��"<<x<<"�ŏ������B\n"; }
	/* x�̃Q�b�^�[ */
	int get_x()const { return x; }
};

/* �h���N���X */
class Derived :public Base {
};


int main() {

	Derived d;	// �f���o�[�h

	cout<<"d.get_x() = "<<d.get_x()<<"\n"
}