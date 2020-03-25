/**
 * @file Exerises8-12.cpp
 * @brief ���K8-12	������s�Ɋ܂܂��ł��擪�Ɉʒu���镶��c�ւ̃|�C���^��Ԃ��֐�strchr_ptr���쐬����B������s��"ABSZXYX"�ŕ���c��'X'�ł���΁A�ԋp����̂�&s[4]�ł���B�Ȃ��A����c��������s�Ɋ܂܂�Ȃ��ꍇ��NULL��ԋp���邱�ƁB
 *					char *strchr_ptr(const char *s, char c)
 * @author shitashige
 * @date 20200325
 */


#include <iostream>
const int stringLen = 30;	// ��������

 /**
  * @fn
  * FakeStrcpy
  * @brief ������̔�r���s��
  * @param s ������
  * @param c �T������
  * @return ����
  */
char *strchr_ptr(const char *s, char c) {

	/* null����������܂Ń��[�v */
	for (int i = 0; i < std::strlen(s); i++) {
		/* ���ꕶ�����m�F���� */
		if (s[i] == c) {
			/* ���݂̕�������Ԃ�(����const_cast�g�������ǁA��莩�̂��Ԉ���ĂˁH) */
			return const_cast<char *>(&s[i]);
		}
	}
	return NULL;
}




/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {


	char inputString[stringLen];	// ���͕���

	char comparisionString;	// strncpy��̕���


	/* ���b�Z�[�W�\�� */
	std::cout << "���������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(inputString, stringLen);


	/* ���b�Z�[�W�\�� */
	std::cout << "��r��������͂��Ă��������B";

	/* ��������� */
	std::cin >> comparisionString;

	/* ������̔�r���s�� */
	char *answer = strchr_ptr(inputString, comparisionString);

	if (answer != NULL) {
		/* strcmp��strncpy�̌��ʕ\�� */
		std::cout << "���ʁF" << *answer << "\n" << "�A�h���X�F" << &answer;
	}
	else
	{
		std::cout << "���ʁF" << "�Y���Ȃ�" << "\n";

	}
}