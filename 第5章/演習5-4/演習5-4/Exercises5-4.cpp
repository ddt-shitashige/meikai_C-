/**
 * @file Exerises5-4.cpp
 * @brief ���K5-4	�A������v�f�������l�ƂȂ�Ȃ��悤�ɉ��K5-3�̃v���O���������ς����v���O�������쐬����B�Ⴆ�΁A{1,3,5,5,3,2}�ƂȂ�Ȃ��悤�ɂ��邱�ƁB
 * @author shitashige
 * @date 20200227
 */


#include <iostream>
#include <ctime>

/**
 * @fn
 * ���C���֐�
 * @brief �z��Ƀ����_�����l������֐�
 * @return 0:����I��
 */
int main() {

	const int element = 6;	// �v�f��
	int cacheNumber = 0;		// �ꎞ�ۑ����l
	int rundomNumber = 0;	// �����_�����l
	int number[element] = { 0 };	// �����̔z��

	/* �����V�[�h������ */
	srand((unsigned int)time(NULL));


	/* �v�f�����������[�v */
	for (int i = 0; i < element; i++) {
		/* ��������10�̂��܂�����߂鎖�ɂ��A�l��0�`9�̊ԂɂȂ�B������+1����ׁA1�`10�ɂȂ� */
		cacheNumber = rand() % 10 + 1;

		/* �����A�ꎞ�ۑ����l�ƃ����_�����l�������Ȃ�A���[�v�̍ŏ��ɖ߂� */
		if (cacheNumber == rundomNumber) {
			/* i���f�N�������g */
			i--;
			/* ���[�v�̍ŏ��ɖ߂� */
			continue;
		}
		/* �����_�����l�Ɉꎞ�ۑ����l���i�[ */
		rundomNumber = cacheNumber;

		/* �z��Ƀ����_�����l���i�[ */
		number[i] = rundomNumber;

		/* �z��̐��l�o�� */
		std::cout << number[i] << "\n";
	}

	return 0;
}