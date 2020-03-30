/**
 * @file Exerises10-1.cpp
 * @brief ���K10-1	���O�E�g���E�̏d�Ȃǂ������o�Ƃ��Ă��s�l�ԃN���X�t�����R�ɒ�`����B
 * @author shitashige
 * @date 20200330
 */

#include <string>;
#include <iostream>;
#include "Exercises11-6.h"

 /**
  * @fn
  * GetName
  * @brief ���O�擾
  * @return
  */
std::string Human::GetName() {
	return name;
}

/**
 * @fn
 * GetHeight
 * @brief �g���擾
 * @return
 */
double Human::GetHeight() {
	return height;
}

/**
 * @fn
 * GetWeight
 * @brief �̏d�擾
 * @return
 */
double Human::GetWeight() {
	return weight;
}

/**
 * @fn
 * SetName
 * @brief ���O�Z�b�g
 * @param ���O
 * @return
 */
void Human::SetName(std::string name) {
	Human::name = name;
	return;
}

/**
 * @fn
 * SetHeight
 * @brief �g���Z�b�g
 * @param �g��
 * @return
 */
void Human::SetHeight(double height) {
	Human::height = height;
	return;
}

/**
 * @fn
 * SetWeight
 * @brief �̏d�Z�b�g
 * @param �̏d
 * @return
 */
void Human::SetWeight(double weight) {
	Human::weight = weight;
	return;
}


/**
 * @fn
 * GetBirthMonth
 * @brief �a�����擾
 * @param �̏d
 * @return
 */
int Human::GetBirthMonth() {
	return birthMonth;
}


/**
 * @fn
 * GetBirthDay
 * @brief �a�����擾
 * @param �̏d
 * @return
 */
int Human::GetBirthDay() {
	return birthDay;
}

/**
 * @fn
 * SetBirthMonth
 * @brief �a�����ݒ�
 * @param �̏d
 * @return
 */
void Human::SetBirthMonth(int month) {
	/* �a������ݒ� */
	birthMonth = month;
}


/**
 * @fn
 * SetBirthDay
 * @brief �a�����ݒ�
 * @param �̏d
 * @return
 */
void Human::SetBirthDay(int day) {
	/* �a������ݒ� */
	birthDay = day;
}



/**
 * @fn
 * main
 * @brief ���C���֐�
 * @return
 */
int main() {

	Human owner;	// �l��`

	/* ���O��` */
	owner.SetName("unknown");
	/* �g����` */
	owner.SetHeight(159.4);
	/* �̏d��` */
	owner.SetWeight(85.2);

	/* �a������` */
	owner.SetBirthMonth(12);
	/* �a������` */
	owner.SetBirthDay(14);


	std::cout << "���O�F" << owner.GetName() << "\n�g���F" << owner.GetHeight() << "\n�̏d�F" << owner.GetWeight() << "^n�a����:" << owner.GetBirthMonth() << "/" << owner.GetBirthDay();

}