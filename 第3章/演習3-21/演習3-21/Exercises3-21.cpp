/**
 * @file Exerises3-21.cpp
 * @brief	n�e�̃s���~�b�h��\������v���O�������쐬����(�E�}��4�i�̗�)
			��i�s�ڂɂ�(i-1)*2+1��*�L����\�����鎖
			(�ŏI�s�ł����n�s�ڂɂ�(n-1)*2+1��*�L�����\�����邱�ƂɂȂ�j
 * @author shitashige
 * @date 20200123
 */


#include "iostream"

/**
 * @fn
 * ���C���֐�
 * @brief *�̃s���~�b�h��\������֐�
 * @return 0:����I��
 */

int main() {

	int inputCount;		// ���̓J�E���g

	/* �����o�� */
	std::cout << "���l����͂��Ă��������B";
	/* ���l���� */
	std::cin >> inputCount;

	/* ���͐��̗񕪃��[�v���� */
	for (int i = 1; i <= inputCount; i++) {
		/* ���͐��̍s��+���݂̗񐔕����[�v����(�������邱�ƂŃs���~�b�h�̉E�����J�o�[�ł���) */
		for (int j = 1; j < inputCount + i; j++) {
			/* ���̓J�E���g���A-1���邱�ƂŃs���~�b�h�̍����̎n�_�����肷�� */
			if (inputCount - i < j) {
				/* �����o�� */
				std::cout << "*";
			}
			else {
				/* �����o�� */
				std::cout << " ";
			}
		}
		/* ���s */
		std::cout << "\n";
	}

}