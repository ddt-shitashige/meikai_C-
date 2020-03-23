/**
 * @file Exerises6-20.cpp
 * @brief ���K6-20	2��int�^����a,b�̍ŏ��l3��int�^����a,b,c�̍ŏ��l�����߂�B�ȉ��Ɏ������d�ɒ�`���ꂽ�֐��R���쐬����B
 * 					int min(int a, int b)
 * 					int min(int a, int b, int c)
 * @author shitashige
 * @date 20200322
 */


#include <iostream>


 /**
   * @fn
   * min
   * @brief �ŏ��l�ԋp
   * @param a ���la
   * @param b ���lb
   * @return
   */
int min(int a, int b) {

	/* a��b���r���āAa�����������a�����^�[�� */
	if (a < b)
		return a;
	/* b�����������b�����^�[�� */
	else
		return b;
}

/**
  * @fn
  * min
  * @brief �ŏ��l�ԋp
  * @param a ���la
  * @param b ���lb
  * @param c ���lc
  * @return
  */
int min(int a, int b, int c) {

	/* a��b��c���r���āAa�����������a�����^�[�� */
	if (a <= b && a <= c)
		return a;
	/* a��b��c���r���āAb�����������b�����^�[�� */
	else if (b <= a && b <= c)
		return b;
	/* a��b��c���r���āAc�����������c�����^�[�� */
	else if (c <= a && c <= b)
		return c;
}


/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {


	/* ���b�Z�[�W�o�� */
	std::cout << "�l��3���͂��Ă��������B\n";

	int firstNumber;	 // 1�ڂ̐��l
	int secondNumber;	 // 2�ڂ̐��l
	int thirdNumber;	 // 3�ڂ̐��l

	/* �ŏ��l�ƍő�l�����[�U�[���� */
	std::cin >> firstNumber >> secondNumber >> thirdNumber;

	/* �ŏ��l�ԋp�֐��Ăяo�� */
	std::cout << "1�Ԗڂ�2�Ԗڂ̍ŏ��l��[" << min(firstNumber, secondNumber) << "]�ł�\n1�Ԗڂ�2�Ԗڂ�3�Ԗڂ̍ŏ��l��[" << min(firstNumber, secondNumber, thirdNumber) << "]�ł�\n";
	return 0;
}