/**
 * @file Exerises5-5.cpp
 * @brief ���K5-5	�قȂ�v�f�������l�ƂȂ�Ȃ��悤�ɉ��K5-3�̃v���O���������ς����v���O�������쐬����B�Ⴆ�΁A{1,3,5,6,1,2}�ƂȂ�Ȃ��悤�ɂ��邱�ƁB
 * @author shitashige
 * @date 20200303
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
	int rundomNumber = 0;	// �����_�����l
	int number[element] = { 0 };	// �����̔z��
	bool sameFlg = false;			// �z��̒��ɓ������l�������Ă��邩�̔���t���O

	/* �����V�[�h������ */
	srand((unsigned int)time(NULL));


	/* �v�f�����������[�v */
	for (int i = 0; i < element; i++) {
		/* ��������10�̂��܂�����߂鎖�ɂ��A�l��0�`9�̊ԂɂȂ�B������+1����ׁA1�`10�ɂȂ� */
		rundomNumber = rand() % 10 + 1;

		/* �z��Ɋi�[����Ă��鐔�l�ƃ����_�����l���r����ׂ̃��[�v */
		for (int j = 0; j < i; j++) {
			/* �����A�ꎞ�ۑ����l�ƃ����_�����l�������Ȃ�A���[�v�̍ŏ��ɖ߂� */
			if (number[j] == rundomNumber) {
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
		number[i] = rundomNumber;

		/* �z��̐��l�o�� */
		std::cout << number[i] << "\n";
	}

	return 0;
}