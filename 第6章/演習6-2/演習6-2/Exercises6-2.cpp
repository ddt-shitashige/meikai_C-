/**
 * @file Exerises6-2.cpp
 * @brief ���K6-2	�O��int�^����a,b,c�̍ŏ��l�����߂�֐�min���쐬����B
					int min(int a, int b, int c){ ... }
 * @author shitashige
 * @date 20200312
 */



#include <iostream>

 /**
   * @fn
   * �ŏ��l�����߂�֐�
   * @brief �����𔻒肷��
   * @param[in] a ���萔�l
   * @param[in] b ���萔�l
   * @param[in] c ���萔�l
   * @return �ŏ��l
   */
int min(int a, int b, int c) {
	/* a���ŏ��l�Ȃ�a�����^�[�� */
	if (a < b && a < c)
		return a;
	/* b���ŏ��l�Ȃ�b�����^�[�� */
	else if (b < a && b < c)
		return b;
	/* c���ŏ��l�Ȃ�c�����^�[�� */
	else
		return c;

}


/**
  * @fn
  * ���C���֐�
  * @brief �ŏ��l�����߂�֐�
  * @return 0:����I��
  */
int main() {

	int inputNumber[3] = { 0 };	// ���͐��l
	int minNumber = 0;	// �߂萔�l

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
	minNumber = min(inputNumber[0], inputNumber[1], inputNumber[2]);

	/* ���ʕ\�� */
	std::cout << "�ŏ��l��" << minNumber << "�ł��B\n";

	return 0;
}
