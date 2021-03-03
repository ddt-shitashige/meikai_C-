/**
 * @file Exerises2-6.cpp
 * @brief ���K2-6 �����Ŋw�K����3�̌^�ϊ�(����r�b�g�ւ̌^�ϊ��E��蒷���r�b�g�ւ̌^�ϊ��E���Z���r�b�g�ւ̌^�ϊ�)���m�F�ł���Ղ낮��ނ��쐬����B�ϐ��O��̒l�ƃr�b�g�\����\�����鎖�B
 * @author shitashige
 * @date 20020421
 */

#include <iostream>

using namespace std;

/**
 * @fn
 * @brief �r�b�g���𐔂���֐�
 * @param x ���l
 * @return ��
 */
int count_bits(unsigned x) {
	int bits = 0;	// �r�b�g��
	/* 0������܂Ń��[�v */
	while (x) {
		/* 1��������r�b�g���̃J�E���g�A�b�v */
		if (x & 1U)bits++;
		/* �E�Ɍ������炷 */
		x >>= 1;
	}
	return bits;
}

/**
 * @fn
 * @brief �r�b�g����ԋp����֐�
 * @return �r�b�g��
 */
int int_bits() {
	return count_bits(~0U);
}

/**
 * @fn
 * @brief char�^�̃r�b�g�l��\������֐�
 * @param x ���l
 */
void charPrintBits(char x) {
	/* �r�b�g�������[�v���� */
	for (int i = sizeof(char) * 8 - 1; i >= 0; i--) {
		/* ���ʂ��o�� */
		cout << ((x >> i) & 1U ? '1' : '0');
	}
}


/**
 * @fn
 * @brief short�^�̃r�b�g�l��\������֐�
 * @param x ���l
 */
void shortPrintBits(short x) {
	/* �r�b�g�������[�v���� */
	for (int i = sizeof(short) * 8 - 1; i >= 0; i--) {
		/* ���ʂ��o�� */
		cout << ((x >> i) & 1U ? '1' : '0');
	}
}

/**
 * @fn
 * @brief long�^�̃r�b�g�l��\������֐�
 * @param x ���l
 */
void longPrintBits(long x) {
	/* �r�b�g�������[�v���� */
	for (int i = sizeof(long) * 8 - 1; i >= 0; i--) {
		/* ���ʂ��o�� */
		cout << ((x >> i) & 1U ? '1' : '0');
	}
}


/**
 * @fn
 * @brief ���C���֐�
 * @return 
 */
int main() {
	short number;	// ���l
	/* ���b�Z�[�W�o�� */
	cout << "���l����\n";
	/* ���l���� */
	cin >> number;
	/* ���ʏo�� */
	cout << "short:"; shortPrintBits(number); cout << "\n";
	/* ���ʏo�� */
	cout << "char:"; charPrintBits(static_cast<char>(number)); cout << "\n";
	/* ���ʏo�� */
	cout << "long:"; longPrintBits(static_cast<long>(number)); cout << "\n";

}