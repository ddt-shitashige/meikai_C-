/**
 * @file Exerises8-2.cpp
 * @brief ���K8-2	�ȉ��̂悤�ɏ��������ꂽ������s���󕶎���ɂ���R�[�h�������Bchar s[] = "ABC";
 * @author shitashige
 * @date 20200325
 */

#include <iostream>

using namespace std;
/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {
	char s[] = "ABC";	// �z��錾

	/* ���b�Z�[�W�\�� */
	cout << "�z��s�ɕ�����\"" << s << "\"���i�[����Ă��܂��B\n";

	for (int i = 0; i < sizeof(s) / sizeof(char); i++) {
		/* s�̏����� */
		s[i] = '\0';
	}
	/* ���b�Z�[�W�\�� */
	cout << "�z��s�ɕ�����\"" << s << "\"���i�[����Ă��܂��B\n";

}