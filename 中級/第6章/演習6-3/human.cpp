/**
 * @file Exerises6-3.cpp
 * @brief ���K6-3�@����񂯂��<<�v���[��>>��\�������N���X���`����B���̃N���X����ȉ��̃N���X��h�����鎖�B�E�l�ԃv���[���N���X(�o������L�[�{�[�h�����݂���)�E�R���s���[�^�v���[���N���X�i�o����𗐐��Ő�������j
 * @author shitashige
 * @date 20200430
 */


#include "human.h"

/**
 * @fn
 * @brief �v�f���Z�b�g
 */
void Human::SetElement(){	/* �v�f�i�[ */
	/* �v�f���Z�b�g */
	element = inputElement;
}

/**
 * @fn
 * @brief ���͒l���Z�b�g
 * @param ���͒l
 */
void Human::InputElement(int inputNumber) {
	/* ���͒l���Z�b�g */
	inputElement = inputNumber;
	/* �Z�b�g�Ăяo�� */
	SetElement();

}