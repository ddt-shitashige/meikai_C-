/*
 * @file  Exerises2-14.cpp
 * @brief ���K2-14	0,1,2�̂����ꂩ�̒l�̗����𐶐����A0�ł���΁u�O�[�v1�ł���΁u�`���L�v2�ł���΁u�p�[�v�ƕ\������v���O�������쐬����B
 * @author shitashige
 * @date 20191230
 */
#include <iostream>
#include <ctime>
#include <cstdlib>

 /**
  * @fn
  * ���C���֐�
  * @brief ����񂯂�̌��ʂ�\������v���O����
  * @return 0:����I��
  */
int main() {

	int randomNumber = 0;			// �����_������

	/* �����V�[�h���� */
	srand(time(NULL));
 
	/* 3�����̐��l���쐬 */
	randomNumber = rand() % 3;

	/* �X�C�b�`���ɂāA�\��������ς��� */
	switch (randomNumber) {
		/* ������0�������ꍇ */
		case 0: std::cout << "�O�[";
			break;
		/* ������1�������ꍇ */
		case 1: std::cout << "�`���L";
			break;
		/* ������2�������ꍇ */
		case 2: std::cout << "�p�[";
			break;
	}
	return 0;
}