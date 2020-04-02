/**
 * @file Exerises14-3.cpp
 * @brief 演習14-3	簡易的な文字列クラスStringを作成せよ。以下のコードを参考にして、コンストラクタ・デストラクタ・各メンバ関数を、自分で設計すること。
 *					classString{
 *							int len;//文字列の長さ
 *							char *s;//文字列の先頭文字へのポインタ
 *						public:
 *							String(constchar*);
 *							String(constString&);//コピーコンストラクタ
 *							~string();//デストラクタ
 *							int length();//長さを求める
 *							//+,=などの演算子を定義せよ
 * @author shitashige
 * @date 2020402
 */
#include <iostream>
#include "String.h"

/* メイン関数 */
int main() {
	String firstString="aaa";	// 文字列1
	String secondString="bbbb";	// 文字列2
	String thirdString=firstString+secondString;		// 文字列3

	/* メッセージ出力 */
	std::cout<<"文字列1："<<firstString.GetString() <<'\n';

	/* メッセージ出力 */
	std::cout << "文字列2：" << secondString.GetString() << '\n';
	/* メッセージ出力 */
	std::cout << "文字列3：" << thirdString.GetString() << '\n';

}