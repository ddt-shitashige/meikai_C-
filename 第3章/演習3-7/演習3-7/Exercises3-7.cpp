/**
 * @file Exerises3-7.cpp
 * @brief ���K3-7	�E�Ɏ����悤�ɁA���̐����l��ǂݍ���ŁA���̌������o�͂���v���O������������������B
 * @author shitashige
 * @date 20200111
 */


#include<iostream>

/**
 * @fn
 * ���C���֐�
 * @brief ���������߂�֐�
 * @return 0:����I��
 */
int main() {
	int inputNumber;		// ���͐����l

	/* ���b�Z�[�W�\�� */
	std::cout << "���̐����l";

	/* ������ */
	std::cin >> inputNumber;

	int roopCount = 1;	// ���[�v�J�E���g

	/* ���[�v�J�E���g���J�E���g�A�b�v���閳�����[�v */
	for(;;roopCount++){

		/* ���͂��������̌���1������ */
		inputNumber = inputNumber / 10;
		/* ���͂���������10�Ŋ�����0�ɂȂ�܂Ŋ��� */
		if (inputNumber == 0) {
			break;
		}
	}

	/* �����o�� */
	std::cout<<"���̌���"<< roopCount<<"�ł��B";

	return 0;
}

