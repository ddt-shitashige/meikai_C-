/**
 * @file Exerises2-11.cpp
 * @brief ���K2-11	�L�[�{�[�h����ǂݍ���3�̐����̒����l�����߂ĕ\������v���O�������쐬����B
					���Ⴆ��2,3,1�̒����l��2�ŁA1,2,1�̒����l��1�ŁA3,3,3�̒����l��3�ł���B�B
 * @author shitashige
 * @date 20191225
 */
#include <iostream>
/**
 * @fn
 * ���C���֐�
 * @brief 3�̐�������͂����Ē����l�����߂郁�\�b�h�B
 * @return 0:����I��
 */
int main() {
	int firstInputNumber = 0;	// 1�Ԗڂɓ��͂��ꂽ����
	int secondInputNumber = 0;	// 2�Ԗڂɓ��͂��ꂽ����
	int thirdInputNumber = 0;	// 3�Ԗڂɓ��͂��ꂽ����
	int medianResult = 0;		// �ŏ�����
	int maximumResult = 0;		// �ő匋��

	/* ���[�U�[�ɓ��͂𑣂����b�Z�[�W */
	std::cout << "������3�A���œ��͂��Ă�������";

	/* ��������͂����� */
	std::cin >> firstInputNumber >> secondInputNumber >> thirdInputNumber;

	/* firstInputNumber�� secondInputNumber���r���āA����������medianResult�Ɋi�[���� */
	medianResult = firstInputNumber < secondInputNumber ? firstInputNumber : secondInputNumber;

	/* minimumResukt��thirdInputNumber���r���āA����������medianResult�Ɋi�[���� */
	medianResult = medianResult < thirdInputNumber ? medianResult : thirdInputNumber;

	/* firstInputNumber�� secondInputNumber���r���āA�傫������maximumResult�Ɋi�[���� */
	maximumResult = firstInputNumber < secondInputNumber ? secondInputNumber : firstInputNumber;

	/* minimumResukt��thirdInputNumber���r���āA�傫������maximumResult�Ɋi�[���� */
	maximumResult = maximumResult < thirdInputNumber ? thirdInputNumber : maximumResult;
	
	/* ������o�͂�����e��`���镶���� */
	std::cout<<"�����l��";

	/* �����l������΁A����͒����l�ɂȂ�̂ŁA���̐��l���o�� */
	if (firstInputNumber == secondInputNumber) {
		/* ���ʏo�� */
		std::cout<< firstInputNumber <<"�ł��B";
		/* �Ō�̕����o�͂����̂ŁA���\�b�h�I�� */
		return 0;
	}
	/* �����l������΁A����͒����l�ɂȂ�̂ŁA���̐��l���o�� */
	else if (firstInputNumber == thirdInputNumber) {
		/* ���ʏo�� */
		std::cout << firstInputNumber << "�ł��B";
		/* �Ō�̕����o�͂����̂ŁA���\�b�h�I�� */
		return 0;
	}
	/* �����l������΁A����͒����l�ɂȂ�̂ŁA���̐��l���o�� */
	else if (secondInputNumber == thirdInputNumber) {
		/* ���ʏo�� */
		std::cout << secondInputNumber << "�ł��B";
		/* �Ō�̕����o�͂����̂ŁA���\�b�h�I�� */
		return 0;
	}


	/* 1�Ԗڂɓ��͂��������������l�ł���΂��̒l���o�� */
	if (firstInputNumber != medianResult && firstInputNumber != maximumResult) {
		/* ���ʏo�� */
		std::cout << firstInputNumber << "�ł��B";
	}
	/* 2�Ԗڂɓ��͂��������������l�ł���΂��̒l���o�� */
	else if (secondInputNumber != medianResult && secondInputNumber != maximumResult) {
		/* ���ʏo�� */
		std::cout << secondInputNumber << "�ł��B";
	}
	/* 3�Ԗڂɓ��͂��������������l�ł���΂��̒l���o�� */
	else if (thirdInputNumber != medianResult && thirdInputNumber != maximumResult) {
		/* ���ʏo�� */
		std::cout << thirdInputNumber << "�ł��B";
	}


	return 0;
}