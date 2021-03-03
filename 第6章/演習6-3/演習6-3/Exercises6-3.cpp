/**
 * @file Exerises6-3.cpp
 * @brief ���K6-3	�O��int�^����a,b,c�̒����l�l�����߂�֐�med���쐬����B
					int med(int a, int b, int c){ ... }
 * @author shitashige
 * @date 20200314
 */



#include <iostream>

 /**
   * @fn
   * �����l�����߂�֐�
   * @brief �����𔻒肷��
   * @param[in] a ���萔�l
   * @param[in] b ���萔�l
   * @param[in] c ���萔�l
   * @return �ŏ��l
   */
int med(int a, int b, int c) {
	/* a�������l�Ȃ�a�����^�[�� */
	if ((a < b && c < a) || (b < a && a < c))
		return a;
	/* b�������l�Ȃ�b�����^�[�� */
	else if ((b < a && c < b) || (a < b && b < c))
		return b;
	/* c�������l�Ȃ�c�����^�[�� */
	else
		return c;
}


/**
  * @fn
  * ���C���֐�
  * @brief �����l�����߂�֐�
  * @return 0:����I��
  */
int main() {

	int inputNumber[3] = { 0 };	// ���͐��l
	int midNumber = 0;	// �߂萔�l

	/* ���͑����\�� */
	std::cout << "���l[1]����͂��Ă��������B\n";

	/* ���l���� */
	std::cin >> inputNumber[0];

	/* ���͑����\�� */
	std::cout << "���l[2]����͂��Ă��������B\n";

	/* ���l���� */
	std::cin >> inputNumber[1];
	/* ���͑����\�� */
	std::cout << "���l[3]����͂��Ă��������B\n";

	/* ���l���� */
	std::cin >> inputNumber[2];

	/* �ŏ��l���蔻�� */
	midNumber = med(inputNumber[0], inputNumber[1], inputNumber[2]);

	/* ���ʕ\�� */
	std::cout << "�����l��" << midNumber << "�ł��B\n";

	return 0;
}
