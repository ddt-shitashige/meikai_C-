/**
 * @file Exerises7-5.cpp
 * @brief ���K7-5�@List7-14�̊e�N���X�Ƀf�X�g���N�^��ǉ����āA�I�u�W�F�N�g��̂̏����̊m�F���s���B
 * @author shitashige
 * @date 20200430
 */

#include <iostream>

using namespace std;

/* V1�N���X */
class V1 {
public:
	V1() { cout << "V1��������\n"; }
	~V1() { cout << "V1���I��\n"; }
};

/* V2�N���X */
class V2 {
public:
	V2() { cout << "V2��������\n"; }
	~V2() { cout << "V2���I��\n"; }

};

/* X�N���X */
class X :virtual public V1, virtual public V2 {
public:
	X() { cout << "X��������\n"; }
	~X() { cout << "X���I��\n"; }
};

/* Y�N���X */
class Y :virtual public V2, virtual public V1{
public:
	Y() { cout << "Y��������\n"; }
	~Y() { cout << "Y���I��\n"; }

};

/* Z�N���X */
class Z :public X, public Y{
public:
	Z() { cout << "Z��������\n"; }
	~Z() { cout << "Z���I��\n"; }

};

int main() {
	Z dummy;
}