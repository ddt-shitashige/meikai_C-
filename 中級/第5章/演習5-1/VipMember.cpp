#include <string>
#include<iostream>
#include"VipMember.h"

using namespace std;

/* �R���X�g���N�^ */
VipMember::VipMember(const string& name, int no, double w, const string& prv) :Member(name, no, w) {
	/* ���T��ݒ� */
	set_privilege(prv);
}

/* �֐����\�� */
void VipMember::print() const {
	/* ���b�Z�[�W�\�� */
	cout << "No." << no() << ":" << name() << "(" << get_weight() << "kg)" << "���T=" << privilege << "\n";
}


void Member::introduce() {
	/* ���b�Z�[�W�\�� */
	cout << "�㋉������" << name();
}