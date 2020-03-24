/**
 * @file Exerises7-10.cpp
 * @brief ���K7-10	n�s5���int�^2�����z��a�̊e�s�̍ő�l���A�v�f��n��1�����z��m�Ɋi�[����֐�maxline���쐬����B
 *					���Ƃ��΁Aa�Ɏ󂯎����3�s5��̔z��̍\���v�f��{ {1, 2, 5, 4, 8}, {6, 7, 4, 2, 3}, {3, 0, 5, 9, 1} }�ł���΁Am��{8, 7, 9}���i�[���邱�ƁB
 *					int maxline(int a[][5], int m[], int n)
 * @author shitashige
 * @date 20200324
 */



#include <iostream>

using namespace std;

const int  rowElement = 5;	// �z��̉��v�f��
const int  heightElement = 3;	// �z��̏c�v�f��

/**
 * @fn
 * main
 * @brief �z��̍ő�l�����߂�
 * @param a �󂯎��z��
 * @param m �ő�l���܂Ƃ߂��z��
 * @param n �v�f��
 * @return ��蕶�Ɏw�肵�Ă��邩�炷�邯�ǂ���int�̕K�v�Ȃ��̂ł́H
 */
int maxline(int a[][5], int m[], int n) {

	/* �z��̒��g��S�Č��郋�[�v */
	for (int i = 0; i < heightElement; i++) {

		int maxNumber = 0;	// �ő吔�l
		/* �z��̒��g��S�Č��郋�[�v */
		for (int j = 0; j < rowElement; j++) {
			/* �ő�l�����܂ł̂������Ă��邩���m�F */
			if (maxNumber < a[i][j]) {
				/* ���l������ */
				maxNumber = a[i][j];
			}
		}
		/* �Ԋ҂���z��Ɋi�[ */
		m[i] = maxNumber;
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


	int array[heightElement][rowElement];	// �z��c

	/* �z��̒��g������ */
	for (int i = 0; i < heightElement; i++) {
		/* �z��̒��g������ */
		for (int j = 0; j < rowElement; j++) {

			/* ���b�Z�[�W�\�� */
			cout << "array[" << i << "]:" << "[" << j << "]";
			/* c�̒��g������ */
			cin >> array[i][j];
		}
	}

	int maxArray[heightElement];	// �ő�l�̔z��

	/* �}���֐��Ăяo�� */
	maxline(array, maxArray, rowElement);

	/* �z��̒��g��\�����郋�[�v */
	for (int i = 0; i < heightElement; i++) {
		/* �z��̒��g��\�� */
		cout << "maxArray[" << i << "]" << maxArray[i] << '\n';
	}

	return 0;
}