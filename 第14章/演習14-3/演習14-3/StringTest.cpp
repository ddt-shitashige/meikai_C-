/**
 * @file Exerises14-3.cpp
 * @brief ���K14-3	�ȈՓI�ȕ�����N���XString���쐬����B�ȉ��̃R�[�h���Q�l�ɂ��āA�R���X�g���N�^�E�f�X�g���N�^�E�e�����o�֐����A�����Ő݌v���邱�ƁB
 *					classString{
 *							int len;//������̒���
 *							char *s;//������̐擪�����ւ̃|�C���^
 *						public:
 *							String(constchar*);
 *							String(constString&);//�R�s�[�R���X�g���N�^
 *							~string();//�f�X�g���N�^
 *							int length();//���������߂�
 *							//+,=�Ȃǂ̉��Z�q���`����
 * @author shitashige
 * @date 2020402
 */
#include <iostream>
#include "String.h"

/* ���C���֐� */
int main() {
	String firstString="aaa";	// ������1
	String secondString="bbbb";	// ������2
	String thirdString=firstString+secondString;		// ������3

	/* ���b�Z�[�W�o�� */
	std::cout<<"������1�F"<<firstString.GetString() <<'\n';

	/* ���b�Z�[�W�o�� */
	std::cout << "������2�F" << secondString.GetString() << '\n';
	/* ���b�Z�[�W�o�� */
	std::cout << "������3�F" << thirdString.GetString() << '\n';

}