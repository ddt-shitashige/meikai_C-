/**
 * @file Exerises5-3.cpp
 * @brief ���K5-3	�v�f�^��int�^�ŗv�f����6�̔z��̑S�v�f��1�`10�̗����Ŗ��ߐs�����v���O�������쐬����B
 * @author shitashige
 * @date 20200227
 */


#include <iostream>
#include <ctime>

/**
 * @fn
 * ���C���֐�
 * @brief �z��Ƀ����_�����l������֐�
 * @return 0:����I��
 */
int main() {

	const int element = 6;	// �v�f��
	int rundomNumber;	// �����_�����l
	int number[element] = {0};	// �����̔z��

	/* �����V�[�h������ */
	srand((unsigned int)time(NULL));


	/* �v�f�����������[�v */
	for (int i = 0; i < element; i++) {
		/* ��������10�̂��܂�����߂鎖�ɂ��A�l��0�`9�̊ԂɂȂ�B������+1����ׁA1�`10�ɂȂ� */
		rundomNumber = rand() % 10 + 1;

		number[i]=rundomNumber;
		/* �z��̐��l�o�� */
		std::cout << number[i] << "\n";
	}

	return 0;
}