/**
 * @file Exerises12-2.cpp
 * @brief ���K12-2	���L�̃N���XBoolean�ɑ΂��āAv��False�ł����bool�^��true���ATrue�ł����bool�^��false��ԋp���鉉�Z�q�֐�!��ǉ�����B
 * @author shitashige
 * @date 20200331
 */


#include <iostream>
#include "Boolean.h"
using namespace std;


/**
 * @fn
 * int_eq
 * @brief x��y�����������ǂ����m�F
 * @return
 */
Boolean int_eq(int x, int y) {
	return x == y;
}



/**
 * @fn
 * operator!
 * @brief v��false����true��Ԃ�
 * @return
 */
bool Boolean::operator!() const {

	return v == False;
}


/**
 * @fn
 * main
 * @brief ���C���֐�
 * @return
 */
int main() {
	int n;	// �ϐ�n
	Boolean a;	// �ϐ�a	�f�t�H���g�R���X�g���N�^
	Boolean b = a;	// �ϐ�b	�R�s�[�R���X�g���N�^
	Boolean c = 100;	// �ϐ�c	�ϊ��R���X�g���N�^
	Boolean x[8];	// x[0]�`x[7]	�f�t�H���g�R���X�g���N�^

	/* ���b�Z�[�W�\�� */
	cout << "�����l�F";
	/* �l���� */
	cin >> n;

	/* ���͒l��5�Ɣ�r */
	x[0] = int_eq(n, 5);

	/* ���͒l��3�Ɣ�r */
	x[1] = n != 3;

	/* False */
	x[2] = Boolean::False;

	/* 1000���i�[ */
	x[3] = 1000;

	/* true */
	x[4] = Boolean::True;

	/* ���b�Z�[�W�\�� */
	cout << "a�̒l�F" << int(a) << '\n';

	/* ���b�Z�[�W�\�� */
	cout << "b�̒l�F" << static_cast<const char *>(b) << '\n';

	/* x�̗v�f�����[�v */
	for (int i = 0; i < 8; i++) {
		/* ���b�Z�[�W�\�� */
		cout << "x[" << i << "] = " << x[i] << '\n';

	}

	/* ���b�Z�[�W�\�� */
	cout << "�������牺�́u�I�v�̃e�X�g����\n";


	/* x�̗v�f�����[�v */
	for (int i = 0; i < 8; i++) {
		/* ���b�Z�[�W�\�� */
		cout << boolalpha << "x[" << i << "] = " << !x[i] << '\n';

	}

}