/**
 * @file Exerises8-18.cpp
 * @brief ���K8-18	������Ƃ��ĕ\���ꂽ�����l���Adouble�^�̎����ɕϊ������l��Ԃ��֐�str2double���쐬����B���Ƃ��΁A������s��"13.5"�ł���΁A�ԋp����͎̂����l13.5�ł���Bs�������Ƃ��ĉ��߂ł��Ȃ��悤�ȕ�����ł���ꍇ�́A0.0��Ԃ����ƁB
 *					str2double(const char *s)
 * @author shitashige
 * @date 20200326
 */


#include <iostream>
const int stringLen = 30;	// ��������

 /**
  * @fn
  * str2double
  * @brief ������𐔒l�ɕϊ�����
  * @param s ������
  * @return
  */
double str2double(const char *s) {

	int pointCount = 0;	// �|�C���g�J�E���g
	/* ������m�F���[�v */
	for (int i = 0; i < std::strlen(s); i++) {
		/* ���l�m�F */
		if (!((s[i] >= '0' && s[i] <= '9') || s[i] == '.')) {
			/* ���l�Ə����_�ȊO����0�����^�[�� */
			return 0.0;
		}
		/* �����_�m�F */
		else if (s[i] == '.') {
			/* �|�C���g�J�E���g�J�E���g�A�b�v */
			pointCount++;
		}
		/* �|�C���g�J�E���g��1���傫�����0�����^�[�� */
		if (pointCount > 1) {
			return 0.0;
		}
	}

	double integerNumber = 0;	// �����l
	double decimalNumber = 1;	// �����l

	/* �|�C���g�J�E���g�����Z�b�g */
	pointCount = 0;
	/* ���l�쐬���[�v */
	for (int i = 0; i < std::strlen(s); i++) {

		/* �����_�������ꍇ�̏��� */
		if (s[i] == '.') {
			/* �|�C���g�J�E���g�J�E���g�A�b�v */
			pointCount++;
			/* ���[�v�̍ŏ��ɖ߂� */
			continue;
		}
		/* ���l�������ꍇ�̏��� */
		else {
			/* �ԋp���l���v�Z */
			integerNumber = integerNumber * 10 + (s[i] - '0');
		}
		/* �|�C���g�J�E���g��1�������珬���l�𑝂₷ */
		if (pointCount == 1) {
			/* �ԋp���l���v�Z */
			decimalNumber = decimalNumber / 10;
		}
	}
	/* �ԋp���l�����^�[�� */
	return integerNumber * decimalNumber;
}



/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	char InputString[stringLen];	// ���͕���1

	/* ���b�Z�[�W�\�� */
	std::cout << "���������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(InputString, stringLen);

	/* ���ʕ\�� */
	std::cout << "����:" << str2double(InputString);

}