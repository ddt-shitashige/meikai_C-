/**
 * @file Exerises1-14.cpp
 * @brief ���K1-14	�L�[�{�[�h����ǂݍ��񂾐����l�}5�͈̔͂̐����l�������_���ɐ�������
					�\������v���O�������쐬����B
 * @author shitashige
 * @date 20191218
 */

#include <ctime>
#include <cstdlib>
#include <iostream>
 /**
  * @fn
  * ���C���֐�
  * @brief ���͂��ꂽ�����l�́}5�͈̔͂̐����l�������_���ɐ������ĕ\������֐�
  * @return 0:����I��
  */
int main() {

	int inputNumber;		// ���͐���

	/* ���͑��������\�� */
	std::cout << "�����l";
	/* ���͑ҋ@ */
	std::cin >> inputNumber;

	/* �����V�[�h������ */
	srand((unsigned int)time(NULL));

	/* 11�Ŋ��邱�Ƃɂ��A10�ȉ��̗����ݒ� */
	int tenLessValue = rand() % 11;		// 10�ȉ��̒l

	/* 10�ȉ��̗�����-5���鎖�ɂ���āA-5�`+5�̑������s�� */
	inputNumber += tenLessValue - 5;

	/* ���ʏo�� */
	std::cout << "1���̐��̐����l��" << inputNumber << "\n";
	return 0;
}