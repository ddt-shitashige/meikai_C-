/**
 * @file Exerises8-1.cpp
 * @brief ���K8-1�@���y�[�W�ɂĎ�����set_terminate�֐��ɂ���āAexception_error��o�^����a�����ۂɊ܂ރv���O�������쐬���āA����̌��؂��s���B
 * @author shitashige
 * @date 20200430
 */

#include <iostream>

/* ��O�֘A�̃G���[�������������Ƃ�\�����ăv���O�����������I�� */
void exception_error() {
	/* ������o�� */
	std::cout << "��O�֘A�̃G���[���������܂����B\n";
	/* �v���O�����ُ̈�I�� */
	abort();
}

/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {

	int* c1 = NULL;
		/* ��O�������̏�����ݒ� */
		set_terminate(exception_error);
		/* �G���[���� */
		terminate();
}