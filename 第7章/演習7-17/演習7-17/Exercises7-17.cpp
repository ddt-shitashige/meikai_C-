
/**
 * @file Exerises7-17.cpp
 * @brief ���K7-17	�|�C���^p���w���I�u�W�F�N�g�̐擪n�o�C�g��v��������֐�mem_set���쐬����B
 * @author shitashige
 * @date 20200324
 */

#include <iostream>
#include <iomanip>



/**
 * @fn
 * main
 * @brief �擪�ɕ�������i�[����
 * @param p �󂯎�����z��
 * @param n �v�f��
 * @param v �}�����镶����
 * @return
 */
void mem_set(void *p, int n, unsigned char v) {

	char *shadowP = NULL;	// p�͒��ڕύX�ł��Ȃ��̂ŁA����P

	/* ��P��P�̎w�������|�C���^�𓯂��ɂ��� */
	shadowP = (char *)p;

	/* v�̓��e���i�[���郋�[�v */
	for (int i = 0; i < n; i++) {
		shadowP[i] = v;
	}

}

/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	char *charArray = NULL;	// char�^�̃|�C���^�m��

	int charElement;	// char�^�̗v�f��

	/* ���b�Z�[�W�\�� */
	std::cout << "�z��̊m�ې�;";
	/* �v�f������ */
	std::cin >> charElement;

	/* ��O�����m�F */
	try {
		/* �������m�� */
		charArray = new char[charElement]();
	}
	/* �������m�ێ��s�� */
	catch (std::bad_alloc) {
		/* ���b�Z�[�W�\�� */
		std::cout << "�G���[���������܂����B";
	}

	/* Null�`�F�b�N */
	if (charArray == NULL) {
		/* ���b�Z�[�W�\�� */
		std::cout << "���������m�ۂł��܂���ł����B";

	}

	int interruptionNumber;	// ���荞�ݕ�����


	/* ���b�Z�[�W�\�� */
	std::cout << "���荞�ݕ�����;";
	/* �v�f������ */
	std::cin >> interruptionNumber;



	char inputString;	// ���͂��镶��

	/* ���b�Z�[�W�\�� */
	std::cout << "��������͂��Ă��������B";
	/* �������� */
	std::cin >>inputString;

	/* ��������֐��Ăяo�� */
	mem_set((void*)charArray, interruptionNumber,inputString);


	for (int i = 0; i < charElement; i++) {
		std::cout<<charArray[i];
	}


	/* �������J�� */
	delete[] charArray;


}