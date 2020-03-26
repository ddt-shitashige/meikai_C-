/**
 * @file Exerises8-18.cpp
 * @brief ���K8-18	������Ƃ��ĕ\���ꂽ�����l���Aint�^�̐����l�ɕϊ������l��Ԃ��֐�str2int���쐬����B���Ƃ��΁A������s��"138"�ł���΁A�ԋp����̂͐����l138�ł���Bs�������Ƃ��ĉ��߂ł��Ȃ��悤�ȕ�����ł���ꍇ�́A0��Ԃ����ƁB
 *					int str2int(const char *s)
 * @author shitashige
 * @date 20200326
 */


#include <iostream>
const int stringLen = 30;	// ��������

 /**
  * @fn
  * str2int
  * @brief ������𐔒l�ɕϊ�����
  * @param s ������
  * @return
  */
int str2int(const char *s) {

	/* ������m�F���[�v */
	for (int i = 0; i < std::strlen(s); i++) {
		/* ���l�m�F */
		if (!(s[i] >= '0' && s[i] <= '9')) {
			/* ���l�ȊO����0�����^�[�� */
			return 0;
		}
	}

	int returnNumber = 0;	// �ԋp���l
	/* ���l�쐬���[�v */
	for (int i = 0; i < std::strlen(s); i++) {

		/* �ԋp���l���v�Z */
		returnNumber = returnNumber * 10 + (s[i] - '0');
	}
	/* �ԋp���l�����^�[�� */
	return returnNumber;
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
	std::cout << "����:" << str2int(InputString);


}