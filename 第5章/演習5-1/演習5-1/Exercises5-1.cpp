/**
 * @file Exerises5-1.cpp
 * @brief ���K5-1	�v�f�^��int�^�ŗv�f����5�̔z��̗v�f�ɑ΂��āA�擪���珇��5,4,3,2,1�������ĕ\������v���O�������쐬����B
 * @author shitashige
 * @date 20200225
 */
#include <iostream>
/**
 * @fn
 * ���C���֐�
 * @brief �z����o�͂���֐�
 * @return 0:����I��
 */
int main() {

	const int element =5;	// �v�f��
	int number[element]={5,4,3,2,1};	// �����̔z��
	
	/* �v�f�����������[�v */
	for (int i = 0; i < element; i++) {
		/* �z��̐��l�o�� */
		std::cout<<number[i]<<"\n";
	}
	return 0;
}