/**
 * @file Exerises4-6.cpp
 * @brief	3��ނ̕��������_�^�̑傫����sizeof���Z�q�ɂ���āA�\������v���O�������쐬����B
 * @author shitashige
 * @date 20200212
 */


#include <iostream>

/**
 * @fn
 * ���C���֐�
 * @brief ���������_�̂�������\������֐�
 * @return 0:����I��
 */
int main() {

	float floatNumber = 0;				// float����
	double doubleNumber = 0;			// double����
	long double longDoubleNumber = 0;	// lobgdouble����

	/* ���ʏo�� */
	std::cout << "float�T�C�Y�F" << sizeof(floatNumber) << "\n" << "double�T�C�Y�F" << sizeof(doubleNumber) << "\n" << "longdouble�T�C�Y�F" << sizeof(longDoubleNumber) << "\n";

    return 0;
}