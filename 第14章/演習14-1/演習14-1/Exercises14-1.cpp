/**
 * @file Exerises14-1.cpp
 * @brief ���K14-0	���K11-3�ō쐬���������N���X�ɁA�e��̉��Z�q�֐���ǉ�����B�d�l�Ȃǂ͎����ōl���邱�ƁB
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