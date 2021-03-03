/**
 * @file Exerises5-7.cpp
 * @brief ���K5-7	�S������������ďc�����̖_�O���t�ɂ���Ēl��\������v���O�������쐬����B�Y������10�Ŋ������]����ŉ��i�ɕ\�����鎖�B
 * @author shitashige
 * @date 20200305
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
	}

	/* �_�O���t�쐬�̃��[�v */
	for (int i = 10; i > 0; i--) {
		/* �z��`�F�b�N�p�̃��[�v */
		for (int j = 0; j < element; j++) {
			/* �����̔z�񂪍ŏ�l��������*���o�� */
			if (number[j] >= i) {
				/* �c�_�o�� */
				std::cout << "*";
			}
			else {
				/* �󔒏o�� */
				std::cout << " ";
			}
		}
		/* ���s�o�� */
		std::cout << "\n";
	}
	/* �e���v���[�g�o�� */
	std::cout << "--------------\n";

	/* *�ׂ̃��[�v */
	for (int i = 0; i < element; i++) {
		/* *�}�[�N�o�� */
		std::cout << i % 10;
	}
	return 0;
}