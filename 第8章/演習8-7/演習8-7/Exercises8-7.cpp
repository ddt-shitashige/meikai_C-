/**
 * @file Exerises8-7.cpp
 * @brief ���K8-7	������s�Ɋ܂܂�鐔������'0', '1', �c , '9'�̌����J�E���g���āA�e���������̌���c[0], c[1], �c , c[9] �Ɋi�[����֐�count_digits���쐬����B���Ƃ��΁A������s��"W140S500L88"�ł���΁Ac[0]��3���Ac[1], c[4], c[5]��1���Ac[8]��2���i�[���A����ȊO�̗v�f�ɂ�0���i�[����B
 *					void count_digits(const char *s, int c[])
 * @author shitashige
 * @date 20200325
 */


#include <iostream>



/**
 * @fn
 * count_digits
 * @brief ���l�̃J�E���g���s��
 * @param s ������
 * @param a �J�E���g����
 * @return
 */
void count_digits(const char *s, int c[]) {
	int count = 0;	// �J�E���^
	/* null����������܂Ń��[�v */
	for (int i = 0; i < std::strlen(s); i++) {
		/* ������0�ȏ�9�ȉ��������ꍇ�̏��� */
		if (s[i]>='0'&&s[i]<='9' ) {
			/* c�̒��̐��l���J�E���g�A�b�v(0�ň����͕̂����R�[�h�̊֌W) */
			c[s[i]-'0']++;
		}
	}
	return;
}


/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	const int stringLen = 30;	// ��������

	int countArray[10]={0};	// �J�E���g�̍\���� 

	char inputString[stringLen];	// ���͕���

	/* ���b�Z�[�W�\�� */
	std::cout << "���������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(inputString, stringLen);

	/* �J�E���g�֐��Ăяo�� */
	count_digits(inputString, countArray);
	
	/* countArray�̔z��̗v�f�������[�v���� */
	for (int i = 0; i < sizeof(countArray) / sizeof(int); i++) {
		/* ���ʏo�� */
		std::cout<<"c["<<i<<"]"<<"="<<countArray[i]<<"\n";
	}


}