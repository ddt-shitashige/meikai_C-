/**
 * @file Exerises1-13.cpp
 * @brief ���K1-13	�ȉ��Ɏ����v���O�������쐬����B
					1.1���̐��̐����l(���Ȃ킿1�ȏ�9�ȉ��̒l)�������_���ɐ������ĕ\���B
					2.1���̕��̐����l(���Ȃ킿1�ȏ�9�ȉ��̒l)�������_���ɐ������ĕ\���B
					3.1���̐��̐����l(���Ȃ킿10�ȏ�99�ȉ��̒l)�������_���ɐ������ĕ\���B
 * @author shitashige
 * @date 20191211
 */

#include <ctime>
#include <cstdlib>
#include <iostream>
 /**
  * @fn
  * ���C���֐�
  * @brief �w�b�_���C���N���[�h����w�߂����@���Ă���ꍇ�̓���m�F
  * @return 0:����I��
  */
int main() {


	/*
	 * 1���̐��̐����l�����߂�B
	 */
	/* �����V�[�h������ */
	srand((unsigned int)time(NULL));

	int oneDigitPositiveValue = 0;	// 1���̐��̐����l
	
	/* ���̗����������ƁA0���o�邱�Ƃ�����̂ŁA0�������ׂɁAdowhile���Ŕ����� */
	do {
		/* 10�Ŋ��邱�Ƃɂ��A1���̗����ݒ� */
		oneDigitPositiveValue = rand() % 10;
	}while(oneDigitPositiveValue == 0);

	/* ���ʏo�� */
	std::cout << "1���̐��̐����l��" << oneDigitPositiveValue << "\n";

	
	/*
	 * 1���̕��̐����l�����߂�
	 */
	/* �V�[�h�����Z�b�g */
	srand((unsigned int)time(NULL));

	int oneDigitNegativeValue = 0;	// 1���̕��̐����l

	/* ���̗����������ƁA0���o�邱�Ƃ�����̂ŁA0�������ׂɁAdowhile���Ŕ����� */
	do {
		/* -1���|���邱�ƂŁA���l�̗����ݒ� */
		oneDigitNegativeValue = rand() % 10 * (-1);
	} while (oneDigitPositiveValue == 0);

	/* ���ʏo�� */
	std::cout << "1���̕��̐����l��" << oneDigitNegativeValue << "\n";


	/*
	 * 2���̐��̐����l�����߂�
	 */
	/* �V�[�h�����Z�b�g */
	srand((unsigned int)time(NULL));

	int twoDigitNegativeValue = 0;	// 2���̐��̐����l

	/* ���ʂ�1���������ꍇ�͂�����x��蒼�����[�v */
	do {
		/* �����ݒ� */
		twoDigitNegativeValue = rand() % 100;

	} while (twoDigitNegativeValue <= 10);

	/* ���ʏo�� */
	std::cout << "2���̐��̐����l��" << twoDigitNegativeValue << "\n";

	return 0;
}