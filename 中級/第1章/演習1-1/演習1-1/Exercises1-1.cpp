/**
 * @file Exerises1-1.cpp
 * @brief ���K1-1�@�N���XHuman�̃R���X�g���N�^��{�y�[�W�Ɏ������悤�ɏ����������v���O�������쐬���A�����������Ғʂ�ɍs���邱�Ƃ��m�F����B
 * @author shitashige
 * @date 20200413
 */


#include <iostream>
#include <string>
#include "Human.h"



/**
 * @fn
 * ���C���֐�
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
    /* �l�N���X��` */
    Human human("��������", 156, 52);

    /* ���ʕ\�� */
    std::cout << "���O�F" << human.name() << "\n�g��:" << human.get_height() << "\n�̏d�F" << human.get_weight();
}