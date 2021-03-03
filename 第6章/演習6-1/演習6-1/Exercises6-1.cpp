/**
 * @file Exerises6-1.cpp
 * @brief ���K6-1	�󂯎����int�^�̈����̒ln�����ł����-1��ԋp���A0�ł����0��ԋp���A���ł����1��ԋp����֐�sign_of���쐬����B�ȉ��̕������쐬���鎖�B
 					int sign_of(int n){ ... }
 * @author shitashige
 * @date 20200312
 */



#include <iostream>

 /**
   * @fn
   * �������ʊ֐�
   * @brief �����𔻒肷��
   * @return 0:n��0
   * @return 1:n�����l
   * @return -0:n�����l
   */
int sign_of(int n) {
	/* n�����l�Ȃ�1��Ԃ� */
	if (n > 0)
		return 1;
	/* n�����l�Ȃ�-1��Ԃ� */
	else if (n < 0)
		return -1;
	/* n��0�Ȃ�0��Ԃ� */
	else
		return 0;

}


/**
  * @fn
  * ���C���֐�
  * @brief ���v�ƕ��ς����߂�֐�
  * @return 0:����I��
  */
int main() {

	int inputNumber = 0;	// ���͐��l
	int returnNumber = 0;	// �߂萔�l

	/* ���͑����\�� */
	std::cout << "���l����͂��Ă��������B\n";

	/* ���l���� */
	std::cin >> inputNumber;

	/* �������� */
	returnNumber = sign_of(inputNumber);

	/* �߂�l���� */
	if (returnNumber == 1) {
		/* ���ʕ\�� */
		std::cout << "���l�ł�\n";
	}
	/* �߂�l���� */
	else if (returnNumber == -1) {
		/* ���ʕ\�� */
		std::cout << "���l�ł�\n";

	}
	/* �߂�l���� */
	else {
		/* ���ʕ\�� */
		std::cout << "0�ł�\n";
	}
	return 0;
}
