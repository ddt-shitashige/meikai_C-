/**
 * @file Exerises2-5.cpp
 * @brief ���K2-5 �����Ȃ�����x�̑S�r�b�g��1��0�ōr�炵��������i�Ⴆ��unsigned�^��16�r�b�g�Œl��43690�ł���΃i���������܂߂�17�����̕�����"10101010101010"�܂��Aunsigned�^��32�r�b�g�ł���΃i���������܂߂�33�����̕�������쐬���A���̕�����̐擪������ԋp����֐����쐬����B
 * @author shitashige
 * @date 20020421
 */

#include <iostream>

using namespace std;

/* ����x�̒���1�ł���r�b�g�������߂� */
int count_bits(unsigned x) {
	int bits = 0;
	while (x) {
		if (x& 1U)bits++;
		x >>= 1;
	}
	return bits;
}

/* int�^ unsigned�^�̃r�b�g�������߂� */
int int_bits() {
	return count_bits(~0U);
}

/* unsinged�^�̃r�b�g�\����\�� */
void print_bits(unsigned x) {
	for (int i = int_bits() - 1; i >= 0; i--)
		cout << ((x >> i) & 1U ? '1' : '0');
}

/**
 * @fn
 * @brief �擪������ԋp����֐�
 * @param x ������
 * @return ��
 */
const char* bits_of(unsigned x) {

	char *returnString = {};	// �ԋp������

	/* �������m�� */
	returnString = new char[1];

	/* �擪�̒l���ŉ��l�Ɉړ������� */
	x >>= sizeof(unsigned);

	/* �ŉ��l�ɂ���ď����𕪊� */
	if (x == 0) {
		/* 0�i�[ */
		returnString[0] = '0';
		return returnString;
	}
	else {
		/* 1�i�[ */
		returnString[0] = '1';
		return returnString;
	}
}



int main() {
	unsigned a, b;
	cout << "�񕉂̐���2���͂���\n";
	cout << "a:"; cin >> a;
	cout << "b:"; cin >> b;

	cout << "a    ="; print_bits(a); cout << "\n";
	cout << "b    ="; print_bits(b); cout << "\n";
	cout << "a&b  ="; print_bits(a&b); cout << "\n";	// �_���a
	cout << "a|b  ="; print_bits(a|b); cout << "\n";	// �_����
	cout << "a^b  ="; print_bits(a^b); cout << "\n";	// �_����
	cout << "-a	="; print_bits(~a); cout << "\n";	// 1�̕���
	cout << "-b	="; print_bits(~b); cout << "\n";	// 1�̕���


	const char *answerA;	// A�̌���
	const char *answerB;	// B�̌���
	answerA = bits_of(a);	//	���ʂ�ÓI�L�����Ԃ����z��Ɋi�[
	answerB = bits_of(b);	//	���ʂ�ÓI�L�����Ԃ����z��Ɋi�[
	/* ���ʏo�� */
	cout << "a�̍ŏ�ʁF" << answerA[0] << "\n";
	/* ���ʏo�� */
	cout << "b�̍ŏ�ʁF" << answerB[0] << "\n";

	/* �������J�� */
	delete[] answerA;
	/* �������J�� */
	delete[] answerB;
}