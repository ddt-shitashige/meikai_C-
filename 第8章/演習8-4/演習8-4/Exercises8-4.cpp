/**
 * @file Exerises8-4.cpp
 * @brief ���K8-4	List8-11�ł́A�e�z��̌�3���萔�Ƃ��ăv���O�������ifor���̐��䎮�j�ɖ��ߍ��܂�Ă���B�v�Z�ɂ���ď����������v���O�������쐬����B
 * @author shitashige
 * @date 20200325
 */

#include <iostream>

using namespace std;



/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	char a[][5] = { "LISP","C","Ada" };	// �񎟌��z��a
//	char *p[]={"PAUL","X","MAC"};	// ���̐錾��VS���Ƃł��Ȃ��̂ŁA�R�����g�A�E�g

	/* �z��̍s�������[�v���� */
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		/* ���b�Z�[�W�o�� */
		cout << "a[" << i << "]=\"" << a[i] << "\"\n";
	}
}