#pragma once

#ifndef __Class_Human
#define	__Class_Human

#include <string>
/* �l�ԃN���X */
class Human {
	private:
		std::string full_name;	// ����
		int height;	// �g��
		int weight;	// �̏d
	public:
		Human(const std::string &full_name, int height, int weight);	// �R���X�g���N�^

		std::string name() const; // �����𒲂ׂ�

		int get_height() const;	// �g���𒲂ׂ�

		int get_weight() const;	// �̏d�𒲂ׂ�
};

#endif // !__Class_Human
