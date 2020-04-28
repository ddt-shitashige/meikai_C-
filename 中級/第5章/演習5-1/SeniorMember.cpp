
#include <string>
#include<iostream>
#include"SeniorMember.h"

using namespace std;

/* �R���X�g���N�^ */
SeniorMember::SeniorMember(const std::string& name, int no, double w, int level):Member(name,no,w) {
	/* ���x���ݒ� */
	set_care_level(level);
}

/* ������\�� */
void SeniorMember::print() const {
	/* ���b�Z�[�W�\�� */
	cout << "No." << no() << ":" << name() << "(" << get_weight() << "kg)" << "�v���x=" << care_level << "\n";

}

void Member::introduce() {
	/* ���b�Z�[�W�\�� */
	cout << "��삪�K�v��" << name();
}