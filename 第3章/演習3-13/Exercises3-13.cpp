/**
 * @file Exerises3-13.cpp
 * @brief	�g���ƕW���̏d�̑Ή��\��\������v���O�������쐬����B
			�\������g���͈̔�(�J�n�l/�I���l/����)�͐����l�Ƃ��ēǂݍ��ނ��ƁB
 * @author shitashige
 * @date 20200116
 */

#include <iostream>
/**
 * @fn
 * ���C���֐�
 * @brief �W���̏d�����߁A�\������֐�
 * @return 0:����I��
 */
int main() {

	int minHeight;		// �Œ�g��
	int maxHeight;		// �ő�g��
	int everyHeight;	// �������̒l

	/* 100cm�ȉ����ƁA�l�����������Ȃ�̂ŁA�e�� */
	do {
		/* �Œ�l�̓��͂𑣂����b�Z�[�W�\�� */
		std::cout << "��cm����:";

		/* �Œ�g������� */
		std::cin >> minHeight;
		/* 100cm�ȉ��Ȃ炻���`���镶���o�� */
		if (minHeight < 100) {
			/* �����o�� */
			std::cout << "100�ȏ����͂��Ă��������B\n";
		}
	} while (minHeight < 100);

	/* �ő�g�����Œ�g����菬�����Ƃ�����x��蒼������B */
	do {
		/* �ő�l�̓��͂𑣂����b�Z�[�W�\�� */
		std::cout << "��cm�܂�:";

		/* �ő�g������� */
		std::cin >> maxHeight;

		/* �Œ�g���ȉ��Ȃ炻���`���镶���o�� */
		if (minHeight <= minHeight) {
			/* �����o�� */
			std::cout << "�Œ�l�ȏ����͂��Ă��������B\n";
		}

	} while (maxHeight < minHeight);
	/* ��cm�����̓��͂𑣂����b�Z�[�W�\�� */
	std::cout << "��cm����:";

	/* ��cm��������� */
	std::cin >> everyHeight;

	/* �w�b�_�[�����o�� */
	std::cout << "�g��  �W���̏d\n";

	/* �Œ�g������ő�g���܂ł̊ԁA�����l���v���X���Ă����A�\������ */
	for (int i = minHeight; i <= maxHeight; i += everyHeight) {

		std::cout << i << "   " << (i - 100) * 0.9 << "\n";
	}
	return 0;
}