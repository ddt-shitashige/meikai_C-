/**
 * @file Exerises3-3.cpp
 * @brief ���K3-3	�E�Ɏ����悤�ɓ�̐����l��ǂݍ���ŁA�������ق��̐��ȏ�ő傫�����̐��ȉ��̑S�������A�����������珇�ɕ\������v���O�������쐬����B
 * @author shitashige
 * @date 20200105
 */

#include <ctime>
#include <cstdlib>
#include <iostream>
 /**
  * @fn
  * ���C���֐�
  * @brief ���͒l�̏����������珇�ɕ\�����Ă����v���O����
  * @return 0:����I��
  */
int main() {


	/*
	 * 2���̐��̐����l�����߂�
	 */
	 /* �V�[�h�����Z�b�g */
	srand((unsigned int)time(NULL));

	int inputNumberFront = 0;	// �O�̓��͐��l
	int inputNumberRear = 0;	// ��̓��͐��l

	/* �O�̓��͂𑣂����b�Z�[�W */
	std::cout << "����A�G";

	/* �O�̐��l���� */
	std::cin >> inputNumberFront;

	/* ��̓��͂𑣂����b�Z�[�W */
	std::cout << "����B�G";

	/* ��̐��l���� */
	std::cin >> inputNumberRear;

	/* �O�̓��͒l�̕����傫�������ꍇ */
	if (inputNumberFront > inputNumberRear) {
		/* ��̓��͂����Z���Ă����A�O�̓��͂Ɠ����ɂȂ�܂Ő��l�o�� */
		for (int i = inputNumberRear; i <= inputNumberFront; i++) {
			/* �������o�� */
			std::cout << i << " ";
		}
	}
	/* �O�̓��͒l�̕��������������ꍇ */
	else if (inputNumberRear > inputNumberFront) {
		/* �O�̓��͂����Z���Ă����A��̓��͂Ɠ����ɂȂ�܂Ő��l�o�� */
		for (int i = inputNumberFront; i <= inputNumberRear; i++) {
			/* �������o�� */
			std::cout << i << " ";
		}
	}
	/* ����ȊO */
	else{
		/* �������o�� */
		std::cout << inputNumberFront;
	}
	return 0;
}