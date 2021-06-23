#include <string>
#include <iostream>
#include "Human.h"
using namespace std;


/**
 * @fn
 * コンストラクタ
 * @brief コンストラクタ
 */
Human::Human(const std::string& name, int h, int w) :full_name(name),height(h),weight(w) {
}

/**
 * @fn
 * 氏名取得
 * @brief 氏名取得
 * @return 氏名
 */
string Human::name() const{
	return full_name;
}


/**
 * @fn
 * 身長取得
 * @brief 身長取得
 * @return 身長
 */
int Human::get_height() const {
	return height;
}


/**
 * @fn
 * 体重取得
 * @brief 体重取得
 * @return 体重
 */
int Human::get_weight() const {
	return weight;
}
