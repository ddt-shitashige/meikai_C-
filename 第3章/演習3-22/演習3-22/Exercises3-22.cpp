
/**
 * @file Exerises3-22.cpp
 * @brief	n�e�̉������s���~�b�h��\������֐����쐬����i�E�}��4�i�̗�j�B��i�s�ڂɂ�i%10�ɂ���ē����鐔����\�����鎖�B
 * @author shitashige
 * @date 20200127
 */


#include "iostream"

/**
 * @fn
 * ���C���֐�
 * @brief �񐔂̋t�s���~�b�h���쐬����֐�
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
		/* ���͐��̍s����񂩂�-1�ɂ��鎖�ɂ���āA���Ғl�ɉ������`�ƂȂ� */
		for (int j = 1; j <= inputCount * 2 - i; j++) {
			/* �����̋󔒍s�͗�-1�ɔ�Ⴕ�Ă���̂ŁA�񐔕��󔒂����� */
			if (i > j) {
				/* �����o�� */
				std::cout << " ";
			}
			else {
				/* �����o�� */
				std::cout << i % 10;
			}
		}
		/* ���s */
		std::cout << "\n";
	}
	return 0;
}