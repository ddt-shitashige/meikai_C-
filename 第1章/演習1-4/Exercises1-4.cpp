/**
 * @file Exerises1-4.cpp
 * @brief ���K1-4�@�E�Ɏ����悤�ɁA1�s��1���������O��\������v���O�������쐬����B�\������̂́A���҂̖��O�ł͂Ȃ��A�����̖��O�Ƃ��鎖�B
 * @author shitashige
 * @date 20191209
 */

#include <iostream>


using namespace std;

 /**
  * @fn
  * ���C���֐�
  * @brief �����̕��������ɕ\������v���O�����B
  * @return 0:����I��
  */
int main() {

	string name = "���d�B��";			// �����̖��O�B
	string resultName;					// �\�����镶���B
	int nameLength = name.length();		// �����̒����B

	/*
	 * ���O��񕶎����ɉ��s�����郋�[�v�B
	 */
	for (int i = 0; i < name.length(); i ++) {
		/* �S�p������2�o�C�g�Ȃ̂ŁA2�o�C�g���ɉ��s�����鏈���B(i/3*3)�͉��s����������Ƃ��̕������������̂ŁA���̕␳�B */
		if (i == 2 + (i / 3 * 3)) {
			/* i�������̌�ɉ��s������B */
			name.insert(i, "\n");
		}
	}
	/* �����\�� */
	cout << name;

	return 0;
}