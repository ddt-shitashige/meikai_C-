/**
 * @file Exerises1-8.cpp
 * @brief ���K1-8	int�^�̕ϐ��Ɏ����l�̏������q��^����Ƃǂ��Ȃ邩�B�v���O�������쐬���Ċm�F����B
 * @author shitashige
 * @date 20191211
 */

#include <iostream>

/**
 * @brief main�֐�
 * @return 0:����
 */
int main() {

	int initializerInt = 3;		// �������q��^����int
	int noInitializerInt;		// �������q��^����������int

	/* ���l��� */
	noInitializerInt = 3;


	/* ���v�l�o�� */
	std::cout << "�������q��^����int�̐��l:" << initializerInt << "\n";

	/* ���ϒl�o�� */
	std::cout << "�������q��^���Ȃ�����int�̐��l:" << noInitializerInt << "\n";

	/* �ꏏ�ł��� */
	std::cout << "�ꏏ�ł���";
}
