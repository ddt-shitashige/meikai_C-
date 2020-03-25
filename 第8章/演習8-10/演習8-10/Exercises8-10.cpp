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
  * @param insertDestination ������
  * @param insertSource ������
  * @return 
  */
void FakeStrcat(char *insertDestination, const char *insertSource) {
	/* null����������܂Ń��[�v */
	for (int i = 0; i < std::strlen(insertSource); i++) {
		/* �z����R�s�[���Null�����̌ォ��R�s�[ */
		insertDestination[i+ std::strlen(insertSource)] = insertSource[i];
	}
	return;
}

/**
 * @fn
 * FakeStrncat
 * @brief ������̖����������s��
 * @param insertDestination ������
 * @param insertSource ������
 * @param stringNumber ������
 * @return 
 */
void FakeStrncat(char *insertDestination, const char *insertSource, int stringNumber) {
	/* null����������܂Ń��[�v */
	for (int i = 0; i < stringNumber; i++) {
		/* �z����R�s�[���Null�����̌ォ��R�s�[ */
		insertDestination[i + std::strlen(insertSource)] = insertSource[i];
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