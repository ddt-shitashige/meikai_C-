/**
 * @file Exerises6-19.cpp
 * @brief ���K6-19	List6-21�̊֐�r���A�s���ȓY���ɑ債�Ĉ��S�ɓ��삷����̂ɏ���������B�ÓI�L������Ԃ�����int�^�̕ϐ����֐������Œ�`���āAidx��0���a_size�����łȂ���΁A���̕ϐ��ւ̎Q�Ƃ�ԋp���鎖�B
 * @author shitashige
 * @date 20200322
 */


#include <iostream>
#include <ctime>
#include <cstdlib>


 /**
   * @fn
   * rand1
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