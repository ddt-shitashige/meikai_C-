/**
 * @file Exerises2-6.cpp
 * @brief ���K2-7	2�̎����l��ǂݍ���ŁA�傫�����̒l��\������v���O�������쐬����B
 * @author shitashige
 * @date 20191223
 */
#include <iostream>

/**
 * @fn
 * ���C���֐�
 * @brief �傫�����̒l��\������v���O����
 * @return 0:����I��
 */
int main() {
	int inputNumberFront = 0;		// ���͕����O��
	int inputNumberRear = 0;		// ���͕������


	/* ����a�̓��͂𑣂� */
	std::cout << "����a����͂��Ă��������B\n";
	/* ���[�U�[�ɓ��͂����� */
	std::cin >> inputNumberFront;

	/* ����b�̓��͂𑣂� */
	std::cout << "����b����͂��Ă��������B\n";
	/* ���[�U�[�ɓ��͂����� */
	std::cin >> inputNumberRear;

	std::string resultString;		// ���ʕ�����

	/* ���l�������ꍇ�̍l�� */
	if (inputNumberFront == inputNumberRear) {
		/* �����}�� */
		resultString = "����܂���B";
	}
	else {
		resultString = inputNumberFront < inputNumberRear ? "b�ł��B" : "a�ł��B";
	}

	/* ���ʕ\�� */
	std::cout << "�傫�����̐��l�́A" << resultString;

	return 0;

}