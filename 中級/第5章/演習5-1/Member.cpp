#include <string>
#include<iostream>
#include "Member.h"

using namespace std;

/* �R���X�g���N�^ */
Member::Member(const string& name, int no, double w) :full_name(name), number(no) {
	/* �̏d�ݒ� */
	set_weight(w);
}

void Member::print() const {
	/* ���b�Z�[�W�\�� */
	cout << "No." << number << ":" << full_name << "(" << weight << "kg)\n";
}

void Member::introduce() {
	/* ���b�Z�[�W�\�� */
	cout << "�����̖��O��" << name();
}