/**
 * @file Exerises10-1.cpp
 * @brief 演習10-1	名前・身長・体重などをメンバとしてもつ《人間クラス》を自由に定義せよ。
 * @author shitashige
 * @date 20200330
 */

#include <string>;
#include <iostream>;
#include "Exercises11-6.h"

 /**
  * @fn
  * GetName
  * @brief 名前取得
  * @return
  */
std::string Human::GetName() {
	return name;
}

/**
 * @fn
 * GetHeight
 * @brief 身長取得
 * @return
 */
double Human::GetHeight() {
	return height;
}

/**
 * @fn
 * GetWeight
 * @brief 体重取得
 * @return
 */
double Human::GetWeight() {
	return weight;
}

/**
 * @fn
 * SetName
 * @brief 名前セット
 * @param 名前
 * @return
 */
void Human::SetName(std::string name) {
	Human::name = name;
	return;
}

/**
 * @fn
 * SetHeight
 * @brief 身長セット
 * @param 身長
 * @return
 */
void Human::SetHeight(double height) {
	Human::height = height;
	return;
}

/**
 * @fn
 * SetWeight
 * @brief 体重セット
 * @param 体重
 * @return
 */
void Human::SetWeight(double weight) {
	Human::weight = weight;
	return;
}


/**
 * @fn
 * GetBirthMonth
 * @brief 誕生月取得
 * @param 体重
 * @return
 */
int Human::GetBirthMonth() {
	return birthMonth;
}


/**
 * @fn
 * GetBirthDay
 * @brief 誕生日取得
 * @param 体重
 * @return
 */
int Human::GetBirthDay() {
	return birthDay;
}

/**
 * @fn
 * SetBirthMonth
 * @brief 誕生月設定
 * @param 体重
 * @return
 */
void Human::SetBirthMonth(int month) {
	/* 誕生月を設定 */
	birthMonth = month;
}


/**
 * @fn
 * SetBirthDay
 * @brief 誕生日設定
 * @param 体重
 * @return
 */
void Human::SetBirthDay(int day) {
	/* 誕生日を設定 */
	birthDay = day;
}



/**
 * @fn
 * main
 * @brief メイン関数
 * @return
 */
int main() {

	Human owner;	// 人定義

	/* 名前定義 */
	owner.SetName("unknown");
	/* 身長定義 */
	owner.SetHeight(159.4);
	/* 体重定義 */
	owner.SetWeight(85.2);

	/* 誕生月定義 */
	owner.SetBirthMonth(12);
	/* 誕生日定義 */
	owner.SetBirthDay(14);


	std::cout << "名前：" << owner.GetName() << "\n身長：" << owner.GetHeight() << "\n体重：" << owner.GetWeight() << "^n誕生日:" << owner.GetBirthMonth() << "/" << owner.GetBirthDay();

}