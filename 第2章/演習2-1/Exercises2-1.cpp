/**
 * @file Exerises2-1.cpp
 * @brief ���K2-1	�����l��ǂݍ���ŁA���̐�Βl��\������v���O�������쐬����B
 * @author shitashige
 * @date 20191218
 */

#include <iostream> 

/**
 * @fn
 * ���C���֐�
 * @brief ��Βl��\������֐�
 * @return 0:����I��
 */
int main() {

	int inputNumber = 0;		// ���[�U�[���͂�������
	int absoluteValue = 0;		// ��Βl

	/* ���[�U�[���͂𑣂����b�Z�[�W��\�� */
	std::cout << "�����l";

	/* ���[�U�[���͑ҋ@ */
	std::cin >> inputNumber;

	/* if���ɂ��A�������𔻒f */
	if (inputNumber > 0) {
		/* ���l�Ȃ炻�̂܂ܐ�Βl�ɂ��� */
		absoluteValue = inputNumber;
	}
	else if (inputNumber < 0) {
		/* ���l�Ȃ�-1���|���Đ�Βl�� */
		absoluteValue = -inputNumber;
	}
	else;
		/* 0�͂��̂܂܂ɂ��� */

	/* �o�͕\�� */
	std::cout << "���̐�Βl��" << absoluteValue << "�ł�\n";

	return 0;
}
