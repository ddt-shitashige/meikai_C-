#include <string>
#include <iostream>
#include "Human.h"
using namespace std;


/**
 * @fn
 * �R���X�g���N�^
 * @brief �R���X�g���N�^
 */
Human::Human(const std::string& name, int h, int w) :full_name(name),height(h),weight(w) {
}

/**
 * @fn
 * �����擾
 * @brief �����擾
 * @return ����
 */
string Human::name() const{
	return full_name;
}


/**
 * @fn
 * �g���擾
 * @brief �g���擾
 * @return �g��
 */
int Human::get_height() const {
	return height;
}


/**
 * @fn
 * �̏d�擾
 * @brief �̏d�擾
 * @return �̏d
 */
int Human::get_weight() const {
	return weight;
}
