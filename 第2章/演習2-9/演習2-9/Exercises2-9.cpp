/**
 * @file Exerises2-9.cpp
 * @brief ���K2-9	�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA�����̒l�̍���10�ȉ��ł���΁A�u�����̍���10�ȉ��ł��v�g�\�����A
 *					�����łȂ���΁A�u�����̍���11�ȏ�ł��v�ƕ\������v���O�������쐬����B
 * @author shitashige
 * @date 20191224
 */
#include <iostream>

 /**
  * @fn
  * ���C���֐�
  * @brief 2�̐����̍��ق��o�͂��郁�\�b�h
  * @return 0:����I��
  */
int main() {

	int inputNumberFront = 0;		// ���͕����O��
	int inputNumberRear = 0;		// ���͕������
	int differenceAnswer = 0;		// ���ٌ���


	/* ����A�̓��͂𑣂� */
	std::cout << "����A�F\n";
	/* ���[�U�[�ɓ��͂����� */
	std::cin >> inputNumberFront;

	/* ����B�̓��͂𑣂� */
	std::cout << "����B�F\n";
	/* ���[�U�[�ɓ��͂����� */
	std::cin >> inputNumberRear;

	/* �v�Z */
	differenceAnswer = inputNumberFront - inputNumberRear;

	/* ���ʂ�ύX���Ȃ���o�� */
	std::cout << "�����̍���" << ((differenceAnswer < 10) ? "10�ȉ�" : "10�ȏ�") << "�ł��B";
}
