/**
 * @file Exerises8-11.cpp
 * @brief ���K8-11	p.312�Ŋw�K����strcmp�֐������strncmp�֐��Ɠ����Ȋ֐����쐬����B
 * @author shitashige
 * @date 20200325
 */


#include <iostream>



 /**
  * @fn
  * FakeStrcmp
  * @brief ������̔�r���s��
  * @param comparisonDestination ��r��
  * @param comparisonSource ��r��
  * @return ����
  */
int FakeStrcmp(char *comparisonDestination, const char *comparisonSource) {
	/* null����������܂Ń��[�v */
	for (int i = 0; i < std::strlen(comparisonSource); i++) {
		/* �z��̔�r�����āA��r���̕����傫�������ꍇ�̏���*/
		if (comparisonSource[i] > comparisonDestination[i]) {
			return -1;
		}
		/* �z��̔�r�����āA��r���̕��������������ꍇ�̏���*/
		else if (comparisonSource[i] < comparisonDestination[i]) {
			return 1;
		}
	}
	return 0;
}

/**
 * @fn
 * FakeStrncmp
 * @brief ������̔�r���s��
 * @param comparisonDestination ��r��
 * @param comparisonSource ��r��
 * @param stringNumber ������
 * @return ����
 */
int FakeStrncmp(char *comparisonDestination, const char *comparisonSource, int stringNumber) {
	/* null����������܂Ń��[�v */
	for (int i = 0; i < stringNumber; i++) {
		/* �z��̔�r�����āA��r���̕����傫�������ꍇ�̏���*/
		if (comparisonSource[i] > comparisonDestination[i]) {
			return -1;
		}
		/* �z��̔�r�����āA��r���̕��������������ꍇ�̏���*/
		else if (comparisonSource[i] < comparisonDestination[i]) {
			return 1;
		}
	}
	return 0;
}



/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	const int stringLen = 30;	// ��������

	char inputBeforeString[stringLen];	// ���͕���

	char inputAfterString[stringLen];	// strncpy��̕���


	/* ���b�Z�[�W�\�� */
	std::cout << "������1����͂��Ă��������B";

	/* ��������� */
	std::cin.getline(inputBeforeString, stringLen);


	/* ���b�Z�[�W�\�� */
	std::cout << "������2����͂��Ă��������B";

	/* ��������� */
	std::cin.getline(inputAfterString, stringLen);


	/* strcmp��strncpy�̌��ʕ\�� */
	std::cout << "strcmp:" << FakeStrcmp(inputAfterString, inputBeforeString) << "\n" << "strncmp:" << FakeStrncmp(inputAfterString, inputBeforeString, sizeof(inputBeforeString)) << "\n";

}