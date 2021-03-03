/**
 * @file Exerises9-5.cpp
 * @brief ���K9-5	�z��̑S�v�f�̍ŏ��l�����߂�֐��e���v���[�g���쐬����B�Ȃ��A�ł�����������������߂���悤�ɂ��邽�߂ɁAconst char*�^�ɖ����I�ɓ��ꉻ�������̂����킹�č쐬���邱�ƁB
 *					template <class Type> Type minof (const Type x[], int n)
 * @author shitashige
 * @date 20200327
 */


#include <iostream>
#include <string.h>

const int stringElement=30;	// ������

 /**
  * @fn
  * minof
  * @brief ���l�̍ŏ��l�����^�[������
  * @param x �z��
  * @param n �v�f��
  * @return �ŏ��l
  */
template <class Type> Type minof (Type x[], int n) {
	/* �z��̍ŏ��̗v�f���i�[ */
	Type minNumber=x[0];	// �ŏ��l

	/* �v�f���S�ă��[�v */
	for (int i = 0; i < n; i++) {
		/* �v�f���̔�r */
		if (minNumber > x[i]) {
			/* min���ŏ��l�Ŗ���������l���i�[���� */
			minNumber = (x[i]);
		}
	}
	/* �ŏ��l��ԋp */
	return minNumber;
}

/**
 * @fn
 * minof
 * @brief ������̍ŏ��l�����^�[������
 * @param x �z��
 * @param n �v�f��
 * @return �ŏ��l
 */
template <> const char* minof<const char*> (const char **x, int n) {

	char *minChar =NULL;	// �ŏ��l

	/* �������m�� */
	minChar=new char[stringElement];

	/* �ŏ��̗v�f�i�[ */
	minChar=const_cast<char*>(x[0]);

	/* �v�f���S�ă��[�v */
	for (int i = 0; i < n; i++) {
		/* �v�f�̔�r */
		if (strcmp(minChar, x[i]) > 0) {
			/* min���ŏ��l�Ŗ���������l���i�[���� */
			minChar = const_cast<char*>(x[i]);
		}
	}

	/* �ŏ��l��ԋp */
	return minChar;
}


/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {


	int inputNumber[2];	// ���͐��l	
	const char inputString[2][stringElement]={"ABC","ABB"};	// �Œ蕶��

	/* ���b�Z�[�W�\�� */
	std::cout << "���l����͂��Ă��������B";

	/* ��������� */
	std::cin >> inputNumber[0];

	/* ���b�Z�[�W�\�� */
	std::cout << "���l����͂��Ă��������B";

	/* ��������� */
	std::cin >> inputNumber[1];

	/* ���ʕ\�� */
	std::cout << "���ʁF" << minof(inputNumber, 2)<<"\n";

	const char *aa[]={"ABC","ABB"};


	/* ���ʕ\�� */
	std::cout << "���ʁF" << minof(aa, 2);

}