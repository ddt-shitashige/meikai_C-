/**
 * @file Exerises5-6.cpp
 * @brief ���K5-6	�v�f�^��int�^�ŗv�f����15�̔z��̑S�v�f��0�`10�̗����������āA�E�̂悤�ɖ_�O���t�Œl��\������v���O�������쐬����B�_�O���t�͋L������'*'���������ɕ��ׂ����̂Ƃ���B
 * @author shitashige
 * @date 20200303
 */


#include <iostream>
#include <ctime>
#include <iomanip>

 /**
  * @fn
  * ���C���֐�
  * @brief �z��Ƀ����_�����l������*�}�[�N���o�͂���֐�
  * @return 0:����I��
  */
int main() {

	const int element = 14;	// �v�f��
	int rundomNumber = 0;	// �����_�����l
	int number[element] = { 0 };	// �����̔z��

	/* �����V�[�h������ */
	srand((unsigned int)time(NULL));


	/* �v�f�����������[�v */
	for (int i = 0; i < element; i++) {
		/* ��������11�̂��܂�����߂鎖�ɂ��A�l��0�`10�̊ԂɂȂ�B */
		rundomNumber = rand() % 11;

		/* �z��Ƀ����_�����l���i�[ */
		number[i] = rundomNumber;
		/* �e���v���[�g�o�� */
		std::cout << "a[" << std::setw(3) << i << "]�F";

		/* *�ׂ̃��[�v */
		for (int j = 0; j < number[i]; j++) {
			/* *�}�[�N�o�� */
			std::cout << "*";
		}
		/* ���s�o�� */
		std::cout << "\n";
	}

	return 0;
}