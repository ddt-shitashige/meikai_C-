/**
 * @file Exerises4-8.cpp
 * @brief	�ȉ��̎Z�p���Z���s���i����sizeof���Z�q��typeid���Z�q��K�p�����l��\������v���O�������쐬����B�܂��A���s���ʂɑ΂���l�@���s�����B
 *			int+int double+double int+double double+int
 * @author shitashige
 * @date 20200213
 */

#include <iostream>

/**
 * @fn
 * ���C���֐�
 * @brief �^���Ⴄ�ϐ��̉��Z���s���֐�
 * @return 0:����I��
 */
int main() {

	int intNoOne = 1;				// int1
	int intNoTwo = 1;				// int2
	double doubleNoOne = 1;			// double1
	double doubleNoTwo = 1;			// double2

	/* ���ʏo�� */
	std::cout << "<int+int>\n size" << sizeof(intNoOne + intNoTwo) << "\n type:" << typeid(intNoOne + intNoTwo).name()
		<< "\n<double+double>\n size" << sizeof(doubleNoOne + doubleNoTwo) << "\n type:" << typeid(doubleNoOne + doubleNoTwo).name()
		<< "\n<int+double>\n size" << sizeof(intNoOne + doubleNoTwo) << "\n type:" << typeid(intNoOne + doubleNoTwo).name()
		<< "\n<double+int>\n size" << sizeof(intNoOne + doubleNoTwo) << "\n type:" << typeid(intNoOne + doubleNoTwo).name();
		/*
		 * �l�@�F���A���������Ƃ�^���D�悳���B
		 */

	return 0;
}