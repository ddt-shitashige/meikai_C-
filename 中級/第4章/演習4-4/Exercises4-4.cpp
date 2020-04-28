/**
 * @file Exerises4-4.cpp
 * @brief 演習4-4　クラスResigningMemberへのポインタからクラスMemberへのポインタのアップキャストが行えるかどうか、プログラムを作成して確認せよ。※Column4-3の内容を確認できることになる。
 * @author shitashige
 * @date 20200428
 */


#include <iostream>


class Member
{
public:
	Member();
};

class ResigningMember:public Member
{
public:
	ResigningMember();
};


class ProtectedResigningMember :protected Member
{
public:
	ProtectedResigningMember();
};

class PrivateResigningMember :private Member
{
public:
	PrivateResigningMember();
};

/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {

	Member* member;	// メンバークラス

	ResigningMember* publicResigningMember =new ResigningMember;	// パブリック辞任メンバー
	ProtectedResigningMember* protectedResigningMember = new ProtectedResigningMember;	// プロテクテッド辞任メンバー
	PrivateResigningMember* privateResigningMember = new PrivateResigningMember;	// プライベート辞任メンバー

	/* アップキャスト */
	member = publicResigningMember;
	// member = protectedResigningMember;	// こいつはエラー
	// member = privateResigningMember;	// こいつはエラー


}


	
	
	
	
	
	
	
	