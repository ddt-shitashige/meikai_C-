/**
 * @file Exerises3-9.cpp
 * @brief ���K3-9	���̐����l��0�܂ŃJ�E���g�_�E������List3-4��for���ō쐬����B
 * @author shitashige
 * @date 20200114
 */


#include<iostream>

using namespace std;

/**
 * @fn
 * ���C���֐�
 * @brief �J�E���g�_�E���̃v���O����
 * @return 0:����I��
 */
int main() {
	int x;		// ��蕶�������s���Ă��邾���ŁA���̈ӎu�ł͂Ȃ��B

	/* ���b�Z�[�W�\�� */
	cout << "�J�E���g�_�E�����܂��B\n";

	/* x��0�ȏ�̒l�����͂����܂œ��͂����� */
	do {
		/* �����o�� */
		cout << "���̐����l:";
		/* �������� */
		cin >> x;
	} while (x <= 0);
	/* x��0�ȏ�̊Ԃ̓��[�v���A1�񃋁[�v������邲�Ƃ�x���f�N�������g */
	for (; x >= 0; x--) {
		/* ���݂�x�̒l���o�� */
		cout << x << "\n";
	}
}

