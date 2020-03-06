/**
 * @file Exerises5-8.cpp
 * @brief ���K5-8	�z��̗v�f�̕��т��V���b�t������i�v�f�̕��т������_���ɂȂ�悤�ɂ���������j�v���O�������쐬����B
 * @author shitashige
 * @date 20200306
 */


#include <iostream>
#include <ctime>
#include <iomanip>

 /**
  * @fn
  * ���C���֐�
  * @brief �z��Ƀ����_�����l�����ăV���b�t������֐�
  * @return 0:����I��
  */
int main() {

	const int element = 10;	// �v�f��
	int rundomNumber = 0;	// �����_�����l
	int number[element] = { 0 };	// �����̔z��
	int rundomInputNumber[element] = { 0 };	// �V���b�t����̔z��
	int cacheNumber[element] = { 0 };	// �ꎞ�ۑ��̔z��
	bool sameFlg = false;			// �z��̒��ɓ������l�������Ă��邩�̔���t���O


	/* �����V�[�h������ */
	srand((unsigned int)time(NULL));


	/* �v�f�����������[�v */
	for (int i = 0; i < element; i++) {
		/* ��������100�̂��܂�����߂鎖�ɂ��A�l��0�`99�̊ԂɂȂ�B */
		rundomNumber = rand() % 100;

		/* �z��Ƀ����_�����l���i�[ */
		number[i] = rundomNumber;

		/* �z��̐��l�o�� */
		std::cout << "a[" << std::setw(2) << i << "]�F" << number[i] << "\n";
	}
	/*
	 * �V���b�t����̔z������߂�
	 */
	 /* �v�f�����������[�v */
	for (int i = 0; i < element; i++) {
		/* �v�f���Ŋ������]����i�[���鎖�ɂ��A�V���b�t����̔z���I������ */
		rundomNumber = rand() % element;

		/* �z��Ɋi�[����Ă��鐔�l�ƃ����_�����l���r����ׂ̃��[�v */
		for (int j = 0; j < i; j++) {
			/* �����A�ꎞ�ۑ����l�ƃ����_�����l�������Ȃ�A���[�v�̍ŏ��ɖ߂� */
			if (rundomInputNumber[j] == rundomNumber) {
				/* i���f�N�������g */
				i--;
				/* ����t���O��ON�ɂ��� */
				sameFlg = true;
				/* ���[�v���甲���� */
				break;
			}
		}
		/* ����t���O��ON�������ꍇ�̏��� */
		if (sameFlg) {
			/* ����t���O��OFF�ɂ��� */
			sameFlg = false;
			/* ���[�v����蒼�� */
			continue;
		}

		/* �z��Ƀ����_�����l���i�[ */
		rundomInputNumber[i] = rundomNumber;


	}

	/* �z����ꎞ�ۑ��z��ɃR�s�[ */
	memcpy(cacheNumber, number, sizeof(element) * element);

	/* �e���v���[�g�o�� */
	std::cout << "�v�f�̕��т�ύX���܂���\n";

	/*
	 * �i�[����V���b�t������
	 */
	 /* �v�f�����������[�v */
	for (int i = 0; i < element; i++) {
		/* �ꎞ�ۑ��z�񂩂琔�l�̔z��ɃR�s�[���� */
		number[i] = cacheNumber[rundomInputNumber[i]];

		/* �z��̐��l�o�� */
		std::cout << "a[" << std::setw(2) << i << "]�F" << number[i] << "\n";
	}


	return 0;
}