/**
 * @file Exerises9-2.cpp
 * @brief ���K9-2	��̐����lx��y�̍ő���񐔂����[�N���b�h�̌ݏ��@��p���ċ��߂�֐�
 *					int gcd(int x, int y)
 *					���쐬����B
 * @author shitashige
 * @date 20200327
 */


#include <iostream>

 /**
  * @fn
  * gcd
  * @brief �ő���񐔂����߂�
  * @param firstPointer 1�Ԗڂ̃|�C���^
  * @param secondPointer 2�Ԗڂ̃|�C���^
  * @return
  */
int gcd(int x, int y) {

	/* x�̕���傫�����鏈��*/
	if (x < y) {
		/* ���l����ւ� */
		int cacheNumber = x;	// �ꎞ�ۑ����l
		/* ���l����ւ� */
		x = y;
		/* ���l����ւ� */
		y = cacheNumber;
	}

	/* �����`�̗]������߂鏈�� */
	if (x % y != 0) {

		/* 0�ȊO���Ɛ����`�ł͂Ȃ����߁A������x�s���B */
		return gcd(y, x % y);
	}
	/* �]�肪������ΐ����`�Ȃ̂ŕԋp���� */
	else {
		/* �ӂ̒�����ԋp */
		return y;
	}
}



/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {


	int firstInputNumber;	// ���͐��l1	
	int secondInputNumber;	// ���͐��l2	

	/* ���b�Z�[�W�\�� */
	std::cout << "���l����͂��Ă��������B";

	/* ��������� */
	std::cin >> firstInputNumber;

	/* ���b�Z�[�W�\�� */
	std::cout << "���l����͂��Ă��������B";

	/* ��������� */
	std::cin >> secondInputNumber;


	/* ���ʕ\�� */
	std::cout << "���ʁF" << gcd(firstInputNumber, secondInputNumber);
}