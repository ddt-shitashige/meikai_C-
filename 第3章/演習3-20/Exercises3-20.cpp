/**
 * @file Exerises3-20.cpp
 * @brief	
 * @author shitashige
 * @date 20200123
 */

#include "iostream"

 /**
  * @fn
  * ���C���֐�
  * @brief *�̒��p�O�p�`��\������֐�
  * @return 0:����I��
  */
int main() {

	int inputCount;		// ���̓J�E���g

	/* �����o�� */
	std::cout << "���l����͂��Ă��������B";
	/* ���l���� */
	std::cin >> inputCount;

	/* ���͐��̗񕪃��[�v���� */
	for (int i = 0; i < inputCount; i++) {
		/* ���͐��̍s�����[�v���� */
		for (int j = 0; j < inputCount; j++) {
			/* �񐔂��s���𒴂��Ă��Ȃ�������*�}�[�N���o�� */
			if (i <= j) {
				/* �����o�� */
				std::cout << "*";
			}
			/* �񐔂��s���𒴂��Ă�����󔒂��o�� */
			else {
				/* �����o�� */
				std::cout << " ";

			}
		}
		/* ���s */
		std::cout << "\n";
	}
}