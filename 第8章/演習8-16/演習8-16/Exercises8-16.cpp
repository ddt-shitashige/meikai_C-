/**
 * @file Exerises8-16.cpp
 * @brief ���K8-16	������s1���̐����������폜����֐�strrmv_digits���쐬����B���Ƃ��΁A������s��"a1bc39d"�ł���΁A���̕������"abcd"�ɍX�V����B�󂯎����s�̒l�����̂܂ܕԋp���邱�ƁB
 *					char *strrmv_digits(char *s)
 * @author shitashige
 * @date 20200326
 */


#include <iostream>
const int stringLen = 30;	// ��������

 /**
  * @fn
  * strrmv_digits
  * @brief �����񂭂�ʂ����s��
  * @param s ������
  * @return ����ʂ�������
  */
char *strrmv_digits(char *s) {

	char judgementString[stringLen];	// ���f������
	int matchCount = 0;	// �}�b�`�J�E���g

	/* ������̃R�s�[ */
	memcpy(judgementString, s, stringLen);

	int i = 0;	// for���̒��Ŏg���J�E���g
	/* null����������܂Ń��[�v */
	for (i = 0; i < std::strlen(s); i++) {
		/* ������0�`9�̊ԈȊO�����f */
		if ((judgementString[i] >= '0' && judgementString[i] <= '9')) {
			/* �}�b�`�J�E���g�J�E���g�A�b�v */
			matchCount++;
		}
		else {
			/* �������͂�������������i�[ */
			s[i - matchCount] = judgementString[i];
		}
	}

	/* Null�����ǉ� */
	s[i - matchCount] = '\0';

	/* �������ԋp */
	return s;
}



/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {


	char inputString[stringLen];	// ���͕���

	/* ���b�Z�[�W�\�� */
	std::cout << "���������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(inputString, stringLen);

	/* ������̔�r���s�� */
	char *answer = strrmv_digits(inputString);

	/* ���b�Z�[�W�\�� */
	std::cout << "���ʁF\n";


	/* ���ʕ\�����[�v */
	for (int i = 0; i < std::strlen(answer); i++) {
		/* ���b�Z�[�W�\�� */
		std::cout << answer[i] << '\n';
	}

}