/**
 * @file Exerises2-2.cpp
 * @brief ���K2-2	List2-5�̍Ō��else���Aelseif(n==0)�ɕύX����Ƃǂ��Ȃ邩��������B
 * @author shitashige
 * @date 20191218
 */

#include <iostream>

using namespace std;


/**
 * @fn
 * ���C���֐�
 * @brief List2-5 �������ʊ֐�
 * @return 0:����I��
 */
int main() {

	int n;		// ����int��List2-5������������Ă���ׂł���A�������������킯�ł͂Ȃ��B
	
	/* ���b�Z�[�W�o�� */
	cout << "�����l:";
	/* ���[�U�[���͑҂� */
	cin >> n;

	/* n��0���傫����ΐ��l�ł��邱�Ƃ�\������ */
	if (n > 0) {
		/* ���b�Z�[�W�o�� */
		cout << "���̒l�͐��ł��B\n";
	}
	/* n��0��菬������Ε��l�ł��邱�Ƃ�\������ */
	else if (n < 0) {
		/* ���b�Z�[�W�o�� */
		cout<< "���̒l�͕��ł��B\n";
	}
	//else
	else if (n == 0) {
		/* ���b�Z�[�W�o�� */
		cout << "���̒l��0�ł��B\n";
	}

	/*
	 * ���_�Ƃ��Ă͏����͕ς��Ȃ��B
	 * �����A���̂悤�ɏ����ƁA�q���[�}���G���[���������₷���ׁA
	 * �o���邾���Aelse�Œ��߂�̂��]�܂����B
	 */
}