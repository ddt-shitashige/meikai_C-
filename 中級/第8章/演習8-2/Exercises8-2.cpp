/**
 * @file Exerises8-2.cpp
 * @brief ���K8-2�@���y�[�W�Ɏ�����b�̍\�������v���O���������ۂɍ쐬���āA����̌��؂��s��
 * @author shitashige
 * @date 20200430
 */

#include <iostream>
#include <eh.h>

/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main()try {
	 

	/* �G���[���� */
	throw "���킠";
}
catch (const char* str) {
	/* ���b�Z�[�W�\�� */
	std::cout << str;
}
