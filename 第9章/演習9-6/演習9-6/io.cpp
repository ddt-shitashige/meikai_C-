#include <iostream>
#include "kazuate.h"
using namespace std;


/**
  *@fn
  *prompt
  *@brief ���͑������b�Z�[�W�\��
  *@return
  */
static void prompt() {
	/* ���b�Z�[�W�\�� */
	cout << "0�`" << max_no << "�̐��F";
}

/**
  *@fn
  *input
  *@brief �񓚓���
  *@return
  */
int input() {
	int val;	// ���͒l
	do {
		/* ���b�Z�[�W�\�� */
		prompt();
		/* �l���� */
		cin >> val;
		/* ���͒l��0�ȏ�A�ő�l�ȉ��ɂȂ�܂Ń��[�v */
	} while (val < 0 || val > max_no);
	return val;
}

/**
  *@fn
  *confirm_retry
  *@brief �R���e�j���[�m�F
  *@return
  */
bool confirm_retry() {

	int cont;
	cout << "������x���܂����H\n"
		<< "<Yes...1/No...0>:";
	cin >> cont;
	return static_cast<bool>(cont);
}

