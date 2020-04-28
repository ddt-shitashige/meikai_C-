
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