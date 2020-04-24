/**
 * @file Exerises3-3.cpp
 * @brief ���K3-3 �w�肳�ꂽ�����𖞂����v�f��z�񂩂�T������֐�search_if_all���쐬����B
 * �擪���̎O�̈����͑O��Ɠ��l�ł���B
 * �w�肳�ꂽ�����𖞂����S�v�f�̓Y�������i�[����ׂ̔z��𐶐����A���̔z��̐擪�v�f�փ|�C���^���4����idx�̎h���|�C���^�Ɋi�[���鎖�B�Ȃ��A�֐����ԋp����̂́A�i�[�����v�f���i�����𖞂������v�f���j�ł���B�i�Ⴆ�΁A�z��{1,3,6,7,8}��������ł���v�f��T�������ꍇ�́A6��8�̓Y�����ł���B{2,4}���i�[����z��𐶐����āA2��ԋp����j�Ȃ��A�����𖞂����v�f�����݂��Ȃ��ꍇ��idx�̂����|�C���^��NULL��������Ƌ��ɁA0��ԋp���鎖�B
 * @author shitashige
 * @date 20020424
 */


#include <ctime>
#include<cstdlib>
#include<iostream>


 /*
  *@fn
  * @brief 15�ȏ�30��������֐�
  * @param number ���l
  * @return ����
  */
bool fifteenToThirty(int number) {
	return number >= 15 && number < 30;
}

/*
 *@fn
 * @brief 5�Ŋ���؂��
 * @param number ���l
 * @return ����
 */
bool divisibleFive(int number) {
	return !(number % 5);
}


/*
 *@fn
 * @brief ���肷��֐�
 * @param a �v�f
 * @param n �v�f��
 * @param cond ����
 * @param idx �v�f���i�[�����z��
 * @return ����
 */
int search_if(const int a[], int n, bool cond(int n), int** idx) {
	int count = 0;	// �J�E���g
	/* �v�f�����[�v */
	for (int i = 0; i < n; i++) {
		/* ���� */
		if ((cond)(a[i])) {
			/* ���l�i�[ */
			(*idx)[count] = a[i];
			/* �J�E���g�A�b�v */
			count++;
		}
	}
	/* �J�E���g��0�������ꍇ�̏��� */
	if (count == 0) {
		idx = NULL;
		return -1;
	}
	return count;
}


/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	int point[10];	// �_��
	int element = sizeof(point) / sizeof(point[0]);	// �v�f��

	srand(time(NULL));	// �����̎��������

	/* �v�f�����[�v */
	for (int i = 0; i < element; i++) {
		point[i] = rand() % 101;	// 0�`100�̗�������
	}

	/* �v�f�����[�v */
	for (int i = 0; i < element; i++) {
		/* ���b�Z�[�W�o�� */
		std::cout << "a[" << i << "] = " << point[i] << '\n';
	}

	/* �ԋp�_��1�̒��g���` */
	int* firstbox = nullptr;
	/* �������m�� */
	firstbox = new int[10];

	/* �ԋp�_��2�̒��g���` */
	int* secondbox = nullptr;
	/* �������m�� */
	secondbox = new int[10];

	int count = search_if(point, element, fifteenToThirty, &firstbox);	// �J�E���g��

	/* ���b�Z�[�W�o�� */
	std::cout << "15�ȏ�30�ȉ��F\n";
	/* �v�f�������[�v */
	for (int i = 0; i < count; i++) {
		/* ���b�Z�[�W�o�� */
		std::cout << firstbox[i] << '\n';
	}
	/* �J�E���g�v�Z */
	count = search_if(point, element, divisibleFive, &secondbox);
	/* ���b�Z�[�W�o�� */
	std::cout << "5�Ŋ���؂��F\n";
	/* �v�f�������[�v */
	for (int i = 0; i < count; i++) {
		/* ���b�Z�[�W�o�� */
		std::cout << secondbox[i] << '\n';
	}
}






















