/**
 * @file Exerises8-17.cpp
 * @brief ���K8-17	��̕�����si��s2�̓��e������������ꂩ����֐�swap_string���쐬����B���Ƃ��΁A�z��p��q�ɕ�����"ABCDEF"��"XYZ"�i�[����Ă��āAswap_string(p,q)�ƌĂяo�����ꍇ�A�֐�����߂��Ă����Ƃ��̔z��p�̕������"XYZ"�ƂȂ��āA�z��q�̕������"ABCDEF"�ƂȂ�B
 *					void swap_string(char *s1, char *s2)
 * @author shitashige
 * @date 20200326
 */


#include <iostream>
const int stringLen = 30;	// ��������

 /**
  * @fn
  * swap_string
  * @brief ���������ւ����s��
  * @param s1 ������1
  * @param s2 ������2
  * @return
  */
void swap_string(char *s1, char *s2) {

	char cacheString[stringLen];	// �ꎞ�ۑ�������

	/* ��������ꎞ�ۑ��ɃR�s�[ */
	memcpy(cacheString, s1, stringLen);
	/* ������̃R�s�[ */
	memcpy(s1, s2, stringLen);
	/* �ꎞ�ۑ�����������̃R�s�[ */
	memcpy(s2, cacheString, stringLen);

	return;
}



/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {


	char firstInputString[stringLen];	// ���͕���1
	char secondInputString[stringLen];	// ���͕���2


	/* ���b�Z�[�W�\�� */
	std::cout << "���������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(firstInputString, stringLen);

	/* ���b�Z�[�W�\�� */
	std::cout << "���������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(secondInputString, stringLen);


	/* ������̓���ւ����s�� */
	swap_string(firstInputString, secondInputString);

	/* ���b�Z�[�W�\�� */
	std::cout << "���ʁF\n1:" << firstInputString << "\n2:" << secondInputString;


}