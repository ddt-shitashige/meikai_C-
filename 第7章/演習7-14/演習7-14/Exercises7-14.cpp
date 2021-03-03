/**
 * @file Exerises7-14.cpp
 * @brief ���K7-14	�v�f��n�̔z��a����key�Ɠ������S�v�f�̓Y����z��idx�Ɋi�[����֐�search_idx���쐬����B�ԋp����̂�key�Ɠ������v�f�̌��Ƃ���B
 *					���Ƃ��΁Aa�Ɏ󂯎�����z��̗v�f��{1, 7, 5, 7, 2, 4, 7}��key��7�ł���΁Aidx��{1, 3, 6}���i�[������� 3��ԋp����B
 *					int search_idx(int *a, int *idx, int n, int key)
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
 * @brief �z��̒����琔�l��T�m����
 * @param *a �T�m����z��
 * @param *idx �T�m�������l���ǂ��ɂ��邩�̔z��
 * @param n �v�f��
 * @param key �T�m���鐔�l
 * @return �T����̌�
 */
int search_idx(int *a, int *idx, int n, int key) {


	int idxCount = 0;	// idx�̃J�E���g
	/* �v�f�������[�v */
	for (int i = 0; i < n; i++) {
		/* �T�����l�Ɗi�[���l�������������ꍇ�̏��� */
		if (a[i] == key) {
			/* ���l���i�[ */
			idx[idxCount] = i;
			/* idx�̃J�E���g�J�E���g�A�b�v */
			idxCount++;
		}
	}
	return idxCount;
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
		/* �z��̒��g������ */
		cin >> array[i];
	}

	int searchNumber;	// �T���ԍ�

	/* ���b�Z�[�W�\�� */
	cout << "�T�����鐔�l��";
	/* �T���ԍ��̒��g������ */
	cin >> searchNumber;


	int searchArray[rowElement] = { 0 };	// �T����̔z��

	/* �i�[�֐��Ăяo��&�\�� */
	cout << "���ʂ�" << search_idx(array, searchArray, rowElement, searchNumber) << "������܂����B\n���Ԃ�\n";

	/* �\���֐��Ăяo�� */
	print2d(searchArray, rowElement);


	return 0;
}