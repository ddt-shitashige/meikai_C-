/**
 * @file Exerises7-7.cpp
 * @brief ���K7-7	�v�f��n�̔z��a����v�fa[idx]���폜����֐�aryrmv���쐬����B
 *					�폜��a[idx]������̑S�v�f����O���ɂ��炷���Ƃɂ���čs���B�ړ����ꂸ�ɂ��܂��Ă��܂������v�fa[n-1]�̒l�͕ύX���Ȃ��Ă��悢�B���Ƃ��΁A�z��a�̗v�f��{1, 3, 4, 7, 9, 11}�̂Ƃ���aryrmv(a, 6, 2) �ƌĂяo������̔z��a�̗v�f��{1, 3, 7, 9, 11, 11} �ƂȂ�B
 *					aryrmv(int a[], int n,int idx)
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
 * @return ��蕶�Ɏw�肵�Ă��邩�炷�邯�ǂ���int�̕K�v�Ȃ��̂ł́H
 */
int aryrmv(int a[], int n,int idx) {

	/* �v�f�ԍ�����z����폜���郋�[�v */
	for (int i = idx+1; i < n; i++) {

		/* �l�����Z���� */
		a[i-1]= a[i];
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

	const int  element = 5;	// �z��̗v�f��

	int array[element];	// �z��c

	/* �z��̒��g������ */
	for (int i = 0; i < element; i++) {
		/* ���b�Z�[�W�\�� */
		cout << "c[" << i << "]:";
		/* c�̒��g������ */
		cin >> array[i];
	}

	int removeIndex=0;	// �폜���鍀��

	do {
		/* ���b�Z�[�W�\�� */
		cout <<"�폜���鍀�Ԃ���͂��Ă��������B\n";
		/* �폜���鍀�ԓ��� */
		cin>>removeIndex;
		/* �z��̗v�f���ȏ�ɒl���������ꍇ�͂�����x�s�� */
	}while(removeIndex<1||removeIndex>5);

	/* ���炵�֐��Ăяo�� */
	aryrmv(array,element,removeIndex);

	/* �z��̒��g��\�����郋�[�v */
	for (int i = 0; i < element; i++) {
		/* �z��̒��g��\�� */
		cout << "c[" << i << "]" << array[i] << '\n';
	}

	return 0;
}