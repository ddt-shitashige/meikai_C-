/**
 * @file Exerises5-10.cpp
 * @brief ���K5-10	4�s3��̍s���3�s4��̍s��̐ς����߂�v���O�������쐬����B�e�\���v�f�̒l�̓L�[�{�[�h����ǂݍ��ނ��ƁB
 * @author shitashige
 * @date 20200308
 */
#include <iostream>

 /**
  * @fn
  * ���C���֐�
  * @brief �s��̐ς����߂�֐�
  * @return 0:����I��
  */
int main() {

	int firstQueue[3][4] = { 0 };	// �ŏ��̍s��
	int secondQueue[4][3] = { 0 };	// 2�߂̍s��
	int answerQueue[3][3] = { 0 };	// �����̍s��
	int answerNumber = 0;	// ��

	/* ���͑���������\�� */
	std::cout << "�ŏ��̍s��̐�������͂��Ă��������B\n";

	/* �s��̒��g���i�[���郋�[�v */
	for (int i = 0; i < 3; i++) {
		/* �s��̒��g���i�[���郋�[�v */
		for (int j = 0; j < 4; j++) {
			/* �s��̒��g���i�[ */
			std::cin >> firstQueue[i][j];
		}
	}

	/* ���͑���������\�� */
	std::cout << "2�ڂ̍s��̐�������͂��Ă��������B\n";

	/* �s��̒��g���i�[���郋�[�v */
	for (int i = 0; i < 4; i++) {
		/* �s��̒��g���i�[���郋�[�v */
		for (int j = 0; j < 3; j++) {
			/* �s��̒��g���i�[ */
			std::cin >> secondQueue[i][j];
		}
	}

	/* �s��̌v�Z���ʂ��i�[���郋�[�v */
	for (int i = 0; i < 3; i++) {
		/* �s��̌v�Z���ʂ��i�[���郋�[�v */
		for (int j = 0; j < 3; j++) {
			/* �s��̌v�Z���ʂ̓r�����i�[���郋�[�v */
			for (int k = 0; k < 4; k++) {
				/* �s��̌v�Z���ʓr���̒l���i�[ */
				answerNumber += firstQueue[i][k] * secondQueue[k][j];
			}
			/* �s��̌v�Z���ʊi�[ */
			answerQueue[i][j] = answerNumber;
			/* �v�Z���ʂ̓r���l�������� */
			answerNumber = 0;

			/* ���ʏo�� */
			std::cout << answerQueue[i][j] << " ";
		}
		/* ���s�o�� */
		std::cout << "\n";
	}
	return 0;
}