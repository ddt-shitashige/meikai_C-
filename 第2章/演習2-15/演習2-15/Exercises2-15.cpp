/*
 * @file  Exerises2-15.cpp
 * @brief ���K2-15	���݂����v���O�������쐬����B�����𐶐����āu��g�v�u���g�v�u���g�v�u�g�v�u���g�v�u���v�u�勥�v�̂����ꂩ��\�����鎖�B
 * @author shitashige
 * @date 20191231
 */
#include <iostream>
#include <ctime>
#include <cstdlib>

 /**
  * @fn
  * ���C���֐�
  * @brief ���݂����̌��ʂ�\������v���O����
  * @return 0:����I��
  */
int main() {

	int randomNumber = 0;			// �����_������

	/* �����V�[�h���� */
	srand(time(NULL));

	/* 3�����̐��l���쐬 */
	randomNumber = rand() % 7;

	/* �X�C�b�`���ɂāA�\��������ς��� */
	switch (randomNumber) {
		/* ������0�������ꍇ */
		case 0: std::cout << "��g";
			break;
		/* ������1�������ꍇ */
		case 1: std::cout << "���g";
			break;
		/* ������2�������ꍇ */
		case 2: std::cout << "���g";
			break;
		/* ������3�������ꍇ */
		case 3: std::cout << "�g";
			break;
		/* ������4�������ꍇ */
		case 4: std::cout << "���g";
			break;
		/* ������5�������ꍇ */
		case 5: std::cout << "��";
			break;
		/* ������6�������ꍇ */
		case 6: std::cout << "�勥";
			break;
	}
	return 0;
}