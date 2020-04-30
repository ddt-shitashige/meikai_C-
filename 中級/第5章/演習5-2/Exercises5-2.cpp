/**
 * @file Exerises5-2.cpp
 * @brief 演習5-2　List5-18の関数seniro_printの引数をポインタで無く、参照に書き換えたプログラムを作成せよ。
 * @author shitashige
 * @date 20200430
 */
#include "Member.h"
#include "SeniorMember.h"
#include "VipMember.h"


/* 長寿会員のみ情報を表示 */
void senioi_print(Member& p) {
	/* ダウンキャスト */
	Member* d = dynamic_cast<SeniorMember*>(&p);

	/* キャスト成功時 */
	if (d) {
		/* メンバーをプリント */
		d->print();
	}

}


/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	
	Member kaneko("金子健太", 15, 75.2);	// メンバー
	VipMember mineya("峰屋龍次", 17, 89.2, "会費全額免除");	// 上級国民
	SeniorMember suzaki("州崎健一", 43, 63.7, 3);	// シニアメンバー

	/* 自己紹介 */
	senioi_print(kaneko);
	/* 自己紹介 */
	senioi_print(mineya);
	/* 自己紹介 */
	senioi_print(suzaki);

}