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
  * @brief �����𐶐����āA�\������֐��B
  * @return 0:����I��
  */
int main() {


	/*
	 * 1���̐��̐����l�����߂�B
	 */
	/* �����V�[�h������ */
	srand((unsigned int)time(NULL));

	int oneDigitPositiveValue = 0;	// 1���̐��̐����l
	
	/* ��������9�̂��܂�����߂鎖�ɂ��A�l��0�`8�̊ԂɂȂ� */
	oneDigitPositiveValue = rand() % 9;

	/* 0�`8�̊Ԃ̒l���C���N�������g���鎖�ɂ��A1�`9�̒l�ƂȂ� */
	oneDigitPositiveValue++;

	/* ���ʏo�� */
	std::cout << "1���̐��̐����l��" << oneDigitPositiveValue << "\n";

	
	/*
	 * 1���̕��̐����l�����߂�
	 */
	/* �V�[�h�����Z�b�g */
	srand((unsigned int)time(NULL));

	int oneDigitNegativeValue = 0;	// 1���̕��̐����l

	/* ��������9�̂��܂�����߁A-1����Z���鎖�ɂ��A�l��0�`-8�̊ԂɂȂ� */
	oneDigitNegativeValue = rand() % 9 * (-1);

	/* 0�`8�̊Ԃ̒l���f�C���N�������g���鎖�ɂ��A-1�`-9�̒l�ƂȂ� */
	oneDigitNegativeValue--;


	/* ���ʏo�� */
	std::cout << "1���̕��̐����l��" << oneDigitNegativeValue << "\n";


	/*
	 * 2���̐��̐����l�����߂�
	 */
	/* �V�[�h�����Z�b�g */
	srand((unsigned int)time(NULL));

	int twoDigitNegativeValue = 0;	// 2���̐��̐����l

	/* ��������90�̂��܂�����߂鎖�ɂ��A�l��0�`89�̊ԂɂȂ� */
	twoDigitNegativeValue = rand() % 90;

	/* 0�`89�̊Ԃ̒l��+10���鎖�ɂ��A10�`99�̒l�ƂȂ� */
	twoDigitNegativeValue += 10;


	/* ���ʏo�� */
	std::cout << "2���̐��̐����l��" << twoDigitNegativeValue << "\n";

	return 0;
}