/**
 * @file Exerises7-8.cpp
 * @brief ���K7-8	�v�f��n�̔z��a����v�fa[idx]��擪�Ƃ���k�̗v�f���폜����֐�arynrmv���쐬����B
 *					�폜��a[idx]������̑S�v�f��k�O���ɂ��炷���Ƃɂ���čs�����ƁB�Ȃ��A�ړ����ꂸ�ɂ��܂��Ă��܂��v�f�̒l�͕ύX���Ȃ��Ă悢�B
 *					int arynrmv(int a[], int n, int idx, int k)
 * @author shitashige
 * @date 20200324
 */



#include <iostream>

using namespace std;
/**
 * @fn
 * main
 * @brief �z��̗v�f�����炷
 * @param a �z��
 * @param n �v�f��
 * @param idx �폜����v�f�ԍ�
 * @param k �폜����v�f��
  * @return ��蕶�Ɏw�肵�Ă��邩�炷�邯�ǂ���int�̕K�v�Ȃ��̂ł́H
 */
int arynrmv(int a[], int n, int idx, int k) {

	/* �v�f�ԍ�����z����폜���郋�[�v */
	for (int i = idx + 1; i < n; i++) {

		/* �z��̍ő�v�f���𒴂��Ă��Ȃ������ꍇ�̏��� */
		if (i + k < n) {
			/* �l�����炷 */
			a[i - 1] = a[i + k - 1];
		}
		/* �z��̍ő�v�f���𒴂��Ă����ꍇ�̏��� */
		else {
			/* ��Ԍ��̒l������ */
			a[i - 1] = a[n - 1];
		}
	}
	return 0;
}


/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	const int element = 5;	// �z��̗v�f��

	int array[element];	// �z��c

	/* �z��̒��g������ */
	for (int i = 0; i < element; i++) {
		/* ���b�Z�[�W�\�� */
		cout << "c[" << i << "]:";
		/* c�̒��g������ */
		cin >> array[i];
	}

	int removeIndex = 0;	// �폜���鍀��

	do {
		/* ���b�Z�[�W�\�� */
		cout << "�폜���鍀�Ԃ���͂��Ă��������B\n";
		/* �폜���鍀�ԓ��� */
		cin >> removeIndex;
		/* �z��̗v�f���ȏ�ɒl���������ꍇ�͂�����x�s�� */
	} while (removeIndex < 0 || removeIndex>5);

	int removeCount = 0;	// �폜�����

	do {
		/* ���b�Z�[�W�\�� */
		cout << "�폜���������͂��Ă��������B\n";
		/* �폜���鍀�ԓ��� */
		cin >> removeCount;
		/* �z��̗v�f���ȏ�ɒl���������ꍇ�͂�����x�s�� */
	} while (removeCount < 0 || removeCount>5);



	/* ���炵�֐��Ăяo�� */
	arynrmv(array, element, removeIndex, removeCount);

	/* �z��̒��g��\�����郋�[�v */
	for (int i = 0; i < element; i++) {
		/* �z��̒��g��\�� */
		cout << "c[" << i << "]" << array[i] << '\n';
	}

	return 0;
}