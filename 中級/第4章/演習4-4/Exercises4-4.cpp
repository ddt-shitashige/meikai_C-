/**
 * @file Exerises4-4.cpp
 * @brief ���K4-4�@�N���XResigningMember�ւ̃|�C���^����N���XMember�ւ̃|�C���^�̃A�b�v�L���X�g���s���邩�ǂ����A�v���O�������쐬���Ċm�F����B��Column4-3�̓��e���m�F�ł��邱�ƂɂȂ�B
 * @author shitashige
 * @date 20200428
 */


#include <iostream>


class Member
{
public:
	Member();
};

class ResigningMember:public Member
{
public:
	ResigningMember();
};


class ProtectedResigningMember :protected Member
{
public:
	ProtectedResigningMember();
};

class PrivateResigningMember :private Member
{
public:
	PrivateResigningMember();
};

/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {

	Member* member;	// �����o�[�N���X

	ResigningMember* publicResigningMember =new ResigningMember;	// �p�u���b�N���C�����o�[
	ProtectedResigningMember* protectedResigningMember = new ProtectedResigningMember;	// �v���e�N�e�b�h���C�����o�[
	PrivateResigningMember* privateResigningMember = new PrivateResigningMember;	// �v���C�x�[�g���C�����o�[

	/* �A�b�v�L���X�g */
	member = publicResigningMember;
	// member = protectedResigningMember;	// �����̓G���[
	// member = privateResigningMember;	// �����̓G���[


}


	
	
	
	
	
	
	
	