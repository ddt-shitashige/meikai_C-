/**
 * @file Exerises4-2.cpp
 * @brief	�ȉ���2�̃v���O�������쐬����B
			�Eint�^�̍ŏ��l����ő�l�܂ł̑S�����l��8�i���E10�i���E16�i���ŕ\���B
			�Eunsigned�^�̍ŏ��l����ő�l�܂ł̑S�����l��8�i���E10�i���E16�i���ŕ\���B
 * @author shitashige
 * @date 20200205
 */
#include <cctype>
#include <climits>
#include <iostream>

 /**
  * @fn
  * ���C���֐�
  * @brief int��uint�̍ŏ��l����ő�l���J�E���g�A�b�v����֐��B
  * @return 0:����I��
  */
int main() {

	/* ��`�\�� */
	std::cout << "<int�^>\n\n";

	/* i���J�E���g�A�b�v���Ȃ��疳�����[�v */
	for (int i = INT_MIN;; i++) {
		/* ��`�\�� */
		std::cout << "8�i���F";
		/* 8�i���\�� */
		std::cout << std::oct << i;
		/* ��`�\�� */
		std::cout <<std::dec <<" 10�i���F";
		/* 10�i���\�� */
		std::cout << i;
		/* ��`�\�� */
		std::cout << " 16�i���F";
		/* 16�i���\�� */
		std::cout << std::hex << i << "\n";

		/* int�̍ő�l�𒴂����烋�[�v���甲���� */
		if (i == INT_MAX) {
			/* ���[�v���甲���� */
			break;
		}
	}

	/* ��`�\�� */
	std::cout << "<unsigned int�^>\n\n";

	/* i���J�E���g�A�b�v���Ȃ��疳�����[�v */
	for (int i = 0;; i++) {
		/* ��`�\�� */
		std::cout << "8�i���F";
		/* 8�i���\�� */
		std::cout << std::oct << i;
		/* ��`�\�� */
		std::cout << std::dec << " 10�i���F";
		/* 10�i���\�� */
		std::cout << i;
		/* ��`�\�� */
		std::cout << " 16�i���F";
		/* 16�i���\�� */
		std::cout << std::hex << i << "\n";

		/* int�̍ő�l�𒴂����烋�[�v���甲���� */
		if (i == UINT_MAX) {
			/* ���[�v���甲���� */
			break;
		}
	}

}