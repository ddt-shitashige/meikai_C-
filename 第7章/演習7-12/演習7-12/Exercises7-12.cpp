/**
 * @file Exerises7-12.cpp
 * @brief ���K7-12	�v�f��n�̔z��p�̑S�v�f��v��������֐�fill���쐬����B
 *					void fill(int *p, int n, int v)
 * @author shitashige
 * @date 20200324
 */



#include <iostream>
#include <iomanip>

using namespace std;

const int  rowElement = 5;	// �z��̉��v�f��


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
 * @brief �z��̍ő�l�����߂�
 * @param reciveArray �󂯎��z��
 * @param element �v�f��
 * @return �z��̍ő�l
 */
int MaxLine(int reciveArray[5], int element) {

	int maxNumber = 0;	// �ő吔�l

	/* �z��̒��g��S�Č��郋�[�v */
	for (int i = 0; i < rowElement; i++) {
		/* �ő�l�����܂ł̂������Ă��邩���m�F */
		if (maxNumber < reciveArray[i]) {
			/* ���l������ */
			maxNumber = reciveArray[i];
		}
	}
	return maxNumber;
}

/**
 * @fn
 * main
 * @brief �z���\������
 * @param recvArray �󂯎�����z��
 * @param n �v�f��
 * @return
 */
void print2d(int recvArray[5], int element) {

	/* �z��̍ő�l�����߂� */
	int maxNumber = MaxLine(recvArray, element);	// �z��̍ő�l

	/* ���������߂� */
	int maxDigit = MaxDigit(maxNumber);	// �ő包��

	/* �z��̒��g��\�����郋�[�v */
	for (int i = 0; i < rowElement; i++) {
		/* �󔒂��l�߂� */
		cout << setfill(' ');
		/* �X�y�[�X�����߂�(+1�̓}�C�i�X��)�\������ */
		cout << setw(maxDigit + 1) << left << recvArray[i] << " ";
	}
	return;
}


/**
 * @fn
 * main
 * @brief �z��̑S�v�f�ɒl���i�[����
 * @param *p �󂯎�����z��
 * @param n �v�f��
 * @param v �i�[���鐔�l
 * @return
 */
void fill(int *p, int n, int v) {

	/* �v�f�������[�v */
	for (int i = 0; i < n; i++) {
		/* ���l�i�[ */
		p[i] = v;
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


	int array[rowElement];	// �z��

	/* �z��̒��g������ */
	for (int i = 0; i < rowElement; i++) {

		/* ���b�Z�[�W�\�� */
		cout << "array[" << i << "]:";
		/* c�̒��g������ */
		cin >> array[i];
	}

	int inputNumber;	// �i�[���鐔�l

	/* ���b�Z�[�W�\�� */
	cout << "�i�[���鐔�l:";
	/* c�̒��g������ */
	cin >> inputNumber;


	/* �i�[�֐��Ăяo�� */
	fill(array, rowElement, inputNumber);

	/* �\���֐��Ăяo�� */
	print2d(array, rowElement);


	return 0;
}