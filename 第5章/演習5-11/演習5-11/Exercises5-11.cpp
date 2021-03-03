/**
 * @file Exerises5-11.cpp
 * @brief ���K5-11	6�l��2�Ȗ�(����,���w)�̓_����ǂݍ���ŁA�Ȗڂ��Ƃ̍��v�_�ƕ��ϓ_�A�w�����̍��v�_�ƕ��ϓ_�����߂�v���O�������쐬����B
 * @author shitashige
 * @date 20200309
 */
#include <iostream>

 /**
  * @fn
  * ���C���֐�
  * @brief ���v�ƕ��ς����߂�֐�
  * @return 0:����I��
  */
int main() {

	const int people = 6;	// �l��
	const int subject = 2;	// �Ȗ�
	int studentQueue[people][subject] = { 0 };	// �w���̍s��


	/* ���͑���������\�� */
	std::cout << "�w���̓_������͂��Ă��������B\n";

	/* �s��̒��g���i�[���郋�[�v */
	for (int i = 0; i < people; i++) {
		/* �s��̒��g���i�[���郋�[�v */
		for (int j = 0; j < subject; j++) {
			/* �s��̒��g���i�[ */
			std::cin >> studentQueue[i][j];
		}
	}

	/*
	 * �Ȗڂ̍��v���ς����߂�
	 */
	 /*
	  * ��������߂�
	  */
	int japaneseAverage = 0;	// ����̕���
	int japaneseTotal = 0;	// ����̍��v

	/* ���ς����߂郋�[�v */
	for (int i = 0; i < people; i++) {
		/* ����̍��v�_�����߂� */
		japaneseTotal += studentQueue[i][0];
	}
	/* ����̕��ς����߂� */
	japaneseAverage = japaneseTotal / people;

	/* ���ʏo�� */
	std::cout << " ����̍��v�F" << japaneseTotal << "\n";
	/* ���ʏo�� */
	std::cout << " ����̕��ρF" << japaneseAverage << "\n";



	/*
	 * ���w�����߂�
	 */
	int mathAverage = 0;	// ���w�̕���
	int mathTotal = 0;	// ���w�̍��v

	/* ���ς����߂郋�[�v */
	for (int i = 0; i < people; i++) {
		/* ���w�̍��v�_�����߂� */
		mathTotal += studentQueue[i][1];
	}
	/* ���w�̕��ς����߂� */
	mathAverage = mathTotal / people;

	/* ���ʏo�� */
	std::cout << " ���w�̍��v�F" << mathTotal << "\n";
	/* ���ʏo�� */
	std::cout << " ���w�̕��ρF" << mathAverage << "\n";


	/*
	 * �w���̍��v���ς����߂�
	 */
	int studentAverage[people] = { 0 };	// �w���̕��ϓ_��
	int studentTotal[people] = { 0 };	// �w���̍��v�_��

	/* ���ς����߂郋�[�v */
	for (int i = 0; i < people; i++) {
		/* ���ς����߂郋�[�v */
		for (int j = 0; j < subject; j++) {
			/* �w���̍��v�_�����߂� */
			studentTotal[i] += studentQueue[i][j];
		}
		/* �w���̕��ϓ_�����߂� */
		studentAverage[i] = studentTotal[i] / subject;
		/* ���ʏo�� */
		std::cout << " �w��[" << i << "]�̍��v�F" << studentTotal[i] << "\n";
		/* ���ʏo�� */
		std::cout << " �w��[" << i << "]�̕��ρF" << studentAverage[i] << "\n";

	}

	return 0;
}