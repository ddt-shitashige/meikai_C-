/**
 * @file Exerises3-20.cpp
 * @brief	List3-4�͍��������p�̒��p�O�p�`��\������v���O�����ł������B
 			���p�����㑤�A�E�㑤�E�����̒��p�O�p�`��\������v���O���������ꂼ��쐬����
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

	/* �����o�� */
	std::cout << "����\n\n";

	/* ���͐��̗񕪃��[�v���� */
	for (int i = 0; i < inputCount; i++) {
		/* ���͐��̍s�����[�v���� �������A�����l��i�ɂ��邱�Ƃɂ��A�o�͂��鐔��1�����炷 */
		for (int j = i; j < inputCount; j++) {
			/* �����o�� */
			std::cout << "*";
	}
		/* ���s */
		std::cout << "\n";
	}

	/* �����o�� */
	std::cout << "\n\n\n�E��\n\n";

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

	/* �����o�� */
	std::cout << "\n\n\n�E��\n\n";

	/* ���͐��̗񕪃��[�v���� */
	for (int i = 1; i <= inputCount; i++) {
		/* ���͐��̍s�����[�v���� */
		for (int j = 1; j <= inputCount; j++) {
			/* ���͂����������i���������Ƃɂ��A�E�������p�ȎO�p�`���쐬�ł���B */
			if (j > inputCount - i) {
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