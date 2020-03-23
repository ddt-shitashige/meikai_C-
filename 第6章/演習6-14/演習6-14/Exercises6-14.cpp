/**
 * @file Exerises6-14.cpp
 * @brief ���K6-14	a,b������(a��b�ƂȂ�悤�ɕ��ёւ���)�Ƀ\�[�g����֐�sort���쐬����B
					void sort (int &a, int &b)
 * @author shitashige
 * @date 20200322
 */


#include <iostream>


/**
  * @fn
  * sort
  * @brief �����Ƀ\�[�g����
  * @param a ���l1
  * @param b ���l2
  * @return
  */
void sort(int &a,int &b) {
	/* a�̕����傫��������a��b�����ւ��� */
	if (a > b) {
		/* a��n�����ւ��� */
		std::swap(a,b);
	}

}

/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {


	/* ���b�Z�[�W�o�� */
	std::cout << "���l��2���͂��Ă��������B\n";

	int maxNumber;	// �ő�ԍ�
	int minNumber;	// �ŏ��ԍ�

	/* �ŏ��l�ƍő�l�����[�U�[���� */
	std::cin >> maxNumber >> minNumber;

	sort(minNumber,maxNumber);

	/* �S�a���̊֐����Ăяo���ĕ\��*/
	std::cout << "�\�[�g�������ʁA�������l�u" << minNumber << "�v\n�傫���l�u" << maxNumber << "�v�ƂȂ�܂���\n";
	return 0;
}