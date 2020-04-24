/**
 * @file Exerises3-2.cpp
 * @brief ���K3-2 �w�肳�ꂽ�����𖞂����v�f��z�񂩂���`�T������֐�search_if���쐬����B
 * ������a�͒T���Ώۂ̔z��ł���A������n�͗v�f���ł���B��O����cond�ɂ͏������݂������ǂ����̔�����s���ׂ̊֐��ւ̃|�C���^���󂯎��B�����𖞂����v�f�̓��A�ł��퓬�͘a�̗v�f�̓Y������ԋp���鎖�B�������A�T���Ɏ��s�����ꍇ�ɂ�-1��ԋp������̂Ƃ���B
 * ���̊֐��͗Ⴆ�΁u15�ȏ�30�ȉ��̗v�f�̒T���v�u5�Ŋ���؂��v�f�̒T���v�Ƃ������Ɏ��̏����ł̒T�����\�Ƃ���B
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
 * @return ����
 */
int search_if(const int a[], int n, bool cond(int n)) {
	/* �v�f�����[�v */
	for (int i = 0; i < n; i++) {
		/* ���� */
		if ((cond)(a[i]))
			return a[i];
	}
	return -1;
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

	/* ���b�Z�[�W�o�� */
	std::cout << "15�ȏ�30�ȉ��F" << search_if(point, element, fifteenToThirty) << '\n';

	/* ���b�Z�[�W�o�� */
	std::cout << "5�Ŋ���؂��F" << search_if(point, element, divisibleFive) << '\n';


}