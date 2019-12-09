/**
 * @file Exerises1-5.cpp
 * @brief ���K1-5�@	�E�Ɏ����悤�ɁA1�s��1���������O��\������v���O�������쐬����B
 *					���Ɩ��̊Ԃ�1�s�J���邱�ƂƂ��A�����̖��O��\�����邱�ƁB
 * @author shitashige
 * @date 20191209
 */


#include"Exercises1-5.h"


 /**
  * @fn
  * ���C���֐�
  * @brief �����̕������c�ɕ\������v���O�����B(���Ɩ���1�s�J����)
  * @return 0:����I��
  */
int main() {

	string lastName = "���d";			// �����̕c���B
	string name = "�B��";				// �����̖��O�B
	string displayString;				// �\��������B

	/* �����̕c����2�����ڂɉ��s��^���� */
	lastName = insertLineBreak(lastName, 2);

	/* �����̖��O��2�����ڂɉ��s��^���� */
	name = insertLineBreak(name, 2);

	/* �\����������쐬 */
	displayString = lastName + "\n\n" + name;

	/* �����\�� */
	cout << displayString;

	return 0;
}


/**
 * @fn
 * ���s�֐�
 * @brief �w�肵���������̏��ɂĉ��s���s���B
 * @param (targetString) �Ώە�����
 * @param (targetCharacters) �Ώە�����
 * @return ���s����������B
 */
string insertLineBreak(const string targetString, const int targetCharacters) {

	string resultString;	// ���s������}������������B

	/* �Ώە�������R�s�[ */
	resultString = targetString;

	/* ���s������Ώە������ɑ}�� */
	resultString.insert(targetCharacters, "\n");

	/* ������������������^�[�� */
	return resultString;

}