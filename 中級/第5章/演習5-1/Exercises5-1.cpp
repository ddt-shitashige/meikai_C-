/**
 * @file Exerises5-1.cpp
 * @brief ���K5-1�@����N���X�悤�Ɏ��ȏЉ�����邩�n��������introduce��ǉ�����B�\�����e�͎����ōl���邱�ƁB
 * @author shitashige
 * @date 20191204
 */
#include "Member.h"
#include "SeniorMember.h"
#include "VipMember.h"


/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	
	Member kaneko("���q����", 15, 75.2);	// �����o�[
	VipMember iiduka("�ђˍK�O", 17, 89.2, "�����S�z�Ə�");	// �㋉����
	SeniorMember suzaku("�鐝����", 43, 63.7, 3);	// �V�j�A�����o�[

	/* ���ȏЉ� */
	kaneko.introduce();
	/* ���ȏЉ� */
	iiduka.introduce();
	/* ���ȏЉ� */
	suzaku.introduce();

}