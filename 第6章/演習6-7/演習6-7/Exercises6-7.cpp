/**
 * @file Exerises6-7.cpp
 * @brief ���K6-7	����m�Ŏw�肳�ꂽ���̋G�߂�\������֐�print_screen���쐬����Bm��3,4,5�ł���΁u�t�v6,7,8�ł���΁u�āv9,10,11�ł���΁u�H�v12,1,2�ł���΁u�~�v�ƕ\�����A����ȊO�̒l�ł���Ή����\�����Ȃ����B
					void print_season(int m)
 * @author shitashige
 * @date 20200316
 */



#include <iostream>

 /**
   * @fn
   * �����̘a�����߂�֐�
   * @brief �G�߂�\������
   * @param[in] m ��
   * @return 1����n�܂ł̘a
   */
void print_season(int m) {

	/* �����t�̏ꍇ */
	if (m >= 3 && m <= 5) {
		/* ���ʕ\�� */
		std::cout << "�t�ł�\n";
	}
	/* �����Ă̏ꍇ */
	else if (m >= 6 && m <= 8) {
		/* ���ʕ\�� */
		std::cout << "�Ăł�\n";
	}
	/* �����H�̏ꍇ */
	else if (m >= 9 && m <= 11) {
		/* ���ʕ\�� */
		std::cout << "�H�ł�\n";
	}
	/* �����Ă̏ꍇ */
	else if (m == 12 || m == 1 || m == 2) {
		/* ���ʕ\�� */
		std::cout << "�~�ł�\n";
	}
}


/**
  * @fn
  * ���C���֐�
  * @brief �G�߂�\������֐�
  * @return 0:����I��
  */
int main() {

	int inputNumber = 0;	// ���͐��l
	/* ���͑����\�� */
	std::cout << "���l����͂��Ă��������B\n";

	/* ���l���� */
	std::cin >> inputNumber;

	/* �G�ߕ\�� */
	print_season(inputNumber);

	return 0;
}
