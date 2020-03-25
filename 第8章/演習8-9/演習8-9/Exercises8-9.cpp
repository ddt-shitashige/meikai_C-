/**
 * @file Exerises8-9.cpp
 * @brief ���K8-9	p.308�Ŋw�K����strcpy�֐������strncpy�֐��Ɠ����Ȋ֐����쐬����B
 * @author shitashige
 * @date 20200325
 */


#include <iostream>



 /**
  * @fn
  * FakeStrcpy
  * @brief ������̃R�s�[���s��
  * @param copyDestination �R�s�[��
  * @param copySource �R�s�[��
  * @return ������
  */
void FakeStrcpy(char *copyDestination, const char *copySource) {
	/* null����������܂Ń��[�v */
	for (int i = 0; i < std::strlen(copySource); i++) {
		/* �z��̃R�s�[ */
		copyDestination[i] = copySource[i];
	}
	return;
}

/**
 * @fn
 * FakeStrncpy
 * @brief ������̃R�s�[���s��
 * @param copyDestination �R�s�[��
 * @param copySource �R�s�[��
 * @param stringNumber ������
 * @return ������
 */
void FakeStrncpy(char *copyDestination, const char *copySource, int stringNumber) {
	/* null����������܂Ń��[�v */
	for (int i = 0; i < stringNumber; i++) {
		/* �z��̃R�s�[ */
		copyDestination[i] = copySource[i];
	}
	return;
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

	char strncpyString[stringLen] = { '\0' };	// strncpy��̕���

	char strcpyString[stringLen] = { '\0' };	// strcpy��̕���

	/* ���b�Z�[�W�\�� */
	std::cout << "���������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(inputString, stringLen);

	/* �����strcpy */
	FakeStrcpy(strcpyString, inputString);

	/* �����strncpy */
	FakeStrncpy(strncpyString, inputString, sizeof(inputString));

	/* ���ʕ\�� */
	std::cout << "strcpy:" << strcpyString << "\n" << "strncpy:" << strncpyString << "\n";

}