/**
 * @file Exerises6-18.cpp
 * @brief ���K6-18	0�ȏ�9�ȉ��̗�����ԋp����rand1���쐬����B������Ăяo���ꂽ�ꍇ�ɁA�A�����ē����l��Ԃ��Ȃ��悤�ɂ��邱�ƁB�i�Ⴆ��1��O�ɌĂяo���ꂽ�ۂ�5��ԋp���Ă���΁A5�ȊO�̐��l��ԋp���Ȃ���΂Ȃ�Ȃ��B
 *					void rand1 ()
 * @author shitashige
 * @date 20200322
 */


#include <iostream>
#include <ctime>
#include <cstdlib>


 /**
   * @fn
   * put_count
   * @brief �����_�����l����
   * @return
   */
int rand1() {
	static int prevNunber;	// 1�O�̐��l
	int Number;			// ���l
	/* �����V�[�h���� */
	srand(time(NULL));

	do {

		/* 10�ȉ��̐��l�������_������ */
		Number = rand() % 10;
		/* ���݂̐��l��1�O�̐��l�������������������񃋁[�v */
	} while (Number == prevNunber);

	/* 1�O�̐��l�Ɍ��݂̐��l������ */
	prevNunber = Number;
	return Number;
}

/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {


	/* ���b�Z�[�W�o�� */
	std::cout << "�J�E���g�l����͂��Ă��������B\n";

	int count;   // �J�E���g�l

	/* �ŏ��l�ƍő�l�����[�U�[���� */
	std::cin >> count;

	/* ���[�U�[�����͂������l�����[�v */
	for (int i = 0; i < count; i++) {

		/* �Ăяo���J�E���g�֐��Ăяo�� */
		std::cout << "���ʂ�[" << rand1() << "]�ł�\n";

	}

	return 0;
}