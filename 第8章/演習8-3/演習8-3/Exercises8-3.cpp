/**
 * @file Exerises8-3.cpp
 * @brief ���K8-3	�����񒆂̑啶�����������ɕϊ�������ŕ\������֐�put_lower���쐬����B
 *					void put_lower(const char s[])
 * @author shitashige
 * @date 20200325
 */

#include <iostream>

using namespace std;


/**
 * @fn
 * put_lower
 * @brief �����̕������������������
 * @param s ������
 * @return 0:����I��
 */
void put_lower(const char s[]) {
	/* �S�Ă̕�������������ɂ��郋�[�v */
	for (int i = 0; s[i]; i++) {
		/* ���������ʂɕ\������O�ɏ����������� */
		cout<<static_cast<char>(tolower(s[i]));
	}
}

/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {
	char string[36];	// ������

	/* ���b�Z�[�W�\�� */
	cout<<"������F";

	/* ��������� */
	cin>>string;

	/* �������������� */
	put_lower(string);

	/* ���s */
	cout<<"\n";
}