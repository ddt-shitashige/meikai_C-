/**
 * @file Exerises5-2.cpp
 * @brief ���K5-2	�v�f�^��double�^�ŗv�f����5�̔z��̑S�v�f��0.0�������ĕ\������v���O�������쐬����B
 * @author shitashige
 * @date 20200226
 */

#include <iostream>
/**
 * @fn
 * ���C���֐�
 * @brief �z����o�͂���֐�
 * @return 0:����I��
 */
int main() {

	const int element = 5;	// �v�f��
	double number[element] = { 0.0, 0.0, 0.0, 0.0, 0.0 };	// �����̔z��

	/* �v�f�����������[�v */
	for (int i = 0; i < element; i++) {
		/* �z��̐��l�o�� */
		std::cout << number[i] << "\n";
	}
	return 0;
}