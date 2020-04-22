/**
 * @file Exerises2-2.cpp
 * @brief ���K2-2 ������������x�̑S�r�b�g���E��n�r�b�g��]�����l��Ԃ��֐�rrotate�ƁA����n�r�b�g�J�X�����l��Ԃ�lrotate���쐬����B
 * @author shitashige
 * @date 20020420
 */


#include <iostream>


 /**
  * @fn
  * @brief �E��n�r�b�g��]����֐�
  * @param x ����
  * @param n ��]��
  * @return ��
  */
unsigned rrotate(unsigned x, int n) {

	unsigned bottomNumber = 0;	// �ŉ��w�̃r�b�g�l
	unsigned topNumber = 0U;	// �ŏ�ʂ̃r�b�g�l(��U�I�[��1�ɂ���)
	/* ��]�������[�v */
	for (int i = 0; i < n; i++) {
		/* �ŉ��w�̃s�b�g�l�擾 */
		bottomNumber = x & 1U;

		/* �ŏ�ʂ̃r�b�g�l������1���炷 */
		topNumber = topNumber / 2;

		/* +1���āA�ŏ�ʂ̂�1�ɂ��� */
		topNumber++;

		/* �ŉ��w�̒l�ŏ�ʂ𓯂��ɂ��� */
		topNumber = topNumber * bottomNumber;

		/* �v�Z */
		x = x / 2 + topNumber;

	}
	return x;

}

/**
 * @fn
 * @brief ����n�r�b�g��]����֐�
 * @param x ����
 * @param n ��]��
 * @return ��
 */
unsigned lrotate(unsigned x, int n) {

	unsigned topNumber = 0;	// �ŏ�ʂ̃r�b�g�l
	/* ��]�������[�v */
	for (int i = 0; i < n; i++) {
		/* �ŏ�ʂ̃s�b�g�l�擾 */
		topNumber = x & 1>>sizeof(unsigned);

		/* �g�b�v�i���o�[��0�Ȃ�ŏ��0 */
		if (topNumber == 0) {
			/* �������炵 */
			x = x * 2;
		}
		else {
			/* �������炵�{1 */
			x = x * 2 + 1;
		}
	}
	return x;
}



/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	unsigned number;	// ���l
	unsigned cicle;	// ��]��

	/* ���b�Z�[�W�o�� */
	std::cout << "���l�Ɖ�]������͂��Ă�������\n";

	/* ���l���� */
	std::cin >> number >> cicle;

	/* ���ʏo�� */
	std::cout << "����(�E):" << rrotate(number, cicle) << "\n����(��):" << lrotate(number, cicle);

}
