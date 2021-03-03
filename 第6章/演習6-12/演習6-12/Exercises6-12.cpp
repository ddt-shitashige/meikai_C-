/**
 * @file Exerises6-12.cpp
 * @brief ���K6-12	b�ȏ�a�ȉ��̑S�����̘a�����߂�֐�sum���쐬����B�Ȃ��Ab�ɑ΂�����������ȗ�����ČĂяo���ꂽ�ꍇ��b��1�ƌ��܂��č��v�����߂鎖�B
					int sum(int a, int b)
 * @author shitashige
 * @date 20200323
 */


#include <iostream>
using namespace std;

/**
  * @fn
  * sum
  * @brief b�ȏ�a�ȉ��̑S�����̘a�����߂�֐�
  * @param a �ő�l
  * @param b �ŏ��l
  * @return
  */
int sum(int a, int b = 1) {
	int returnNumber = 0;	// ���^�[�����鐔�l


	/* ���^�[�����鐔�l��b�ȏ�a�ȉ��̐��l�����Z���� */
	for (int i = b; i <= a; i++) {
		/* ���^�[�����鐔�l��b����J��オ���Ă������l�����Z */
		returnNumber += i;
	}
	return returnNumber;
}

/**
 * @fn
 * main
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {

	/* ���b�Z�[�W�o�� */
	cout << "���l��2���͂��Ă��������B\n";

	int maxNumber;	// �ő�ԍ�
	int minNumber;	// �ŏ��ԍ�

	/* �ŏ��l�ƍő�l�����[�U�[���� */
	cin >> maxNumber >> minNumber;

	/* �S�a���̊֐����Ăяo���ĕ\��*/
	cout << "���ʂ́u" << sum(maxNumber, minNumber) << "�v�ł����B\n��ڏȗ����́u" << sum(maxNumber) << "�v�ł����B\n";



	return 0;
}