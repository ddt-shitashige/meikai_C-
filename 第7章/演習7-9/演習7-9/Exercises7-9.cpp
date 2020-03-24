/**
 * @file Exerises7-9.cpp
 * @brief ���K7-9	�v�f��n�̔z��a�̗v�fa[idx]��x��}������֐�aryins���쐬����B
 *					�}���ɔ�����a[idx]�`a[n-2]�������ɂ��炳�Ȃ���΂Ȃ�Ȃ��B���Ƃ��΁A�z��a�̗v�f��{1, 3, 4, 7, 9, 11}�̂Ƃ���aryins(a, 6, 2, 99) �ƌĂяo������̔z��a�̗v�f��{1, 3, 99, 4, 7, 9}�ƂȂ�B
 *					int aryins(int a[], int n, int idx, int x)
 * @author shitashige
 * @date 20200324
 */



#include <iostream>

using namespace std;
/**
 * @fn
 * main
 * @brief �z��ɗv�f������
 * @param a �z��
 * @param n �v�f��
 * @param idx �}������v�f�ԍ�
 * @param idx �}�����鐔�l
 * @return ��蕶�Ɏw�肵�Ă��邩�炷�邯�ǂ���int�̕K�v�Ȃ��̂ł́H
 */
int aryins(int a[], int n, int idx, int x) {

	/* �v�f�ԍ�����z���}�����郋�[�v */
	for (int i = n - 1; i > idx - 1; i--) {

		/* �l��}������܂ł̂��炵���z��̍쐬 */
		a[i] = a[i - 1];
	}

	/* �l��}�� */
	a[idx] = x;

	return 0;
}


/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	const int  element = 5;	// �z��̗v�f��

	int array[element];	// �z��c

	/* �z��̒��g������ */
	for (int i = 0; i < element; i++) {
		/* ���b�Z�[�W�\�� */
		cout << "c[" << i << "]:";
		/* c�̒��g������ */
		cin >> array[i];
	}

	int insertIndex = 0;	// �}�����鍀��

	do {
		/* ���b�Z�[�W�\�� */
		cout << "�}�����鍀�Ԃ���͂��Ă��������B\n";
		/* �폜���鍀�ԓ��� */
		cin >> insertIndex;
		/* �z��̗v�f���ȏ�ɒl���������ꍇ�͂�����x�s�� */
	} while (insertIndex < 1 || insertIndex>5);

	int insertNumber;	// �}�����l

	/* ���b�Z�[�W�\�� */
	cout << "�}�����鐔�l����͂��Ă��������B\n";
	/* �}�����鐔�l���� */
	cin >> insertNumber;

	/* �}���֐��Ăяo�� */
	aryins(array, element, insertIndex, insertNumber);

	/* �z��̒��g��\�����郋�[�v */
	for (int i = 0; i < element; i++) {
		/* �z��̒��g��\�� */
		cout << "c[" << i << "]" << array[i] << '\n';
	}

	return 0;
}