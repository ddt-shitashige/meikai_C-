/**
 * @file Exerises6-10.cpp
 * @brief ���K6-10	�u���̐����l�F�v�ƕ\�����āA�L�[�{�[�h���琳�̐����l��ǂݍ���ŁA���̒l��ԋp����֐�read_pint���쐬����B0�╉�̒l�����͂��ꂽ��ē��͂����邱�ƁB�E�̗�ł����15��ԋp����B
					int reat_pint()
 * @author shitashige
 * @date 20200321
 */


#include <iostream>

 /**
   * @fn
   * ���l���͊֐��B
   * @brief 0�ȏ�̐��l����͂�����B
   * @return
   */
int read_pint() {
	int inputNumber;	// ���͒l


	do {
		/* ���b�Z�[�W�o�� */
		std::cout << "���̐����l�F";

		/* ���l���� */
		std::cin >> inputNumber;

		/* ���͒l��0�ȉ��Ȃ烋�[�v */
	} while (inputNumber <= 0);


	return inputNumber;
}

/**
 * @fn
 * ���C���֐�
 * @brief ���l���͊֐����Ăяo���B
 * @return 0:����I��
 */
int main() {

	/* a�l���� */
	std::cout << "���͂������l��" << read_pint() << "�ł��B\n";

	return 0;
}