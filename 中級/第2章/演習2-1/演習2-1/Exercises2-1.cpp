/**
 * @file Exerises2-1.cpp
 * @brief ���K2-1 �����������������E�ɃV�t�g�����l���A�i�I�[�o�[�t���[���Ȃ�����j2�ׂ̂���ł̏�Z�⏜�Z�̉��Z���ʂƈ�v���邱�Ƃ��m�F����v���O�������쐬����B
 * @author shitashige
 * @date 20020417
 */


#include<iostream>

int main() {


	int number;	// ���l

	/* ���b�Z�[�W�o�� */
	std::cout << "���l����͂��Ă��������B";

	/* ���l���� */
	std::cin >> number;

	/* ���ʕ\�� */
	std::cout << "�E��1�V�t�g�������l:" << (number << 1) << "\n����1�V�t�g��������:" << (number >> 1);
}