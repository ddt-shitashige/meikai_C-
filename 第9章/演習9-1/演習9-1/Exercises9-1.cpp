/**
 * @file Exerises9-1.cpp
 * @brief ���K9-1	�ċA�ďo����p�����ɁA�֐�factorial����������B
 * @author shitashige
 * @date 20200326
 */


#include <iostream>

 /**
  * @fn
  * ChangePointer
  * @brief ���l�̊K����s��
  * @param firstPointer 1�Ԗڂ̃|�C���^
  * @param secondPointer 2�Ԗڂ̃|�C���^
  * @return
  */
int factorial(int n) {

	int returnNumber = 1;	// �ԋp���l
	/* �w�肳�ꂽ��Z���[�v */
	for (int i = 2; i <= n; i++) {
		/* ��Z���Ă��� */
		returnNumber *= i;
	}
	return returnNumber;
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
	std::cout << "���ʁF" << factorial(inputNumber);
}