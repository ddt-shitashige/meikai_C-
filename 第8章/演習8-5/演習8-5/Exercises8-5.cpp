/**
 * @file Exerises8-5.cpp
 * @brief ���K8-5	������s�̑S������擪���珇��1�s��1�������\������֐�putv���쐬����B
 *					void putv(const char *s)
 * @author shitashige
 * @date 20200325
 */


#include <iostream>


/**
 * @fn
 * putv
 * @brief �������1�������ɉ��s����B
 * @param s ������
 * @return 0:����I��
 */
void putv(const char *s) {
	/* null����������܂Ń��[�v */
	for (int i = 0; i < std::strlen(s); i++) {
		/* ������o�� */
		std::cout<<s[i]<<'\n';
	}
}

/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	const int stringLen=30;	// ��������

	char inputString[stringLen];	// ���͕���

	/* ���b�Z�[�W�\�� */
	std::cout<<"���������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(inputString,stringLen);

	/* �������1���������s */
	putv(inputString);

}