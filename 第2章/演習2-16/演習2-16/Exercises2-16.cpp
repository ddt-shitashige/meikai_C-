/*
 * @file  Exerises2-16.cpp
 * @brief ���K2-16	����1�`12�̐����l�Ƃ��ēǂݍ���ŁA����ɑΉ�����G�߂�\������v���O�������쐬����B
 * @author shitashige
 * @date 20200101
 */
#include <iostream>

 /**
  * @fn
  * ���C���֐�
  * @brief �G�߂�\������֐�
  * @return 0:����I��
  */
int main() {

	const std::string sendSpringMessage = "�t�ł��B";	// �t���Ɠ`���郁�b�Z�[�W
	const std::string sendSummerMessage = "�Ăł��B";	// �Ă��Ɠ`���郁�b�Z�[�W
	const std::string sendAutumnMessage = "�H�ł��B";	// �H���Ɠ`���郁�b�Z�[�W
	const std::string sendWinterMessage = "�~�ł��B";	// �~���Ɠ`���郁�b�Z�[�W
	int inputNumber = 0;			// ���͂��ꂽ����

	/* �������͂𑣂� */
	std::cout << "1�`12�̐�������͂��Ă�������";

	/* ���l���� */
	std::cin >> inputNumber;

	/* �X�C�b�`���ɂāA���͐��l�ɂ���ĕ\�����镶�����ς��� */
	switch (inputNumber) {
			break;
		/* ������1�������ꍇ */
		case 1: std::cout << sendWinterMessage;
			break;
		/* ������2�������ꍇ */
		case 2: std::cout << sendWinterMessage;
			break;
		/* ������3�������ꍇ */
		case 3: std::cout << sendSpringMessage;
			break;
		/* ������4�������ꍇ */
		case 4: std::cout << sendSpringMessage;
			break;
		/* ������5�������ꍇ */
		case 5: std::cout << sendSpringMessage;
			break;
		/* ������6�������ꍇ */
		case 6: std::cout << sendSummerMessage;
			break;
		/* ������7�������ꍇ */
		case 7: std::cout << sendSummerMessage;
			break;
		/* ������8�������ꍇ */
		case 8: std::cout << sendSummerMessage;
			break;
		/* ������9�������ꍇ */
		case 9: std::cout << sendAutumnMessage;
			break;
		/* ������10�������ꍇ */
		case 10: std::cout << sendAutumnMessage;
			break;
		/* ������11�������ꍇ */
		case 11: std::cout << sendAutumnMessage;
			break;
		/* ������12�������ꍇ */
		case 12: std::cout << sendWinterMessage;
			break;
	}
	return 0;
}