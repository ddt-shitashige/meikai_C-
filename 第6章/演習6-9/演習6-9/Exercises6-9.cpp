/**
 * @file Exerises6-9.cpp
 * @brief ���K6-9	a�ȏ�b�����̗����𐶐����āA���̒l��ԋp����֐�random���쐬����B�����ŗ����𐶐�����W�����C�u�����ł���rand�֐����Ăяo�����ƁB�Ȃ�b�̒l��a�����ł���ꍇ�ɂ�a�̒l�����̂܂ܕԋp���鎖�B
					int random(int a, int b)
 * @author shitashige
 * @date 20200320
 */


#include <iostream>
#include <ctime>
#include <iomanip>

 /**
   * @fn
   * a�ȏ�b�ȉ��̃����_���l���o�͂���֐��B
   * @brief a�ȏ�b�����̃����_���l���o�͂���֐��B
   * @param[in] a �����l
   * @param[in] c ����l
   * @return
   */
int random(int a, int b) {
	int rundomNumber = 0;	// �����_�����l

	/* b-a��0�ȉ���������a�����^�[������ */
	if (b - a <= 0) {
		return a;
	}


	/* �����V�[�h������ */
	srand((unsigned int)time(NULL));
	/* a�ȏ�b�����̗������� */
	rundomNumber = rand() % (b-a)+a;

	return rundomNumber;

}

 /**
  * @fn
  * ���C���֐�
  * @brief �����_���l��\������֐��B
  * @return 0:����I��
  */
int main() {

	int minNumber;	// a�l
	int maxNumber;	// b�l
	/* ���b�Z�[�W�o�� */
	std::cout << "a�l��b�l����͂��Ă��������B\n";
	
	/* a�l���� */
	std::cin>>minNumber;
	/* b�l���� */
	std::cin>>maxNumber;


	/* ���b�Z�[�W�o�� */
	std::cout << "a�l��b�l�Ԃ̃����_���l��["<<random(minNumber,maxNumber)<<"]�ł��B\n";

	return 0;
}