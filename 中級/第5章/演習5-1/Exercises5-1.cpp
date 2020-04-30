/**
 * @file Exerises5-1.cpp
 * @brief 演習5-1　会員クラスように自己紹介をするか創刊すじゅintroduceを追加せよ。表示内容は自分で考えること。
 * @author shitashige
 * @date 20191204
 */
#include "Member.h"
#include "SeniorMember.h"
#include "VipMember.h"


/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	
	Member kaneko("金子健太", 15, 75.2);	// メンバー
	VipMember iiduka("飯塚幸三", 17, 89.2, "賠償全額免除");	// 上級国民
	SeniorMember suzaku("朱雀健一", 43, 63.7, 3);	// シニアメンバー

	/* 自己紹介 */
	kaneko.introduce();
	/* 自己紹介 */
	iiduka.introduce();
	/* 自己紹介 */
	suzaku.introduce();

}