/**
 * @file Exerises4-11.cpp
 * @brief	float�^�̕ϑ���0.0����1.0�܂�0.001�����₵�Ȃ���A���̒l�Ƃ��̒l��2���\������v���O�������쐬����B
 * @author shitashige
 * @date 20200219
 */

#include <iostream>
#include<iomanip>

/**
 * @fn
 * ���C���֐�
 * @brief �C���N�������g��������\������֐�
 * @return 0:����I��
 */
int main() {

	/* 1000�񃋁[�v */
	for (float i = 0; i <= 1; i+=0.001) {
		/* 0.001�����₵���l�Ƃ���2��l��\�� */
		std::cout << std::fixed << std::setprecision(6) << i << "\t" << i*i << "\n";
	}
	return 0;
}