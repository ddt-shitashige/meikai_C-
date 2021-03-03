/**
 * @file Exerises5-9.cpp
 * @brief ���K5-9	�z��a�̑S�v�f��z��b�ɑ΂��ċt���ɃR�s�[����v���O�������쐬����B
 * @author shitashige
 * @date 20200306
 */


#include <iostream>
#include <ctime>
#include <iomanip>

 /**
  * @fn
  * ���C���֐�
  * @brief �z��Ƀ����_�����l�����ċt������֐�
  * @return 0:����I��
  */
int main() {

	const int element = 10;	// �v�f��
	int rundomNumber = 0;	// �����_�����l
	int number[element] = { 0 };	// �����̔z��
	int inversionNumber[element] = { 0 };	// ���]��̔z��
	bool sameFlg = false;			// �z��̒��ɓ������l�������Ă��邩�̔���t���O


	/* �����V�[�h������ */
	srand((unsigned int)time(NULL));


	/* �v�f�����������[�v */
	for (int i = 0; i < element; i++) {
		/* ��������100�̂��܂�����߂鎖�ɂ��A�l��0�`99�̊ԂɂȂ�B */
		rundomNumber = rand() % 100;

		/* �z��Ƀ����_�����l���i�[ */
		number[i] = rundomNumber;

		/* �z��̐��l�o�� */
		std::cout << "a[" << std::setw(2) << i << "]�F" << number[i] << "\n";
	}

	/* �e���v���[�g�o�� */
	std::cout << "�v�f�̕��т�ύX���܂���\n";



	/*
	 * �i�[��𔽓]����
	 */
	 /* �v�f�����������[�v */
	for (int i = 0; i < element; i++) {
		/* ���l�z�񂩂�t���l�̔z��ɃR�s�[���� */
		inversionNumber[i] = number[element - i - 1];

		/* �z��̐��l�o�� */
		std::cout << "a[" << std::setw(2) << i << "]�F" << inversionNumber[i] << "\n";
	}


	return 0;
}