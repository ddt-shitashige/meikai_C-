/*
 * @file  Exerises2-13.cpp
 * @brief ���K2-13	��̐����l��ǂݍ���ō~��(�傫����)�ɕ��ѕς���v���O�������쐬����
 * @author shitashige
 * @date 20191229
 */
#include <iostream>

 /**
  * @fn
  * ���C���֐�
  * @brief �~���ɕ��ёւ��郁�\�b�h
  * @return 0:����I��
  */
int main() {
	int inputNumberFirst = 0;		// �ŏ��ɓ��͂��ꂽ����
	int inputNumberSecond = 0;		// 2�Ԗڂɓ��͂��ꂽ����B
	int cacheNumber = 0;			// �ꎞ�ۑ��ԍ�

	/* ���[�U�[�ɓ��͂𑣂����b�Z�[�W */
	std::cout << "�������͂�2��A���ōs���Ă��������B";

	/* �������� */
	std::cin >> inputNumberFirst;

	/* �������� */
	std::cin >> inputNumberSecond;

	/*
	 * �~�����ёւ�����
	 */
	 /* �ŏ��ɓ��͂�����������Ԗڂɓ��͂���������菬������Βl�����ւ��� */
	if (inputNumberFirst < inputNumberSecond) {
		/* �ꎞ�ۑ��ԍ��ɍŏ��ɓ��͂���������ێ����� */
		cacheNumber = inputNumberFirst;
		/* �ŏ��ɓ��͂���������2�Ԗڂɓ��͂������������� */
		inputNumberFirst = inputNumberSecond;
		/* �ꎞ�ۑ��ԍ��̐��l��2�Ԗڂɓ��͂��ꂽ�����ɓ���� */
		inputNumberSecond = cacheNumber;
	}

	std::cout << "�~���ɕ��ёւ������ʁA" << inputNumberFirst << "," << inputNumberSecond << "�ƂȂ�܂����B";

	return 0;
}