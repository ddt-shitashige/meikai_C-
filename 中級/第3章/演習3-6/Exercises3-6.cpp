/**
 * @file Exerises3-6.cpp
 * @brief ���K3-6	bserch�֐���p���āA������̔z�񂩂�T�����s���v���O�������쐬����B2�����z��Ŏ������ꂽ������̔z�񂩂�̒T�����s���v���O�����ƁA������̐擪�����ւ̃|�C���^�̔z��Ŏ������ꂽ������̔z�񂩂�̒T�����s���v���O������2����邱�ƁB
 * @author shitashige
 * @date 20200427
 */

#include<iostream>
#include<cstdlib>

/*
 *@fn
 * @brief ��r
 * @param string1 ������1
 * @param string2 ������2
 * @return ����
 */
int Comper(const char* string1, const char* string2) {
	/* ������2���傫�������ꍇ */
	if (*string1 < *string2) {
		return -1;
	}
	/* ������1���傫�������ꍇ */
	else if (*string1 > * string2) {
		return 1;
	}
	else {
		return 0;
	}
}


/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	char stringFirst[] = "abcdefghijklmnopqrstuvwxyz";	// ������z��1
	char* stringSecond = NULL;	// ������z��2

	/* �������m�� */
	stringSecond = new char[27];

	/* ������̃R�s�[ */
	memcpy(stringSecond, stringFirst, 27);

	char inputChar;	// ���͒l

	/* ���b�Z�[�W�o�� */
	std::cout << "���������\n";

	/* ���� */
	std::cin >> inputChar;

	char *result;	// ����

	/* bserch���s */
	result = reinterpret_cast<char*>(bsearch(&inputChar, stringFirst, 27, sizeof(char), reinterpret_cast<int (*)(const void*, const void*)>(Comper)));

	/* ���ʂ�NULL�Ŗ��������ꍇ */
	if (result != NULL) {
		/* ���b�Z�[�W�o�� */
		std::cout << result - stringFirst << "����v(2�����z��)\n";
	}
	else {
		/* ���b�Z�[�W�o�� */
		std::cout << "������Ȃ�����";
	}

	/* bserch���s */
	result = reinterpret_cast<char*>(bsearch(&inputChar, stringFirst, 27, sizeof(char), reinterpret_cast<int (*)(const void*, const void*)>(Comper)));

	/* ���ʂ�NULL�Ŗ��������ꍇ */
	if (result != NULL) {
		/* ���b�Z�[�W�o�� */
		std::cout << result - stringFirst << "����v(�|�C���^�z��)\n";
	}
	else {
		/* ���b�Z�[�W�o�� */
		std::cout << "������Ȃ�����";
	}

	/* �������J�� */
	delete[] stringSecond;
}