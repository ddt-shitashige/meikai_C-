/**
 * @file Exerises7-4.cpp
 * @brief ���K7-4	typeid���Z�q��p���Č^��\�����邱�Ƃɂ���āAList7-10�̊֐�reverse�̉�����a���z��łȂ��|�C���^�ł��邱�Ƃ��m�F����B
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
		/* t�ɔz��̓��������� */
		int t = a[i];
		/* �z��̐K�����z��̓��ɓ���� */
		a[i] = a[n - i - 1];
		/* t�̓��e��K�ɓ���� */
		a[n - i - 1] = t;
	}
	/* �������̌^��\�� */
	cout << "a�̌^�u" << typeid(a).name() << "�v\n";
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