/**
 * @file Exerises8-6.cpp
 * @brief ���K8-6	������s�Ɋ܂܂�镶��c�̌���Ԃ��֐�strch_cnt���쐬����B���Ƃ��΁A������s��"abcabca"�ŕ���c��'a'�ł���΁A�ԋp����̂�3�ł���B����c���܂܂�Ȃ��ꍇ��0��Ԃ����ƁB
 *					int strch_cat(const char *s, char c)
 * @author shitashige
 * @date 20200325
 */


#include <iostream>



 /**
  * @fn
  * strch_cat
  * @brief �����T�[�`���s��
  * @param s ������
  * @param a �T�[�`����
  * @return ������
  */
int strch_cat(const char *s, char c) {
	int count = 0;	// �J�E���^
	/* null����������܂Ń��[�v */
	for (int i = 0; i < std::strlen(s); i++) {
		/* �T�[�`����a��s�̒������������������ꍇ�̏��� */
		if (s[i] == c) {
			/* �J�E���g�A�b�v */
			count++;
		}
	}
	return count;
}


/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	const int stringLen = 30;	// ��������

	char searchString;	// �T�[�`����

	char inputString[stringLen];	// ���͕���

	/* ���b�Z�[�W�\�� */
	std::cout << "���������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(inputString, stringLen);

	/* ���b�Z�[�W�\�� */
	std::cout << "�T�[�`��������͂��Ă��������B";

	/* ��������� */
	std::cin >> searchString;

	/* �������1���������s���ă��b�Z�[�W�\�� */
	std::cout << "�T�[�`������" << strch_cat(inputString, searchString) << "����܂���\n";


}