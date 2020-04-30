/**
 * @file Exerises6-1.cpp
 * @brief 演習6-1　図形クラス群に対して、直角二等辺三角形を表すクラス群を追加せよ。左下が直角の物、左上が直角の物、右下が直角のもの、右上が直角のものを追加する事。直角二等辺三角形を表すちゅうしょうくらすを作り、そこから個々のクラスを派生して作ること。
 * @author shitashige
 * @date 20200430
 */

#include "Shape.h"

int main() {
	/* インスタンス生成 */
	RightTop rightTop(5);	
	RightUnder rightUnder(5);
	LeftTop leftTop(5);
	LeftUnder LeftUnder(5);

	/* 文字列出力 */
	rightTop.draw();
	rightUnder.draw();
	leftTop.draw();
	LeftUnder.draw();



}