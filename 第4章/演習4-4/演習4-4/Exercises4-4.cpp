/**
 * @file Exerises4-4.cpp
 * @brief	�������e�����Ɛ������e�����ɑ΂���sizeof���Z�q��K�p�����l��\������v���O�������쐬����B
 * @author shitashige
 * @date 20200207
 */

#include <iostream>
/**
 * @fn
 * ���C���֐�
 * @brief �������e����0��8�i���e�����ł��鎖��_���I�ɐ�������֐��B
 * @return 0:����I��
 */
int main() {

	char number = 1;		// ����
	char letter[] = "1";	// ����

    /* �������e�����̑傫���o�� */
	std::cout << "�������e�����F" << sizeof(number) << "\n";

    /* �������e�����̑傫���o�� */
	std::cout << "�������e�����F" << sizeof(letter) << "\n";

	/*
	 * ���̃v���O���������s����ƁA�������e������1�o�C�g
	 * �������e������2�o�C�g�Ƃ�������������B
	 * ����͕������e�����̕����R�[�h��SHIFT_JIS������ł���B
	 */
}