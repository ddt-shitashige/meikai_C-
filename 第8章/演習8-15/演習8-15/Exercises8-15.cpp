/**
 * @file Exerises8-15.cpp
 * @brief ���K8-15	������s1�̒��Ɋ܂܂��ł��擪�Ɉʒu���镶����s2�̐擪�����ւ̃|�C���^��Ԃ��֐�str_match���쐬����B���Ƃ��΁A�󂯎����������s1��"abcabcdef"��s2��"abcd"�ł���΁A�ԋp����̂�&s1[3]�̒l�ł���B������s2��s1�Ɋ܂܂�Ȃ��ꍇ��NULL��ԋp���邱�ƁB
 *					char *str_match(char *s1, char *s2)
 * @author shitashige
 * @date 20200326
 */


#include <iostream>
const int stringLen = 30;	// ��������

 /**
  * @fn
  * str_match
  * @brief �����񌟍����s��
  * @param s1 ������1
  * @param s2 ������2
  * @return ������̃|�C���^
  */
char *str_match(char *s1, char *s2) {

	bool matchFlg = true;		// �}�b�`�t���O
	/* null����������܂Ń��[�v */
	for (int i = 0; i < std::strlen(s1) / 2; i++) {
		/* s2�̍ŏ��̕�����s1�̕������r */
		if (s1[i] == s2[0]) {
			/* s2�̕��������ׂĈ�v���邩�m�F���郋�[�v */
			for (int j = 0; j < std::strlen(s2); j++) {
				/* �������������ǂ����m���߂� */
				if (s1[i + j] != s2[j]) {
					/* �}�b�`�ӂ炮��False�ɂ��� */
					matchFlg = false;
					/* ���[�v���甲���� */
					break;
				}
			}
			/* �}�b�`�t���O���܂��Ȃ������ꍇ�̏��� */
			if (matchFlg) {
				/* �l��ԋp */
				return &s1[i];
			}
		}
	}
	/* NULL��ԋp */
	return NULL;
}



/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {


	char inputString[stringLen];	// ���͕���

	char comparisionString[stringLen];	// strncpy��̕���


	/* ���b�Z�[�W�\�� */
	std::cout << "���������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(inputString, stringLen);

	/* ���b�Z�[�W�\�� */
	std::cout << "��r��������͂��Ă��������B";

	/* ��������� */
	std::cin >> comparisionString;

	/* ������̔�r���s�� */
	char *answer = str_match(inputString, comparisionString);

	/* ���ʂ�NULL�ȊO�������ꍇ */
	if (answer != NULL) {
		/* strcmp��strncpy�̌��ʕ\�� */
		std::cout << "���ʁF" << *answer << "\n" << "�A�h���X�F" << &answer;
	}
	/* ���ʂ�NULL�������ꍇ */
	else {
		/* ���b�Z�[�W�\�� */
		std::cout << "���ʁF" << "�Y���Ȃ�" << "\n";
	}
}