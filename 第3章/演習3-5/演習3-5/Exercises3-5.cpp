/**
 * @file Exerises3-5.cpp
 * @brief ���K3-5	�ǂݍ��񂾒l��1�����ł���Ή��s�������o�͂��Ȃ��悤��List3-6(p92)�������������v���O�������쐬����B
 * @author shitashige
 * @date 20200108
 */


#include<iostream>

	using namespace std;

/**
 * @fn
 * ���C���֐�
 * @brief ���͂������l�����������o�͂��郁�\�b�h
 * @return 0:����I��
 */
int main() {
	int n;		// ��蕶�������s���Ă��邾���ŁA���̈ӎu�ł͂Ȃ��B

	/* ���b�Z�[�W�\�� */
	cout << "����*��\�����܂����F";

	/* ������ */
	cin >> n;

	/* ���͐��l��1������������I�� */
	if (n < 1) {
		return 0;
	}

	int i = 0;// ��蕶�������s���Ă��邾���ŁA���̈ӎu�ł͂Ȃ��B

	/* ���͂������l���������[�v */
	while (i < n) {
		/* *�}�[�N���o�� */
		cout << '*';
		/* �J�E���g���v���X1 */
		i++;
	}
	/* ���s�L�����o�� */
	cout << '\n';

	return 0;
}

