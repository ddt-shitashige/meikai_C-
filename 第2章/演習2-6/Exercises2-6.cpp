/**
 * @file Exerises2-6.cpp
 * @brief ���K2-6	�L�[�{�[�h����ǂݍ��񂾓_���ɉ����āA�D/��/��/�s�𔻒肵�ĕ\������v���O�������쐬����B
 * @author shitashige
 * @date 20191218
 */

#include <iostream> 

 /**
  * @fn
  * ���C���֐�
  * @brief �_������֐�
  * @return 0:����I��
  */
int main() {

	int inputNumber;		// ���͂��ꂽ����

	/* ���[�U�[���͂𑣂����b�Z�[�W��\�� */
	std::cout << "�_������͂��ĉ������B";

	/* ���[�U�[���� */
	std::cin >> inputNumber;

	/* ���l�������ꍇ�A����͉������Ȃ� */
	if (inputNumber < 0);
	/* 60�_�����������ꍇ�A�s�ƕ\������ */
	else if (inputNumber < 60) {
		/* ���b�Z�[�W��\�� */
		std::cout << "�s��";
	}
	/* 70�_�����������ꍇ�A�ƕ\������ */
	else if (inputNumber < 70) {
		/* ���b�Z�[�W��\�� */
		std::cout << "��";
	}
	/* 80�_�����������ꍇ�A�ǂƕ\������ */
	else if (inputNumber < 80) {
		/* ���b�Z�[�W��\�� */
		std::cout << "��";
	}
	/* 100�_�ȉ��������ꍇ�A�D�ƕ\������ */
	else if (inputNumber <= 100) {
		/* ���b�Z�[�W��\�� */
		std::cout << "�D";
	}
	/* ����ȊO�̓_���͉����\�����Ȃ� */
	else;

	return 0;
}