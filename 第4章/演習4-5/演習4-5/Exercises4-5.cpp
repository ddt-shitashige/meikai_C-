/**
 * @file Exerises4-5.cpp
 * @brief	float�^�̕ϐ���double�^�̕ϐ��ɃL�[�{�[�h���琔�l��ǂݍ���ŁA���̒l��\������v���O�������쐬����B
			�F�X�Ȓl����͂��āA��������؂��鎖�B
 * @author shitashige
 * @date 20200210
 */
#include <iostream>
 /**
  * @fn
  * ���C���֐�
  * @brief float�^�̕ϐ���double�^�̕ϐ��ɃL�[�{�[�h���琔�l��ǂݍ���ŁA���̒l��\������֐��B
  * @return 0:����I��
  */
int main() {

	float floatNumber = 0;		// float����
	double doubleNumber = 0;		// double����

	/* float�������͑��� */
	std::cout << "float�����F" << "\n";

	/* float�������� */
	std::cin >> floatNumber;

	/* float�����o�� */
	std::cout << "float�����F" << floatNumber << "\n";

	/* double�������͑��� */
	std::cout << "double�����F" << "\n";

	/* double�������� */
	std::cin >> doubleNumber;

	/* double�����o�� */
	std::cout << "double�����F" << doubleNumber << "\n";

}