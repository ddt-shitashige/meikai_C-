/**
 * @file Exerises3-1.cpp
 * @brief ���K3-1	�ǂݍ��񂾐����l�̕����𔻒肷��List2-5���D���Ȃ������x�ł����́E�\�����J��Ԃ���悤�ɂ����v���O�������쐬����B
 * @author shitashige
 * @date 20200104
 */

#include <iostream> 
using namespace std;		// ����namespace��List2-5�ɂ���������Ă��邾���ŁA�����L�����킯�ł͂Ȃ��B

 /**
  * @fn
  * ���C���֐�
  * @brief List2-5 �������ʊ֐�
  * @return 0:����I��
  */
int main() {

	int n;					// ����int��List2-5������������Ă���ׂł���A�������������킯�ł͂Ȃ��B
	string retryMessage;	// ���g���C�m�F���b�Z�[�W
	/* ���[�v�J�n */
	do{
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
			cout << "���̒l�͕��ł��B\n";
		}
		/* ����ȊO�̏ꍇ�̏o�� */
		else { 
			/* ���b�Z�[�W�o�� */
			cout << "���̒l��0�ł��B\n";
		}
		/* ���b�Z�[�W�\�� */
		cout << "������x���܂����H�@Yes�Fy/No�F����ȊO";
		/* ���͑ҋ@ */
		cin >> retryMessage;
		/* �������͔��� */
	} while (retryMessage == "Y" || retryMessage == "y");
	return 0;
}