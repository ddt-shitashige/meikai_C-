/**
 * @file Exerises3-2.cpp
 * @brief ���K3-2	2���̐����l(10�`99)�𓖂Ă����鐔���ăQ�[�����쐬����B
 * @author shitashige
 * @date 20200105
 */

#include <ctime>
#include <cstdlib>
#include <iostream>
 /**
  * @fn
  * ���C���֐�
  * @brief �����ăQ�[�����s���֐�
  * @return 0:����I��
  */
int main() {


	/*
	 * 2���̐��̐����l�����߂�
	 */
	 /* �V�[�h�����Z�b�g */
	srand((unsigned int)time(NULL));

	int twoDigitNegativeValue = 0;	// 2���̐��̐����l
	int inputNumber = 0;			// ���͐��l

	/* ���ʂ�1���������ꍇ�͂�����x��蒼�����[�v */
	do {
		/* �����ݒ� */
		twoDigitNegativeValue = rand() % 100;

	} while (twoDigitNegativeValue <= 10);

	/* ���l��������܂ő����郋�[�v */
	do {
		/* ���͂𑣂����b�Z�[�W */
		std::cout << "�������ȁH\n";
		/* ���l���� */
		std::cin >> inputNumber;

		/* ���l�`�F�b�N */
		if (inputNumber > twoDigitNegativeValue) {
			/* ���͐��l�������������̂ŁA�����m�点�郁�b�Z�[�W�\�� */
			std::cout << "�����Ə����Ȑ�����\n";
		}
		/* ���l�`�F�b�N */
		else if (inputNumber < twoDigitNegativeValue) {
			/* ���͐��l���傫�������̂ŁA�����m�点�郁�b�Z�[�W�\�� */
			std::cout << "�����Ƒ傫�Ȑ�����\n";
		}
	} while (inputNumber != twoDigitNegativeValue);

	/* ������`���郁�b�Z�[�W�\�� */
	std::cout << "�����ł�";

	return 0;
}