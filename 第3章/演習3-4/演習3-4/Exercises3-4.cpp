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

	do {
		cout << "���̐����l:";
		cin >> x;
	} while (x <= 0);
	while (x >= 0) {
		cout << x << "\n";
		x--;
	}
	cout << "�Ō�F" << x << "\n";
}

