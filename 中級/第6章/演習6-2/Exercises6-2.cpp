/**
 * @file Exerises6-2.cpp
 * @brief ���K6-2�@�O��ō쐬�����N���X���܂߁A�S�Ă̐}�`�N���X�Q���e�X�g����v���O�������쐬����BList6-4�Ɠ������AShape�^�̔z��𗘗p���āA�I�u�W�F�N�g�̐����ƕ\�����s�����B�������A�����̗v�f���Q�Ƃ���I�u�W�F�N�g�̓v���O�������ŗ^����̂ł͂Ȃ��A�L�[�{�[�h����ǂݍ��ނ悤�ɂ��邱�ƁB
 * @author shitashige
 * @date 20200430
 */

#include "Shape.h"

int main() {
	int element;// �v�f

	/* ������o�� */
	std::cout << "�v�f�����";
	/* ���l���� */
	std::cin >> element;

	Shape* shape[] = {
	new Point(),
	new HorzLine(element),
	new VertLine(element),
	new Rectangle(element,element),
	new RightTop(element),
	new RightUnder(element),
	new LeftTop(element),
	new LeftUnder(element)
	};

	/* �v�f�������[�v */
	for (int i = 0; i < sizeof(shape) / sizeof(shape[0]); i++) {
		/* ������o�� */
		std::cout << "shape[" << i << "]\n";
		/* ���ʏo�� */
		shape[i]->print();
		/* ������o�� */
		std::cout << "\n";
	}

	/* �v�f�������[�v */
	for (int i = 0; i < sizeof(shape) / sizeof(shape[0]); i++) {
		/* �������J�� */
		delete shape[i];
	}
}