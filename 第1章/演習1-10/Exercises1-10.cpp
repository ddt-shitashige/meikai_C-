/**
 * @file Exerises1-10.cpp
 * @brief ���K1-10	�E�Ɏ����悤�ɁB�L�[�{�[�h����ǂݍ��񂾐����l��10���������l��10���������l���o�͂���v���O�������쐬����
 * @author shitashige
 * @date 20191211
 */
#include <iostream>


/**
 * @brief main�֐�
 * @return 0:����
 */
int main() {

	int inputNumer = 0;		// ���͂��ꂽ����

	/* �������͂𑣂����b�Z�[�W�\�� */
	std::cout << "���l����͂��Ă��������B\n";

	/* ���[�U�[���琔�l����� */
	std::cin >> inputNumer;

	/*
	 * �����o��
	 */
	/* ���Z�l�\�� */
	std::cout << "10���������l��" << inputNumer + 10 << "�ł�\n";
	/* ���Z�l�\�� */
	std::cout << "10���������l��" << inputNumer - 10 << "�ł�\n";

	return 0;
}