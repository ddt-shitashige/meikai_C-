/**
 * @file Exerises7-15.cpp
 * @brief ���K7-15	double�^�̃I�u�W�F�N�g�𐶐�����0.0�ŏ���������v���O�������쐬����B
 * @author shitashige
 * @date 20200324
 */


#include <iostream>
#include <iomanip>



/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	double *doubleNumber;	// �_�u���^�̐��l

	/* �_�u���^�̃������m�� */
	doubleNumber= new double();

	/* �_�u���^�\�� */
	std::cout<<std::fixed << std::setprecision(1) <<*doubleNumber;

	/* �������J�� */
	delete doubleNumber;

	return 0;

}