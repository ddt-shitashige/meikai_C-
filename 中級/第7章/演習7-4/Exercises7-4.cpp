/**
 * @file Exerises7-4.cpp
 * @brief ���K7-4�@3�����N���XThreeDimensional�𒆑w�@��N���X�Ƃ��Ē�`����B����ɁAThreeDimensional���p������N���X�����R�ɒ�`����B
 * @author shitashige
 * @date 20200430
 */

#include <iostream>
#include "Cube.h"
/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */

int main() {
	Cube cube;	//������
	double lenght;	// �ӂ̒���

	/* ������o�� */
	std::cout << "�ӂ̒��������";

	/* ���l���� */
	std::cin >> lenght;

	/* �ӓo�^ */
	cube.Inputside(lenght);

	/* �ʐόv�Z */
	cube.Area();

	/* ���ʏo�� */
	cube.Print();


}