/**
 * @file Exerises3-26.cpp
 * @brief	�l�ԂƃR���s���[�^�[���ΐ킷�邶��񂯂�v���O�������쐬����B
 *			�E�l�Ԃ��]�ތ��艽�x�ł��J��Ԃ���悤�ɂ�����́B
			�E�����ꂩ�����3�񏟂܂ł��J��Ԃ����́B
			�ȂǁA�����p�^�[���̃v���O��������鎖�B
 * @author shitashige
 * @date 20200203
 */
#include <ctime>
#include <cstdlib>
#include <iostream>
/**
 * @fn
 * ���C���֐�
 * @brief ����񂯂���s���֐�
 * @return 0:����I��
 */
int main() {
	/* �����V�[�h���� */
	srand(time(NULL));

	/* 0�`2�̗�����ݒ� */
	int rpsResult = 0;	// ����񂯂񌋉�
	int modeType = 0;	//  ���[�h�^�C�v
	int finishFlg = 0;	// �I���t���O

	/* ���[�h�I���o�� */
	std::cout << "����񂯂�����܂��B���[�h��I�����Ă�������(0:�Ƃ��Ƃ�B1:3����)\n";

	/* 0��1����͂���܂Ń��[�v */
	do {
		/* ���[�h���� */
		std::cin >> modeType;

		/* ���͒l��0��1�ȊO��������x���o�� */
		if (modeType != 0 && modeType != 1) {
			/* �x���o�� */
			std::cout << "���l���Ⴂ�܂��B������x���͂��ĉ�����\n";
		}

	} while (modeType != 0 && modeType != 1);

	int inputSkill = 0;	// ����񂯂�̓��͋Z
	int myWinCount = 0;	// �����̏�����
	int cpuWinCount = 0;	// CPU�̏�����
	/* �Ƃ��Ƃ񃂁[�h�̏��� */
	if (modeType == 0) {
		do {

			/* �I�������� */
			std::cout << "��������͂��Ă��������B(0:�O�[�B1:�`���L�B2:�p�[)\n";

			/* ���l���� */
			std::cin >> inputSkill;

			/* 0�`2�̊Ԃ̐��������͂��ꂽ���`�F�b�N */
			if (inputSkill < 0 || inputSkill>2) {
				/* �x���o�� */
				std::cout << "���l���Ⴂ�܂��B������x���͂��Ă��������B\n";
				/* ���[�v�̍ŏ��ɖ߂� */
				continue;
			}

			/* 0�`2�̗�����ݒ� */
			rpsResult = rand() % 3;

			/* ���s���ʔ��f */
			if ((inputSkill == 0 && rpsResult == 1) ||
				(inputSkill == 1 && rpsResult == 2) ||
				(inputSkill == 2 && rpsResult == 0)) {
				/* ���ʕ\�� */
				std::cout << "�M���̏����ł��B\n";
			}
			else if ((inputSkill == 0 && rpsResult == 2) ||
				(inputSkill == 1 && rpsResult == 0) ||
				(inputSkill == 2 && rpsResult == 1)) {
				/* ���ʕ\�� */
				std::cout << "�M���̕����ł��B\n";
			}
			else {
				/* ���ʕ\�� */
				std::cout << "�������ł��B������x�s���܂��B\n";
				/* ������x */
				continue;
			}
			/* �₢���킹�\�� */
			std::cout << "������x�s���܂����H(0:���s�B����ȊO:�I��)\n";
			/* ���l���� */
			std::cin >> finishFlg;

		} while (finishFlg == 0);
	}
	/* 3�������[�h�̏��� */
	else {
		do {
			/* �I�������� */
			std::cout << "��������͂��Ă��������B(0:�O�[�B1:�`���L�B2:�p�[)\n";

			/* ���l���� */
			std::cin >> inputSkill;

			/* 0�`2�̊Ԃ̐��������͂��ꂽ���`�F�b�N */
			if (inputSkill < 0 || inputSkill > 2) {
				/* �x���o�� */
				std::cout << "���l���Ⴂ�܂��B������x���͂��Ă��������B\n";
				/* ���[�v�̍ŏ��ɖ߂� */
				continue;
			}

			/* 0�`2�̗�����ݒ� */
			rpsResult = rand() % 3;

			/* ���s���ʔ��f */
			if ((inputSkill == 0 && rpsResult == 1) ||
				(inputSkill == 1 && rpsResult == 2) ||
				(inputSkill == 2 && rpsResult == 0)) {
				/* ���ʕ\�� */
				std::cout << "�M���̏����ł��B\n";
				myWinCount++;
			}
			else if ((inputSkill == 0 && rpsResult == 2) ||
				(inputSkill == 1 && rpsResult == 0) ||
				(inputSkill == 2 && rpsResult == 1)) {
				/* ���ʕ\�� */
				std::cout << "�M���̕����ł��B\n";
				cpuWinCount++;
			}
			else {
				/* ���ʕ\�� */
				std::cout << "�������ł��B������x�s���܂��B\n";
				/* ������x */
				continue;
			}
			std::cout << "\n���݂̐��\n�M���F" << myWinCount << "���@CPU�F" << cpuWinCount << "��\n\n";
		} while (myWinCount != 3 && cpuWinCount != 3);
		if (myWinCount == 3) {
			std::cout << "�M�������3�����܂����B\n";
		}
		else {
			std::cout << "CPU�����3�����܂����B\n";
		}
	}
}