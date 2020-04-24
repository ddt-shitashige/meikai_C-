/**
 * @file Exerises3-1.cpp
 * @brief ���K3-1 List3-2�́u�ǁv�̎��ʕ\���Ɓu�D�܂��͉v�̎��ʕ\�����s���v���O�����ł������B�����ȊO�̏����ł����ʕ\������悤�ɕύX�����v���O�������쐬����B
 * @author shitashige
 * @date 20020424
 */



#include <ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

/* ���т͗�[B:70�`79]���H*/
bool isB(int x) {
	return x >= 70 && x <= 79;
}

/* ���т͗D[A:80�`100]�܂��͉�[C:60�`69]���H */
bool isAorC(int x) {
	return(x >= 80 && x <= 100 || (x >= 60 && x <= 69));
}

/*
 *@fn
 * @brief 60�_�ȉ����`�F�b�N����֐�
 * @param x �_��
 * @return ����
 */
bool isNg(int x) {
	return(x < 60);
}


/* �֐�fit(x)�̕ԋp�l���^�ł���z��a�̗v�f�̎��ʕ\�� */
void put_list(const int a[], int n, bool(*fit)(int)) {

	/* �v�f�����[�v */
	for (int i = 0; i < n; i++) {
		/* �����ɂ��`�F�b�N */
		if ((*fit)(a[i])) {
			/* ���b�Z�[�W�o�� */
			cout << "��";
		}
		else {
			/* ���b�Z�[�W�o�� */
			cout << "�@";
		}
		/* ���b�Z�[�W�o�� */
		cout << "a[" << i << "] = " << a[i] << '\n';
	}
}

/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	int a[10];	// �_��
	int n = sizeof(a) / sizeof(a[0]);	// �v�f��

	srand(time(NULL));	// �����̎��������
	
	/* �v�f�����[�v */
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 101;	// 0�`100�̗�������
	}

	/* ���b�Z�[�W�o�� */
	cout << "��----------\n";
	put_list(a, n, isB);	// ��[B]�Ɂ���t���Ĉꗗ�\��
	/* ���b�Z�[�W�o�� */
	cout << "\n�D�܂��͉�--\n";
	put_list(a, n, isAorC);	// �D[A]�܂��͉�[C]�Ɂ���t���Ĉꗗ�\��

	/* ���b�Z�[�W�o�� */
	cout << "\n�s��-------\n";
	/* �֐��Ăяo�� */
	put_list(a, n, isNg);


}