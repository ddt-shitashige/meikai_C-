/**
 * @file Exerises8-10.cpp
 * @brief ���K8-10	p.310�Ŋw�K����strcat�֐������strncat�֐��Ɠ����Ȋ֐����쐬����B
 * @author shitashige
 * @date 20200325
 */


#include <iostream>



 /**
  * @fn
  * FakeStrcat
  * @brief ������̖����������s��
  * @param copyDestination �R�s�[��
  * @param copySource �R�s�[��
  * @return 
  */
void FakeStrcat(char *copyDestination, const char *copySource) {
	/* null����������܂Ń��[�v */
	for (int i = 0; i < std::strlen(copySource); i++) {
		/* �z����R�s�[���Null�����̌ォ��R�s�[ */
		copyDestination[i+ std::strlen(copySource)] = copySource[i];
	}
	return;
}

/**
 * @fn
 * FakeStrncat
 * @brief ������̖����������s��
 * @param copyDestination �R�s�[��
 * @param copySource �R�s�[��
 * @param stringNumber ������
 * @return 
 */
void FakeStrncat(char *copyDestination, const char *copySource, int stringNumber) {
	/* null����������܂Ń��[�v */
	for (int i = 0; i < stringNumber; i++) {
		/* �z����R�s�[���Null�����̌ォ��R�s�[ */
		copyDestination[i + std::strlen(copySource)] = copySource[i];
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

	char strncatString[stringLen] = { '\0' };	// strncpy��̕���

	char strcatString[stringLen] = { '\0' };	// strcpy��̕���

	/* ���b�Z�[�W�\�� */
	std::cout << "�A�����镶�������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(inputString, stringLen);

	/* ���b�Z�[�W�\�� */
	std::cout << "�A������镶�������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(strcatString, stringLen);

	/* ������̃R�s�[ */
	strcpy_s(strncatString,strcatString);

	/* �����strcpy */
	FakeStrcat(strcatString, inputString);

	/* �����strncpy */
	FakeStrncat(strncatString, inputString, stringLen);

	/* ���ʕ\�� */
	std::cout << "strcpy:" << strcatString << "\n" << "strncpy:" << strncatString << "\n";

}