#pragma once

#ifndef __Class_Human
#define	__Class_Human

#include <string>
/* 人間クラス */
class Human {
	private:
		std::string full_name;	// 氏名
		int height;	// 身長
		int weight;	// 体重
	public:
		Human(const std::string &full_name, int height, int weight);	// コンストラクタ

		std::string name() const; // 氏名を調べる

		int get_height() const;	// 身長を調べる

		int get_weight() const;	// 体重を調べる
};

#endif // !__Class_Human
