#include<iostream>
#include"human.h"
#include"computer.h"

/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {

	Human human;  // �l
	Computer computer; // �R���s���[�^�[
	int inputnumber;	// ���͐��l

	/* ���b�Z�[�W�\�� */
	std::cout << "0�`2����͂��Ă�������\n";
	/* �v�f�i�[ */
	std::cin >> inputnumber;
	/* ���l�i�[ */
	human.InputElement(inputnumber);
	/* ���l�i�[ */
	computer.SetElement();

	/* ������o�� */
	std::cout << "�l�ԁF" << human.element << "\nCOM:" << computer.element;
}