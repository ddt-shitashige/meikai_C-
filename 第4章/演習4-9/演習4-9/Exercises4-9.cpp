/**
 * @file Exerises4-9.cpp
 * @brief	3�̐����l��ǂݍ���ŁA���̍��v�ƕ��ς�\������v���O�������쐬����B
 *			���ς͎����n�ŕ\�����鎖�B�L���X�g�L�@��p������́B�֐��I�L�@��p������́Bstatic_cast�L�@��p������̂��쐬���鎖�B
 * @author shitashige
 * @date 20200216
 */


#include <iostream>

/**
 * @fn
 * ���C���֐�
 * @brief ���ς����߂�֐�
 * @return 0:����I��
 */
int main() {

	int inputNoOne = 1;				// ���̓i���o�[1
	int inputNoTwo = 1;				// ���̓i���o�[2
	int inputNoThree = 1;			// ���̓i���o�[3

	/* ���l���͑��� */
	std::cout << "���l��3���͂��ĉ�����";

	/* ���l���� */
	std::cin >> inputNoOne >> inputNoTwo >> inputNoThree;

	/* ���ʏo�� */
	std::cout << "���v�F" << inputNoOne + inputNoTwo + inputNoThree << "\n"
		<< "�����l���ρF" << (inputNoOne + inputNoTwo + inputNoThree) / 3 << "\n"
		<< "�L���X�g���ρF" << (double)(inputNoOne + inputNoTwo + inputNoThree) / 3 << "\n"
		<< "�֐��I�L�@���ρF" << double((inputNoOne + inputNoTwo + inputNoThree) / 3) << "\n"
		<< "static_cast���ρF" << static_cast<double>((inputNoOne + inputNoTwo + inputNoThree) / 3) << "\n";

	return 0;
}