/**
 * @file Exerises14-1.cpp
 * @brief ���K14-1	�f�X�g���N�^���f�[�^�����o�̋t���ɌĂяo����邱�Ƃ��m�F���邽�߂̃v���O�������쐬����B
 * @author shitashige
 * @date 20200401
 */

#include <iostream>

/* 1�ڂ̃N���X */
class FirstClass {
	public:
		FirstClass() {
			std::cout<<"1�ڂ̃N���X�̃R���X�g���N�^\n";
		}
		~FirstClass() {
			std::cout << "1�ڂ̃N���X�̃f�X�g���N�^\n";
		}
};

/* 1�ڂ̃N���X */
class SecondClass {
public:
	SecondClass() {
		std::cout << "2�ڂ̃N���X�̃R���X�g���N�^\n";
		FirstClass();
	}
	~SecondClass() {
		std::cout << "2�ڂ̃N���X�̃f�X�g���N�^\n";
	}
};

/* ���C���֐� */
int main() {
	SecondClass();
}