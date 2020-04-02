#include "String.h"


/* コピーコンストラクタ */
String::String(const char *characterString) {

	/* 文字列の長さを0に設定 */
	len = 0;

	/* Null文字が車でループ */
	for (int i = 0; characterString[i] != '\0'; i++) {

		/* 文字列加算 */
		len++;
	}

	/* 文字列ポインタのメモリ確保 */
	s = new char[len + 1];

	/* Null文字が車でループ */
	for (int i = 0; characterString[i] != '\0'; i++) {

		/* 文字列格納 */
		s[i] = characterString[i];
	}

	/* Null文字セット */
	s[len] = '\0';

}

/* コピーコンストラクタ */
String::String(const String &characterString) {
	/* 自己初期化処理 */
	if (&characterString == this) {
		/* 文字数を1に設定 */
		len = 1;
		/* メモリ確保 */
		s = new char[1];
		/* Null文字格納 */
		s[0] = '\0';
	}
	/* 普通の初期化処理 */
	else {
		/* 文字数設定 */
		len = characterString.len;

		/* メモリ確保 */
		s = new char[len + 1];

		/* 文字格納 */
		for (int i = 0; i <= len; i++) {
			/* 文字列格納 */
			s[i] = characterString.s[i];
		}
	}
}

/* デストラクタ */
String::~String() {
	/* メモリ削除 */
	delete[] s;
}

/* 文字列長さ */
int String::length() {
	/* 文字列長さ */
	return len;
}

/* +の処理 */
String operator+(const String &x, const String &y) {

	/* 文字列を作成し、初期化 */
	String cacheString = cacheString;

	/* 文字列を計算 */
	cacheString.len = x.len + y.len;

	/* デフォルトメモリ削除 */
	delete[] cacheString.s;

	/* メモリ確保 */
	cacheString.s = new char[cacheString.len + 1];

	/* xの文字列格納 */
	for (int i = 0; i < x.len; i++) {
		/* 文字列格納 */
		cacheString.s[i] = x.s[i];
	}

	/* yの文字列格納 */
	for (int i = 0; i < y.len; i++) {
		/* 文字列格納 */
		cacheString.s[i + x.len] = y.s[i];
	}

	/* Null文字追加 */
	cacheString.s[x.len + y.len] = '\0';
	return cacheString;
}

/* =の処理 */
String &String::operator=(const String &x) {

	/* 文字数が違った場合の処理 */
	if (len != x.len) {
		/* 元のメモリ確保 */
		delete[] s;

		/* 文字数更新 */
		len = x.len;

		/* メモリ確保 */
		s = new char[len + 1];
	}

	/* 文字列コピーループ */
	for (int i = 0; i < len; i++) {
		/* 文字列コピー */
		s[i] = x.s[i];
	}
	return *this;
}

/* 文字列返却の処理 */
char *String::GetString() {
	return s;
}
