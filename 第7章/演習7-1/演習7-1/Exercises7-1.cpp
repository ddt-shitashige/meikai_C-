/**
 * @file Exerises7-1.cpp
 * @brief ���K7-1	List7-2��&ptr�̕\����ǉ������v���O�������쐬����B
 * @author shitashige
 * @date 20200322
 */



#include <iostream>

using namespace std;

/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	int n = 135;	// ���ln

	/* ���̒l�\�� */
	cout << "n  :" << n << '\n';

	/* n�̃������Ԓn�\�� */
	cout << "&n  :" << &n << "�Ԓn\n";

	int* ptr = &n;	// n�̔Ԓn


	/* n�̃������Ԓn�\�� */
	cout << "ptr  :" << ptr << "�Ԓn\n";

	/* n�̒l�\�� */
	cout << "*ptr :" << *ptr << "\n";

	/* n�̃������Ԓn���i�[���Ă��郁�����Ԓn��\�� */
	cout << "&ptr :" << &ptr << "�Ԓn\n";


	return 0;
}