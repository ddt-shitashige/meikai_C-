/**
 * @file Exerises7-15.cpp
 * @brief ���K7-15	double�^�̔z��𓮓I�ɐ�������v���O�������쐬����B�v�f���̓L�[�{�[�h����ǂݍ��ނ��ƁB�܂��A�����Ɏ��s�����ꍇ�̏������s�����ƁB
 * @author shitashige
 * @date 20200324
 */



#include <iostream>
#include <iomanip>

using namespace std;


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
int MaxLine(double reciveArray[], int element) {

	int maxNumber = 0;	// �ő吔�l

	/* �z��̒��g��S�Č��郋�[�v */
	for (int i = 0; i < element; i++) {
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
void PrintArray(double recvArray[], int element) {

	/* �z��̍ő�l�����߂� */
	int maxNumber = MaxLine(recvArray, element);	// �z��̍ő�l

	/* ���������߂� */
	int maxDigit = MaxDigit(maxNumber);	// �ő包��

	/* �z��̒��g��\�����郋�[�v */
	for (int i = 0; i < element; i++) {
		/* �󔒂��l�߂� */
		cout << setfill(' ');
		/* �X�y�[�X�����߂�(+1�̓}�C�i�X��)�\������ */
		cout << fixed << setprecision(1) << setw(maxDigit + 1) << left << recvArray[i] << " ";
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


	double *doubleArray = NULL;	// double�^�̃|�C���^�m��

	int doubleElement;	// double�^�̗v�f��

	/* ���b�Z�[�W�\�� */
	cout << "�z��̊m�ې�;";
	/* �v�f������ */
	cin >> doubleElement;

	/* ��O�����m�F */
	try {
		/* �������m�� */
		doubleArray = new double[doubleElement];
	}
	/* �������m�ێ��s�� */
	catch (bad_alloc) {
		/* ���b�Z�[�W�\�� */
		cout << "�G���[���������܂����B";
	}

	/* Null�`�F�b�N */
	if (doubleArray == NULL) {
		/* ���b�Z�[�W�\�� */
		cout << "���������m�ۂł��܂���ł����B";

	}

	/* �z��̒��g������ */
	for (int i = 0; i < doubleElement; i++) {
		/* �z��ɐ��l���i�[���� */
		doubleArray[i] = i;
	}

	/* �\���֐��Ăяo�� */
	PrintArray(doubleArray, doubleElement);

	/* �������J�� */
	delete[] doubleArray;

	return 0;
}