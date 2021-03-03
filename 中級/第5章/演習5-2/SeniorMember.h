#pragma once
#include<string>
#include"Member.h"

/* ��������N���X */
class SeniorMember :public Member {
	int care_level;	// �v���x

public:
	/* �R���X�g���N�^ */
	SeniorMember(const std::string& name, int no, double w, int level = 0);

	/* �v���x�擾 */
	int get_care_level() const { return care_level; }

	/* �v���x�ݒ� */
	void set_care_level(int level) {
		/* �v���x�ݒ� */
		care_level = (level >= 1 && level <= 5) ? level : 0;
	}
	void print() const;
	/* ���ȏЉ� */
	void introduce();

};