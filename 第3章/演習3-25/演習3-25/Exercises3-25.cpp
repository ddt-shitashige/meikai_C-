/**
 * @file Exerises3-25.cpp
 * @brief	List3-3(p87)�̐����ăQ�[���̃v���C���[���l����͂ł���񐔂ɐ�����݂����v���O�������쐬����B
 *			�����񐔓��ɓ��Ă��Ȃ������ꍇ�́A���E��\�����ăQ�[�����I�����鎖�B
 * @author shitashige
 * @date 20200131
 */


#include <ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

/**
 * @fn
 * ���C���֐�
 * @brief �����ăQ�[�����s���֐�
 * @return 0:����I��
 */
int main() {
	/* �����V�[�h���� */
	srand(time(NULL));

	/* 0�`99�̗�����ݒ� */
	int no = rand() % 100;	// �����_�����l(��蕶�������s���Ă���)
	int x;					// �L�[�{�[�h����ǂݍ��񂾐��l(��蕶�������s���Ă���)
	int limitNumber = 0;		// ������
	int limitCount = 1;			// �����J�E���g

	/* ��ڏo�� */
	cout << "�����ăQ�[���J�n\n";

	/* ���[������ */
	cout << "0����99�̐��𓖂ĂĂ�������\n";

	/* �ǉ����[���\�� */
	cout << "�񐔐�����ݒ肵�܂��B(0�͉񐔐����Ȃ�)";

	/* �����񐔓��� */
	cin >> limitNumber;

	/* no��x�������ɂȂ�܂Ń��[�v */
	do {
		/* ����` */
		cout << "�������ȁF";

		/* ���l���� */
		cin >> x;

		/* ���͒l��������菬���������ꍇ */
		if (x > no)
			/* �q���g�o�� */
			cout << "\a�����Ə����Ȑ�����\n";

		/* ���͒l���������傫�������ꍇ */
		else if (x < no)
			/* �q���g�o�� */
			cout << "\a�����Ƒ傫�Ȑ�����\n";

		/* �����񐔂����͂���Ă���΁A�������[�����K�p����� */
		if (limitNumber != 0) {
			/* ���͉񐔂������񐔂𒴂��Ă�����u���C�N */
			if (limitNumber <= limitCount) {

				/* �񓚏o�� */
				cout << "������" << no << "�ł��B\n";

				/* �I�� */
				return 0;
			}
			/* �����J�E���g�J�E���g�A�b�v */
			limitCount++;
		}
	} while (x != no);

	/* �񓚏o�� */
	cout << "�����ł�\n";
	return 0;
}