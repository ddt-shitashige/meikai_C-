/**
 * @file Exerises9-6.cpp
 * @brief ���K9-6	�����ăQ�[����2�ł��ȉ��̂悤�ɕύX�����v���O�������쐬����B
 *					�E���Ă�ׂ�����0�`999�Ƃ���B
 *					�E�v���[�������l����͂ł���񐔂��ő��10��܂łɐ�������B
 *					�E���̓~�X���s�����i0�`999�ȊO�̐�����͂����j�ꍇ�́A�񐔂Ƃ��ăJ�E���g���Ȃ��B
 *					�E���������ꍇ�͉���Ő��������̂���\�����A�Ō�܂Ő������Ȃ������ꍇ�͐�����\������B

 * @author shitashige
 * @date 20200326
 */


#include <iostream>
#include "kazuate.h"
using namespace std;

int max_no = 999;	// ���̍ő�l



/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {
	/* �����V�[�h���� */
	initialize();

	/* ���b�Z�[�W�\�� */
	cout << "�����ăQ�[���J�n";


	do {
		int answerCount = 0;	// �񓚃J�E���g

		/* ���쐬 */
		gen_no();

		int hantei;	// ���萔�l
		do {

			/* ���l�̔�����s�� */
			hantei = judge(input());
			/* ���肪�����������ꍇ�̏��� */
			if (hantei == 1) {
				/* ���b�Z�[�W�\�� */
				cout << "\a�����Ə������ł���B\n";
			}
			/* ���肪�傫�������ꍇ�̏��� */
			else if (hantei == 2) {
				/* ���b�Z�[�W�\�� */
				cout << "\a�����Ƒ傫���ł���B\n";
			}

			/* �J�E���g�A�b�v */
			answerCount++;

			/* ��������܂Ń��[�v */
		} while (hantei != 0 && answerCount < 10);

		/* �񓚉񐔂�10�ȉ��������ꍇ */
		if (answerCount < 10) {
			/* ���b�Z�[�W�\�� */
			cout << "�����ł��B\n";
		}
		else {
			/* ���b�Z�[�W�\�� */
			cout << "�񓚂�" << Answer() << "�ł��B\n";

		}
		/* ������x�s�����m�F */
	} while (confirm_retry());
}