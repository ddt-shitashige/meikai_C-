/*
 * @file  Exerises2-17.cpp
 * @brief ���K2-17	�ϐ�a��double�^�ŁA�ϐ�b��int�^�ł���Ƃ���B�ȉ��̑���ɂ���āA���ꂼ��̕ϐ��̒l�͂ǂ̂悤�ɂȂ邩���������B
					a = b =1.5
 * @author shitashige
 * @date 20200101
 */

#include <iostream>

/**
 * @fn
 * ���C���֐�
 * @brief a=b=1.5���m���߂�֐��B
 * @return 0:����I��
 */
int main() {
	double a;	// �ϐ�a�i��蕶�ɂĂ��̂悤�ɒ�`����悤�ɏ����Ă������ׁj
	int b;		// �ϐ�b�i��蕶�ɂĂ��̂悤�ɒ�`����悤�ɏ����Ă������ׁj

	/* b��1.5�������邪�Aint�^�Ȃ̂�1�ɂȂ�B1��double�^��a�ɑ������ׁAa��1�ƂȂ�B */
	a = b = 1.5;

	/* �����o�� */
	std::cout << "�ϐ�a:" << a << "\n�ϐ�b:" << b;

	return 0;
}