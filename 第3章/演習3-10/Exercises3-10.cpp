/**
 * @file Exerises3-10.cpp
 * @brief ���K3-10	�S��Ƃ͋t�ɁA0���琳�̐����l�܂ł��J�E���g�A�b�v����v���O�������쐬����B
 * @author shitashige
 * @date 20200115
 */


#include<iostream>

using namespace std;

/**
 * @fn
 * ���C���֐�
 * @brief �J�E���g�A�b�v�̃v���O����
 * @return 0:����I��
 */
int main() {
	int x;		// ��蕶�������s���Ă��邾���ŁA���̈ӎu�ł͂Ȃ��B

	/* ���b�Z�[�W�\�� */
	cout << "�J�E���g�A�b�v���܂��B\n";

	/* x��0�ȏ�̒l�����͂����܂œ��͂����� */
	do {
		/* �����o�� */
		cout << "���̐����l:";
		/* �������� */
		cin >> x;
	} while (x <= 0);
	/* x��i�ȏ�̊Ԃ̓��[�v���A1�񃋁[�v������邲�Ƃ�i���C���N�������g */
	for (int i = 0; i <= x; i++) {
		/* ���݂�i�̒l���o�� */
		cout << i << "\n";
	}
	return 0;
}

