/**
 * @file Exerises6-22.cpp
 * @brief ���K6-22	����2������߂�C�����C���֐��A3������߂�C�����C���֐����쐬����
 *					inline double square(double x)
 *					inline double cube(double x)
 * @author shitashige
 * @date 20200322
 */


#include <iostream>


/**
  * @fn
  * absolute
  * @brief 2��l�ԋp
  * @param x ���lx
  * @return
  */
inline double square(double x) {

	return x*x;
}

/**
  * @fn
  * absolute
  * @brief ��Βl�ԋp
  * @param x ���lx
  * @return
  */
inline double cube(double x) {

	return x * x*x;
}

/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	/* ���b�Z�[�W�o�� */
	std::cout << "�l����͂��Ă��������B\n";

	int Number;	 // 1�ڂ̐��l

	/* �ŏ��l�ƍő�l�����[�U�[���� */
	std::cin >> Number;

	/* �ŏ��l�ԋp�֐��Ăяo�� */
	std::cout << "���͂������l��2���["<<square(Number)<<"]\n3���"<< cube(Number)<<"]\n";
	return 0;
}