/**
 * @file Exerises3-19.cpp
 * @brief	n�c�̐����`��\������v���O�������쐬����B�E�Ɏ����̂�n��3�̎��̎��s���ʂł���B
 * @author shitashige
 * @date 20200122
 */

#include "iostream"

/**
 * @fn
 * ���C���֐�
 * @brief *�̐����`��\������֐�
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
		/* ���͐��̍s�����[�v���� */
		for (int j = 1; j <= inputCount; j++) {
			/* �����o�� */
			std::cout << "*";
		}
		/* ���s */
		std::cout << "\n";
	}
}