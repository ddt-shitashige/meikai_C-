/**
 * @file Exerises8-8.cpp
 * @brief ���K8-8	������s���̕����𖖔�����擪�ւƋt���ɕ\������֐�put_rev���쐬����B���Ƃ��΁A������s��"abc"�ł���΁A�ucba�v�ƕ\������B
 *					void put_rev(const char *s)
 * @author shitashige
 * @date 20200325
 */


#include <iostream>


 /**
  * @fn
  * put_rev
  * @brief ��������t���ɕ\������
  * @param s ������
  * @return 0:����I��
  */
void put_rev(const char *s) {
	/* null����������܂Ń��[�v */
	for (int i = std::strlen(s) - 1; i >= 0; i--) {
		/* ������o�� */
		std::cout << s[i];
	}
}

/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	const int stringLen = 30;	// ��������

	char inputString[stringLen];	// ���͕���

	/* ���b�Z�[�W�\�� */
	std::cout << "���������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(inputString, stringLen);

	/* ��������t���ɏo�� */
	put_rev(inputString);

}