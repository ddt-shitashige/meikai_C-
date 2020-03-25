/**
 * @file Exerises8-12.cpp
 * @brief ���K8-12	������s�Ɋ܂܂��ł��擪�Ɉʒu���镶��c�̓Y����Ԃ��֐�strchr_idx���쐬����B������s��"ABSZXYX"�ŕ���c��'X'�ł���΁A�ԋp����̂�4�ł���B�Ȃ��A����c��������s�Ɋ܂܂�Ȃ��ꍇ��-1��ԋp���邱�ƁB
 * @author shitashige
 * @date 20200325
 */


#include <iostream>

 /**
  * @fn
  * FakeStrcpy
  * @brief ������̔�r���s��
  * @param s ������
  * @param c �T������
  * @return ����
  */
int strchr_ptr(const char *s, char c) {
	/* null����������܂Ń��[�v */
	for (int i = 0; i < std::strlen(s); i++) {
		/* ���ꕶ�����m�F���� */
		if (s[i] == c) {
			/* ���݂̕�������Ԃ� */
			return i;
		}
	}
	return -1;
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

	char comparisionString;	// strncpy��̕���


	/* ���b�Z�[�W�\�� */
	std::cout << "���������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(inputString, stringLen);


	/* ���b�Z�[�W�\�� */
	std::cout << "��r��������͂��Ă��������B";

	/* ��������� */
	std::cin>>comparisionString;


	/* strcmp��strncpy�̌��ʕ\�� */
	std::cout << "���ʁF" << strchr_ptr(inputString, comparisionString) << "\n";

}