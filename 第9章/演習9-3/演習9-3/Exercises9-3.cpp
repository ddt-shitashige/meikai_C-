/**
 * @file Exerises9-3.cpp
 * @brief ���K9-3	x��2������߂�֐��e���v���[�gsquare���쐬����B
 *					template <class Type> Type square (Type x)
 * @author shitashige
 * @date 20200327
 */


#include <iostream>


 /**
  * @fn
  * square
  * @brief ���l�̊K����s��
  * @param x 1���l
  * @return
  */
template <class Type> Type square (Type x) {
	return x * x;
}



/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {


	int inputNumber;	// ���͐��l

	/* ���b�Z�[�W�\�� */
	std::cout << "���l����͂��Ă��������B";

	/* ��������� */
	std::cin >> inputNumber;

	/* ���ʕ\�� */
	std::cout << "���ʁF" << square(inputNumber);
}