/**
 * @file Exerises6-11.cpp
 * @brief ���K6-11	List6-11���g�����āA�ȉ���4��ނ̖��������_���ɏo�肷��v���O�������쐬����B
					x+y+z
					x+y-z
					x-y+z
					x-y-z
 * @author shitashige
 * @date 20200322
 */


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/**
  * @fn
  * ���s�m�F�֐��B
  * @brief ���𑱍s���邩�m�F����
  * @return
  */
bool confirm_retry() {
	int retry;	// ���g���C�m�F�l


	do {
		/* ���b�Z�[�W�o�� */
		cout << "������x<Yes...1/No...0>";
		/* ���g���C�l���� */
		cin >> retry;


		/* ���͒l��0��1�ȊO�Ȃ烋�[�v */
	} while (retry != 0 && retry != 1);

	/* ���͒l��bool�^�ɕύX���ă��^�[�� */
	return static_cast<bool>(retry);
}

/**
 * @fn
 * ���C���֐�
 * @brief ���������_���ɏo�肷��B
 * @return 0:����I��
 */
int main() {

	/* �����V�[�h���� */
	srand(time(NULL));

	/* ���b�Z�[�W�o�� */
	cout << "�ÎZ�g���[�j���O�J�n\n";

	int questionNumber;	// ���ԍ�

	do {
		int x = rand() % 900 + 100;	// 3���̐�
		int y = rand() % 900 + 100;	// 3���̐�
		int z = rand() % 900 + 100;	// 3���̐�

		/* ���ԍ����� */
		questionNumber = rand() % 4;


		while (true) {
			int k;	// �ǂݍ��񂾒l

			/* ���ԍ���0�������ꍇ */
			if (questionNumber == 0) {
				/* ���o�� */
				cout << x << "+" << y << "+" << z << "=";
			}
			/* ���ԍ���1�������ꍇ */
			else if (questionNumber = 1) {
				/* ���o�� */
				cout << x << "+" << y << "-" << z << "=";
			}
			/* ���ԍ���2�������ꍇ */
			else if (questionNumber = 2) {
				/* ���o�� */
				cout << x << "-" << y << "+" << z << "=";
			}
			/* ���ԍ���3�������ꍇ */
			else if (questionNumber = 3) {
				/* ���o�� */
				cout << x << "-" << y << "-" << z << "=";
			}
			/* �������� */
			cin >> k;
			/* ���ԍ���0�������ꍇ */
			if (questionNumber == 0) {
				/* ���͒l�m�F */
				if (k == x + y + z) {
					/* ���[�v�E�o */
					break;
				}
			}
			/* ���ԍ���1�������ꍇ */
			else if (questionNumber = 1) {
				/* ���͒l�m�F */
				if (k == x + y - z) {
					/* ���[�v�E�o */
					break;
				}
			}
			/* ���ԍ���2�������ꍇ */
			else if (questionNumber = 2) {
				/* ���͒l�m�F */
				if (k == x - y + z) {
					/* ���[�v�E�o */
					break;
				}
			}
			/* ���ԍ���3�������ꍇ */
			else if (questionNumber = 3) {
				/* ���͒l�m�F */
				if (k == x - y - z) {
					/* ���[�v�E�o */
					break;
				}
			}
			/* ���b�Z�[�W�o�� */
			cout << "\a�Ⴂ�܂���\n";
		}
		/* ���s�̊m�F�֐����Ăяo�� */
	} while (confirm_retry());
	return 0;
}