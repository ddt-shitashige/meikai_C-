/**
 * @file Exerises4-12.cpp
 * @brief	�g�����v�̋L��(�_�C��,�n�[�g,�N���u,�X�y�[�h)�̎l�̗񋓎q�����񋓑̂��`����B
 *			�e�񋓎q�̒l�͐擪���珇��0,1,2,3�Ƃ��AList4-17�Ɠ��l�ɃL�[�{�[�h����l��ǂݍ���ŁA�\�����鎖�B
 * @author shitashige
 * @date 20200219
 */

#include <iostream>

 /**
  * @fn
  * ���C���֐�
  * @brief ���l�ɂ���ăg�����v�̎�ނ�\������֐�
  * @return 0:����I��
  */
int main() {

	enum trump { Diamond, Heart, Club, Spade };	// �g�����v�̗񋓑�
	int inputNumber;	// ���͂������l

	/* ���͒l���񋓑̂̐��l�ӊO���Ƃ�����x���͂����� */
	do {
		/* ���l���͑��� */
		std::cout << "0�`3�̐��l����͂��ĉ������B\n";

		/* ���l���� */
		std::cin >> inputNumber;
	} while (inputNumber<Diamond || inputNumber>Spade);

	/* ���͒l�ɂ���ď����𕪂��� */
	switch (inputNumber) {
		/* 0�������ꍇ */
	case Diamond:
		/* �J�[�h�̎�ނ�\�� */
		std::cout << "�_�C��\n";
		break;
	case Heart:
		/* �J�[�h�̎�ނ�\�� */
		std::cout << "�n�[�g\n";
		break;
	case Club:
		/* �J�[�h�̎�ނ�\�� */
		std::cout << "�N���u\n";
		break;
	case Spade:
		/* �J�[�h�̎�ނ�\�� */
		std::cout << "�X�y�[�h\n";
		break;
	default:
		break;
	}
	return;
}