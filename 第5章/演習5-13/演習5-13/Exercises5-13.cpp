/**
 * @file Exerises5-13.cpp
 * @brief ���K5-13	�{���ŊJ�݂���2�����z��̏����������ۂɃv���O�������쐬���Ċm�F����B
 * @author shitashige
 * @date 20200311
 */



#include <iostream>

/**
  * @fn
  * ���C���֐�
  * @brief ���v�ƕ��ς����߂�֐�
  * @return 0:����I��
  */
int main() {

	const int element=3;	// �v�f��
	int thereQueue[element][element] = { {0,1,2},
										{3,4,5},
										{6,7,8}};	// �������q�L�s��
	int nonQueue[element][element]={};	// �������q���z��

	/* ���\�� */
	std::cout << "�������q�L�̔z���\n";

	/* �s��̒��g��\�����郋�[�v  */
	for (int i = 0; i < element; i++) {
		/* �s��̒��g��\�����郋�[�v  */
		for (int j = 0; j < element; j++) {
			/* �s��̒��g�\�� */
			std::cout << thereQueue[i][j] <<", ";
		}
		std::cout << "\n";
	}

	/* ���\�� */
	std::cout << "�������q���̔z���\n";

	/* �s��̒��g��\�����郋�[�v  */
	for (int i = 0; i < element; i++) {
		/* �s��̒��g��\�����郋�[�v  */
		for (int j = 0; j < element; j++) {
			/* �s��̒��g�\�� */
			std::cout << nonQueue[i][j] << ", ";
		}
		std::cout << "\n";
	}

	return 0;
}
