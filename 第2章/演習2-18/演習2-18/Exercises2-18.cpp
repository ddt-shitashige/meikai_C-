/*
 * @file  Exerises2-18.cpp
 * @brief ���K2-18	�ȉ���if���������s���̂����������B
					if (a = 0)c = 3;
 * @author shitashige
 * @date 20200103   
 */

#include <iostream>

/**
 * @fn
 * ���C���֐�
 * @brief if (a = 0)c = 3;���m���߂�֐��B
 * @return 0:����I��
 */

int main() {
	int a = 1;	// �ϐ�a�i��蕶�ɂĂ��̂悤�ɒ�`����悤�ɏ����Ă������ׁj
	int c = 1;	// �ϐ�c�i��蕶�ɂĂ��̂悤�ɒ�`����悤�ɏ����Ă������ׁj

	/* a��0���i�[����B0��C++�ł�false�����ɂȂ�̂ŁAif���̒������s���ꂸ�Ac��3�͊i�[����Ȃ� */
	if (a = 0)c = 3;

	/* ���ʏo�� */
	std::cout << "a�F" << a << "\nc�F" << c;

	return 0;
}