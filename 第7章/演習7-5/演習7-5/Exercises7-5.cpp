/**
 * @file Exerises7-5.cpp
 * @brief ���K7-5	List7-10�̊֐�reverse�ł�2�v�f�̌������A���K7-2�ō쐬�����֐�swap�̌ďo���ɂ���čs���悤�ɕύX�����v���O�������쐬����B
 * @author shitashige
 * @date 20200324
 */



#include <iostream>

using namespace std;
/**
 * @fn
 * main
 * @brief �z��̕��т𔽓]����
 * @param a �z��
 * @param n �v�f��
 * @return
 */
void reverse(int a[], int n) {
	/* �z��𔽓]���郋�[�v */
	for (int i = 0; i < n / 2; i++) {

		/* �l����������֐����Ăяo���B */
		swap(a[i], a[n - i - 1]);
	}
}

/**
 * @fn
 * main
 * @brief ����1�ƈ���2�̒l������
 * @param x 1�ڂ̐��l
 * @param y 2�ڂ̐��l
 * @return 0:����I��
 */
void swap(int *x, int *y) {
	/* t��x������*/
	int t = *x;
	/* x�̒l��y�ɂ��� */
	*x = *y;
	/* y�̒l��x�ɂ��� */
	*y = t;
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

	/* �z��̒��g���t�ɂ��� */
	reverse(c, n);

	/* ���b�Z�[�W�\�� */
	cout << "�v�f�̕��т𔽓]���܂���\n";

	/* �z��̒��g��\�����郋�[�v */
	for (int i = 0; i < n; i++) {
		/* �z��̒��g��\�� */
		cout << "c[" << i << "]" << c[i] << '\n';
	}

	return 0;
}