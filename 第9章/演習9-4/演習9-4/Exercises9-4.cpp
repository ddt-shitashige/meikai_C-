/**
 * @file Exerises9-4.cpp
 * @brief ���K9-4	��l�̍ŏ��l�����߂�֐��e���v���[�gminof���쐬����B
 * @author shitashige
 * @date 20200327
 */


#include <iostream>


 /**
  * @fn
  * square
  * @brief ���l�̍ŏ��l�����^�[������
  * @param firstNumber 1���l
  * @param secondNumber 2���l
  * @return
  */
template <class Type> Type minof (Type firstNumber, Type secondNumber) {
	/* firstNumber��secondNumber���r���A������������ԋp���� */
	return firstNumber > secondNumber ? secondNumber : firstNumber;
}



/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {


	int firstInputNumber;	// ���͐��l1	
	int secondInputNumber;	// ���͐��l2	

	/* ���b�Z�[�W�\�� */
	std::cout << "���l����͂��Ă��������B";

	/* ��������� */
	std::cin >> firstInputNumber;

	/* ���b�Z�[�W�\�� */
	std::cout << "���l����͂��Ă��������B";

	/* ��������� */
	std::cin >> secondInputNumber;
	/* ���ʕ\�� */
	std::cout << "���ʁF" << minof(firstInputNumber, secondInputNumber);
}