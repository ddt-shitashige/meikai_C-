/**
 * @file Exerises3-4.cpp
 * @brief ���K3-4	List3-4��While���W���̎���X�̒l��-1�ɂȂ鎖���m�F�ł���悤�ɏ����������v���O�������쐬����B
 * @author shitashige
 * @date 20200105
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
	/* x��0�ȏ�̊Ԃ̓��[�v */
	while (x >= 0) {
		/* ���݂�x�̒l���o�� */
		cout << x << "\n";
		/* x���f�N�������g */
		x--;
	}
	/* x�̒l���ǂ��Ȃ��Ă��邩���o�� */
	cout << "�Ō�F" << x << "\n";
}

