/**
 * @file Exerises6-5.cpp
 * @brief ���K6-5	1����n�܂ł̑S�����̘a�����߂ĕԋp����֐�sumup���쐬����B
					int sumup(int n)
 * @author shitashige
 * @date 20200316
 */



#include <iostream>

 /**
   * @fn
   * �����̘a�����߂�֐�
   * @brief �����̘a�����߂�
   * @param[in] n ���Z���鐮��
   * @return 1����n�܂ł̘a
   */
int sumup(int n) {

	int sumNumber = 0;	// ���Z���l

	/* n�񐔉��Z */
	for (int i = 0; i <= n; i++) {
		/* ���Z */
		sumNumber += i;
	}
	return sumNumber;
}


/**
  * @fn
  * ���C���֐�
  * @brief �~�̖ʐς����߂�֐�
  * @return 0:����I��
  */
int main() {

	int inputNumber = 0;	// ���͐��l
	int sumNumber = 0;	// ���Z���l

	/* ���͑����\�� */
	std::cout << "���l����͂��Ă��������B\n";

	/* ���l���� */
	std::cin >> inputNumber;

	/* �ŏ��l���蔻�� */
	sumNumber = sumup(inputNumber);

	/* ���ʕ\�� */
	std::cout << "�S�����̘a��" << sumNumber << "�ł��B\n";

	return 0;
}
