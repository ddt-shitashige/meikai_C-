/**
 * @file Exerises3-17.cpp
 * @brief ���K3-17	�G�߂����߂�List3-1(p.82)�̌��̓ǂݍ��݂ɒu����1�`12�ȊO�̒l�����͂��ꂽ�ꍇ�́A�ē��͂�����悤�ɕύX�����v���O�������쐬����B
					(do���̒���do���������\���[�v�ƂȂ�)
 * @author shitashige
 * @date 20200104
 */

#include <iostream> 
using namespace std;

 /**
  * @fn
  * ���C���֐�
  * @brief �G�߂����߂�֐�
  * @return 0:����I��
  */
int main() {

	int month;				// ��
	string retry;			// ���g���C�m�F���b�Z�[�W
	/* ���[�v�J�n */
	do {
		/* ���͂����l�����Ғl�ʂ�ɂȂ�܂Ń��[�v */
		do{
			/* ���b�Z�[�W�o�� */
			cout << "�G�߂����߂܂��B\n�����ł����F";
			/* ���[�U�[���͑҂� */
			cin >> month;
		/* 1�ȏ�12�ȉ��Ŗ����ƃ��[�v */
		} while (month < 1 && month > 12);
		/* ����3�ȏ�5�ȉ����Ət�Ƃ��� */
		if (month >= 3 && month <= 5) {
			/* ���b�Z�[�W�o�� */
			cout << "����͏t�ł��B\n";
		}
		/* ����6�ȏ�8�ȉ����ƉĂƂ��� */
		else if (month >= 6 && month <= 8) {
			/* ���b�Z�[�W�o�� */
			cout << "����͉Ăł��B\n";
		}
		/* ����9�ȏ�11�ȉ����ƏH�Ƃ��� */
		else if (month >= 9 && month <= 11) {
			/* ���b�Z�[�W�o�� */
			cout << "����͏H�ł��B\n";
		}
		/* ����12��1��2���Ɠ~�Ƃ��� */
		else if (month == 12 || month == 1 || month == 2) {
			/* ���b�Z�[�W�o�� */
			cout << "����͓~�ł��B\n";
		}
		/* ���b�Z�[�W�\�� */
		cout << "������x�H�@Y�cYes/N�cNo�F";
		/* ���͑ҋ@ */
		cin >> retry;
		/* �������͔��� */
	} while (retry == "Y" || retry == "y");
	return 0;
}