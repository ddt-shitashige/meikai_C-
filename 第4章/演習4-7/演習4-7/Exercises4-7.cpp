/**
 * @file Exerises4-7.cpp
 * @brief	���������_�̏���typeid���Z�q�ɂ���ĕ\������v���O�������쐬����B
 * @author shitashige
 * @date 20200213
 */

#include <iostream>

/**
 * @fn
 * ���C���֐�
 * @brief ���������_�̃^�C�v��\������֐�
 * @return 0:����I��
 */
int main() {

    float floatNumber = 0;				// float����
    double doubleNumber = 0;			// double����
    long double longDoubleNumber = 0;	// lobgdouble����

    /* ���ʏo�� */
    std::cout << "float�^�C�v�F" << typeid(floatNumber).name() << "\n" << "double�^�C�v�F" << typeid(doubleNumber).name() << "\n" << "longdouble�T�C�Y�F" << typeid(longDoubleNumber).name() << "\n";

    return 0;
}