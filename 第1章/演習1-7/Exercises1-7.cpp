#include "Exercises1-7.h"
/**
 * @file Exerises1-7.cpp
 * @brief ���K1-7	3��int�^�ϐ��ɒl�������A�����̍��v�ƕ��ς����߂�v���O�������쐬����B
 * @author shitashige
 * @date 20191211
 */



/**
 * @brief main�֐�
 * @return 0:����
 */
int main() {

	const int firstInt = 3;		// 1�ڂ�int�^
	const int secondInt = 6;	// 2�ڂ�int�^
	const int thirdInt = 9;		// 3�ڂ�int�^

	/* ���v�l�o�� */
	std::cout << "���v�l:" << calculationTotal(firstInt, secondInt, thirdInt) << "\n";

	/* ���ϒl�o�� */
	std::cout << "���ϒl:" << calculationAverage(firstInt, secondInt, thirdInt) << "\n";
}


/**
 * @brief 3�̈����ɗ^����ꂽ�����̕��ϒl�����߂�֐�
 * @param[in] firstNumber 1�ڂ̐���
 * @param[in] secondNumber 2�ڂ̐���
 * @param[in] thirdNumber 3�ڂ̐���
 * @return ���ϒl
 */
int calculationAverage(const int firstNumber, const int secondNumber, const int thirdNumber){

	/* ���ϒl�v�Z */
	return ((firstNumber + secondNumber + thirdNumber) / 3);
}


/**
 * @brief 3�̈����ɗ^����ꂽ�����̍��v�l�����߂�֐�
 * @param[in] firstNumber 1�ڂ̐���
 * @param[in] secondNumber 2�ڂ̐���
 * @param[in] thirdNumber 3�ڂ̐���
 * @return ���v�l
 */
int calculationTotal(const int firstNumber, const int secondNumber, const int thirdNumber) {

	/* ���v�l�v�Z */
	return (firstNumber + secondNumber + thirdNumber);
}