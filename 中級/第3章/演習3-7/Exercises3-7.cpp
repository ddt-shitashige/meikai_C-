/**
 * @file Exerises3-7.cpp
 * @brief ���K3-7	qsort�֐���p���āA�ȉ���2�̔z��������ʃ\�[�g����v���O�������쐬����B
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
	return strcmp(string1, string2);
}


/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	char a[][7] = { "LISP","C","Ada","Pascal" };	// ������a
	// char*p[]= { "LISP","C","Ada","Pascal" };	// ������p	// ��A�ׁ̈A�R�����g�A�E�g

	/* �\�[�g */
	qsort(a, 4, sizeof(char)*7, reinterpret_cast<int (*)(const void*, const void*)>(Comper));

	/* �o�̓��[�v */
	for (int i = 0; i < 4; i++) {
		/* �o�̓��[�v */
		for (int j = 0; j < 7; j++) {
			/* ���b�Z�[�W�o�� */
			std::cout << a[i][j];
		}

		/* ���b�Z�[�W�o�� */
		std::cout << "\n";

	}

}