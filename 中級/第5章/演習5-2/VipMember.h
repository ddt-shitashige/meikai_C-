#pragma once
#include<string>
#include "Member.h"

class VipMember:public Member{
public:
	/* �R���X�g���N�^ */
	VipMember(const std::string& name, int no, double w, const std::string& prv);

	/* ���T�擾 */
	std::string get_privilege() const { return privilege; }

	/* ���T�ݒ� */
	void set_privilege(const std::string& prv) {
		/* ���T���Z�b�g���� */
		privilege = (prv != "") ? prv : "���o�^";
	}
	/* ������\�� */
	void print() const;

	/* ���ȏЉ� */
	void introduce();

private:
	std::string privilege;	// ���T
};
