/**
 * @file Exerises6-4.cpp
 * @brief ���K6-4	���ar�̖ʐς����߂ĕԋp����֐�circ_area���쐬����B�~������3.14�Ƃ���B
					int circ_aarea(double r){ ... }
 * @author shitashige
 * @date 20200315
 */



#include <iostream>

 /**
   * @fn
   * �~�̖ʐς����߂�֐�
   * @brief �~�̖ʐς����߂�
   * @param[in] r ���a
   * @return �ŏ��l
   */
double circ_area(double r) {
	const double pie = 3.14; // �~����

	/* �ʐς�Ԃ� */
	return r*r*pie;
}


/**
  * @fn
  * ���C���֐�
  * @brief �~�̖ʐς����߂�֐�
  * @return 0:����I��
  */
int main() {

	int inputNumber =  0 ;	// ���͐��l
	double area = 0;	// �ʐ�

	/* ���͑����\�� */
	std::cout << "���l����͂��Ă��������B\n";

	/* ���l���� */
	std::cin >> inputNumber;

	/* �ŏ��l���蔻�� */
	area = circ_area(inputNumber);

	/* ���ʕ\�� */
	std::cout << "�~�̖ʐς�" << area << "�ł��B\n";

	return 0;
}
