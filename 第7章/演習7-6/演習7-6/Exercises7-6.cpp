/**
 * @file Exerises7-6.cpp
 * @brief ���K7-6	�v�f��n�̔z��a�̑S�v�f�̍��v�����߂ĕԋp����֐�sumOf���쐬����B
 *					int sumOf(int a[], int n)
 * @author shitashige
 * @date 20200324
 */



#include <iostream>

using namespace std;
/**
 * @fn
 * main
 * @brief �z��̗v�f�̍��v�����߂�
 * @param a �z��
 * @param n �v�f��
 * @return �v�f�̍��v��
 */
int sumOf(int a[], int n) {

	int addNumber = 0;	// ���v���l

	/* �z��v�f�����Z���郋�[�v */
	for (int i = 0; i < n; i++) {

		/* �l�����Z���� */
		addNumber += a[i];
	}

	return addNumber;
}


/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	const int  n = 5;	// �z��̗v�f��

	int c[n];	// �z��c

	/* �z��̒��g������ */
	for (int i = 0; i < n; i++) {
		/* ���b�Z�[�W�\�� */
		cout << "c[" << i << "]:";
		/* c�̒��g������ */
		cin >> c[i];
	}


	/* �z��̗v�f�̍��v�l�����߂ĕ\�� */
	cout << "�v�f���v�l��" << sumOf(c, n) << "�ł�\n";

	return 0;
}