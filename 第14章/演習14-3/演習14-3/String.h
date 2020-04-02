#pragma once
#ifndef ___Class_String
#define ___Class_String

#include <iostream>

class String {
	int len;	// 文字列の長さ
	char *s;	// 文字列のポインタ

public:
	/* デフォルトコンストラクタ */
	String(const char *);

	/* コピーコンストラクタ */
	String(const String &);

	/* デストラクタ */
	~String();

	/* 文字列長さ */
	int length();

	/* +の処理 */
	friend String operator+(const String &x, const String &y);

	/* =の処理 */
	String &operator=(const String &x);

	/* 文字列返却の処理 */
	char *GetString();
};

#endif