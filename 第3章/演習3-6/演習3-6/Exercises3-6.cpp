/**
 * @file Exerises3-6.cpp
 * @brief ���K3-6	�ǂݍ��񂾒l�̌������A�L��������\������v���O�������쐬����B+��-�����݂ɕ\�����鎖�B
 * @author shitashige
 * @date 20200109
 */


#include<iostream>

using namespace std;

/**
 * @fn
 * ���C���֐�
 * @brief ���͂������l������+��-�����݂ɏo�͂��郁�\�b�h
 * @return 0:����I��
 */
int main() {
	int inputCount;		// ��蕶�������s���Ă��邾���ŁA���̈ӎu�ł͂Ȃ��B

	/* ���b�Z�[�W�\�� */
	cout << "���\�����܂����F";

	/* ������ */
	cin >> inputCount;


	int roopCount = 0;	// ���[�v�J�E���g

	/* ���͂������l���������[�v */
	while (roopCount < inputCount) {
		/* ���[�v�J�E���g�����������������Ȃ�+�}�[�N���o�� */
		if (roopCount % 2 == 0) {
			/* +�}�[�N���o�� */
			cout << '+';
		}
		/* ���[�v�J�E���g��������������Ȃ�+�}�[�N���o�� */
		else {
			/* -�}�[�N���o�� */
			cout << '-';
		}
		/* ���[�v�J�E���g���v���X1 */
		roopCount++;
	}
	return 0;
}

