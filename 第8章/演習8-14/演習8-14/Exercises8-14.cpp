/**
 * @file Exerises8-14.cpp
 * @brief ���K8-14	������s�̕����̕��т𔽓]����֐�str_rvs���쐬����B���Ƃ��΁A������s��"abc"�ł���΁A���̕������"cba"�ɍX�V����B�󂯎����s�̒l�����̂܂ܕԋp���邱�ƁB
 *					char *str_rvs(char *s)
 * @author shitashige
 * @date 20200326
 */


#include <iostream>
const int stringLen = 30;	// ��������

 /**
  * @fn
  * str_rvs
  * @brief �����񔽓]���s��
  * @param s ������
  * @return ���]��������
  */
char *str_rvs(char *s) {

	char cacheString;	// �ꎞ�ۑ��̕�����
	char *returnString = s;	// �ԋp�������s�Ɠ����|�C���^�ɂ���
	/* null����������܂Ń��[�v */
	for (int i = 0; i < std::strlen(s) / 2; i++) {
		/* �ꎞ�ۑ��̕�����ɓ�����̕������ێ� */
		cacheString = returnString[i];
		/* ���ƑO�̒l�����ւ��� */
		returnString[i] = returnString[std::strlen(returnString) - i - 1];
		/* �ꎞ�ۑ��̕���������ɓ���� */
		returnString[std::strlen(returnString) - i - 1] = cacheString;
	}
	return returnString;
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

	/* ������̓���ւ����s�� */
	char *answer = str_rvs(inputString);

	/* ���b�Z�[�W�\�� */
	std::cout << "���ʁF\n";


	/* ���ʕ\�����[�v */
	for (int i = 0; i < std::strlen(answer); i++) {
		/* ���b�Z�[�W�\�� */
		std::cout << answer[i] << '\n';
	}

}