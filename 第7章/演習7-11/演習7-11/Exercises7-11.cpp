/**
 * @file Exerises7-11.cpp
 * @brief ���K7-11	n�s5���int�^2�����z��a�̑S�\���v�f�̒l���c���ɕ��ׂĕ\������֐�print2d���쐬����B
 *					�e�\���v�f���ǂ̂悤�Ȓl�ł����Ă��A�e��̐��l�̐擪�i���[�j�����낤�悤�ɁA�Œ���̃X�y�[�X���󂯂邱�ƁB
 *					void print2d(int a[][5], int n)
 * @author shitashige
 * @date 20200324
 */



#include <iostream>
#include <iomanip>

using namespace std;

const int  rowElement = 5;	// �z��̉��v�f��
const int  heightElement = 3;	// �z��̏c�v�f��


/**
 * @fn
 * main
 * @brief �z��̍ő�l�����߂�
 * @param reciveArray �󂯎��z��
 * @param element �v�f��
 * @return �z��̍ő�l
 */
int MaxLine(int reciveArray[][5], int element) {

	int maxNumber = 0;	// �ő吔�l

	/* �z��̒��g��S�Č��郋�[�v */
	for (int i = 0; i < heightElement; i++) {

		/* �z��̒��g��S�Č��郋�[�v */
		for (int j = 0; j < rowElement; j++) {
			/* �ő�l�����܂ł̂������Ă��邩���m�F */
			if (maxNumber < reciveArray[i][j]) {
				/* ���l������ */
				maxNumber = reciveArray[i][j];
			}
		}
	}

	return maxNumber;
}


/**
 * @fn
 * main
 * @brief ���������߂�
 * @param number ���l
 * @return ����
 */
int MaxDigit(int number) {

	int digit = 0;	// ����

	/* ���l��0�ɂȂ�܂Ń��[�v */
	while (number != 0) {
		/* 10�Ŋ���A������1������ */
		number /= 10;
		/* �������J�E���g�A�b�v */
		digit++;
	}
	return digit;
}


/**
 * @fn
 * main
 * @brief �z���\������
 * @param a �󂯎�����z��
 * @param n �v�f��
 * @return
 */
void print2d(int a[][5], int n) {

	/* �z��̍ő�l�����߂� */
	int maxNumber = MaxLine(a, n);	// �z��̍ő�l

	/* ���������߂� */
	int maxDigit = MaxDigit(maxNumber);	// �ő包��

	/* �z��̒��g��\�����郋�[�v */
	for (int i = 0; i < heightElement; i++) {
		for (int j = 0; j < rowElement; j++) {
			/* �󔒂��l�߂� */
			cout << setfill(' ');
			/* �X�y�[�X�����߂�(+1�̓}�C�i�X��)�\������ */
			cout << setw(maxDigit + 1) << left << a[i][j] << " ";
		}
		cout << '\n';
	}
	return;
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

	/* �\���֐��Ăяo�� */
	print2d(array, rowElement);


	return 0;
}