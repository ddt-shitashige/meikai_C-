/**
 * @file Exerises5-2.cpp
 * @brief ���K5-2�@List5-18�̊֐�seniro_print�̈������|�C���^�Ŗ����A�Q�Ƃɏ����������v���O�������쐬����B
 * @author shitashige
 * @date 20200430
 */
#include "Member.h"
#include "SeniorMember.h"
#include "VipMember.h"


/* ��������̂ݏ���\�� */
void senioi_print(Member& p) {
	/* �_�E���L���X�g */
	Member* d = dynamic_cast<SeniorMember*>(&p);

	/* �L���X�g������ */
	if (d) {
		/* �����o�[���v�����g */
		d->print();
	}

}


/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	
	Member kaneko("���q����", 15, 75.2);	// �����o�[
	VipMember mineya("�􉮗���", 17, 89.2, "���S�z�Ə�");	// �㋉����
	SeniorMember suzaki("�B�茒��", 43, 63.7, 3);	// �V�j�A�����o�[

	/* ���ȏЉ� */
	senioi_print(kaneko);
	/* ���ȏЉ� */
	senioi_print(mineya);
	/* ���ȏЉ� */
	senioi_print(suzaki);

}