/**
 * @file Exerises2-8.cpp
 * @brief ���K2-8	2�̐����l��ǂݍ���ŁA�����̒l�̍���\������v���O�������쐬����B
 * @author shitashige
 * @date 20191223
 */
#include <iostream>

 /**
  * @fn
  * ���C���֐�
  * @brief 2�̐����̍��ق����߂郁�\�b�h
  * @return 0:����I��
  */
int main() {

	const int ABSOLUTE_CONVERTION = -1;		//�@��Βl�ϊ����l

	int inputNumberFront = 0;		// ���͕����O��
	int inputNumberRear = 0;		// ���͕������
	int differenceAnswer = 0;		// ���ٌ���


	/* ����a�̓��͂𑣂� */
	std::cout << "����a����͂��Ă��������B\n";
	/* ���[�U�[�ɓ��͂����� */
	std::cin >> inputNumberFront;

	/* ����b�̓��͂𑣂� */
	std::cout << "����b����͂��Ă��������B\n";
	/* ���[�U�[�ɓ��͂����� */
	std::cin >> inputNumberRear;

	/* �v�Z */
	differenceAnswer = inputNumberFront - inputNumberRear;

	/* ���ʂ��Βl�ɕύX���Ȃ���o�� */
	std::cout << "��̐��l�̍���" << ((differenceAnswer > 0) ? differenceAnswer : (differenceAnswer * ABSOLUTE_CONVERTION)) << "�ł��B";

	return 0;
}