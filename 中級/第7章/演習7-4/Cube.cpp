#include "Cube.h"
#include <iostream>

/**
 * @fn
 * @brief ��������
 * @param lenght ����
 */
void Cube::Inputside(double lenght){
	/* �l�i�[ */
	side = lenght;
}

/**
 * @fn
 * @brief �ʐς����߂�
 */
void Cube::Area() {
	area = side * side * side;
}
/**
 * @fn
 * @brief ������o��
 */
void Cube::Print() {
	std::cout << "�ʐρF" << area << "\n�ӂ̒����F" << side;
}
