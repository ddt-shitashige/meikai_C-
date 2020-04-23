/**
 * @file Exerises2-4.cpp
 * @brief ���K2-4 �����Ȃ�����x�̑�pos�r�b�g�����pos�{n-1�r�b�g�܂ł�n�̃r�b�g��1�ɂ����l��Ԃ��֐�set_n,0�ɂ����l��Ԃ��֐�reset_n,���]�����l��Ԃ��֐�inverse_n���쐬����B
 * @author shitashige
 * @date 20020423
 */



#include<iostream>

 /**
  * @fn
  * @brief �����Ȃ�����x�̑�pos�r�b�g�����pos�{n-1�r�b�g�܂ł�n�̃r�b�g��1�ɂ����l��Ԃ��֐�
  * @param x ����
  * @param pos �ӏ�
  * @param n ��]��
  * @return ��
  */
unsigned set_n(unsigned x, int pos, int n) {

	unsigned number = 0;	// ���l

	/* 1�̒l��n�쐬���郋�[�v */
	for (int i = 1; i < n; i++) {
		/* �ŉ��wbit��1 */
		number = number| 1;
		/* ����1���炷 */
		number = number << 1;
	}

	/* pos�����炷���[�v */
	for (int i = 1; i < pos; i++) {
		/* ����1���炷 */
		number = number << 1;
	}

	/* �v�Z�������̂����^�[�� */
	return x | number;
	   }


/**
 * @fn
 * @brief �����Ȃ�����x�̑�pos�r�b�g�����pos�{n-1�r�b�g�܂ł�n�̃r�b�g��0�ɂ����l��Ԃ��֐�
 * @param x ����
 * @param pos �ӏ�
 * @param n ��]��
 * @return ��
 */
unsigned reset_n(unsigned x, int pos, int n) {

	unsigned number = 0;	// ���l

	/* 1�̒l��n�쐬���郋�[�v */
	for (int i = 1; i < n; i++) {
		/* �ŉ��wbit��1 */
		number = number | 1;
		/* ����1���炷 */
		number = number << 1;
	}

	/* pos�����炷���[�v */
	for (int i = 1; i < pos; i++) {
		/* ����1���炷 */
		number = number << 1;
	}
	/* �l�𔽓]���� */
	number = ~number;

	/* �v�Z�������̂����^�[�� */
	return x & number;
}


/*
 *@fn
 * @brief �����Ȃ�����x�̑�pos�r�b�g�����pos�{n-1�r�b�g�܂ł�n�̃r�b�g�ɔ��]�����l��Ԃ��֐�
 * @param x ����
 * @param pos �ӏ�
 * @param n ��]��
 * @return ��
 */
unsigned inverse_n(unsigned x, int pos, int n) {
	unsigned number = 0;	// ���l

	/* 1�̒l��n�쐬���郋�[�v */
	for (int i = 1; i < n; i++) {
		/* �ŉ��wbit��1 */
		number = number | 1;
		/* ����1���炷 */
		number = number << 1;
	}

	/* pos�����炷���[�v */
	for (int i = 1; i < pos; i++) {
		/* ����1���炷 */
		number = number << 1;
	}

	/* �v�Z�������̂����^�[�� */
	return x ^ number;
}
/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {

	unsigned number;	// ���l
	unsigned pos;	// �ӏ�
	unsigned count;	// �J�E���g


	/* ���b�Z�[�W�o�� */
	std::cout << "���l�Ɖӏ��ƃJ�E���g����͂��Ă�������\n";

	/* ���l���� */
	std::cin >> number >> pos >> count;

	/* ���ʏo�� */
	std::cout << "����(set):" << set_n(number, pos,count) << "\n����(reset):" << reset_n(number, pos,count) << "\n����(inverse):" << inverse_n(number, pos,count);

}