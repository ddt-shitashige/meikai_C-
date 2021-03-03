/**
 * @file Exerises4-13.cpp
 * @brief 演習4-13	性別、季節、曜日などを表す列挙体を自由に定義し、それを用いたプログラムを作成せよ。
 * @author shitashige
 * @date 20191211
 */


#include <iostream>
#include <ctime>


/**
 * @fn
 * メイン関数
 * @brief 性別と季節と曜日を表示する関数
 * @return 0:正常終了
 */
int main() {

	enum sex { Boy, Girl };	// 性別
	enum season { Spring, Summer, Fall, Winter };	// 季節
	enum week { Sun, Mon, Tue, Wed, Thu, Fri, Sat };	// 曜日
	int rundomNumber;	// ランダム数値

	/* 初期シードを決定 */
	srand((unsigned int)time(NULL));

	/* 乱数から2のあまりを求める事により、値が0～1の間になる */
	rundomNumber = rand() % 2;

	/* 性別表記 */
	std::cout << "性別:";

	/* 入力値によって処理を分ける */
	switch (rundomNumber) {
		/* 0だった場合 */
	case Boy:
		/* 性別を表示 */
		std::cout << "男\n";
		break;
		/* 1だった場合 */
	case Girl:
		/* 性別を表示 */
		std::cout << "女\n";
		break;
	default:
		break;
	}
	/* 乱数から4のあまりを求める事により、値が0～3の間になる */
	rundomNumber = rand() % 4;

	/* 季節表記 */
	std::cout << "季節:";

	/* 入力値によって処理を分ける */
	switch (rundomNumber) {
		/* 0だった場合 */
	case Spring:
		/* 季節を表示 */
		std::cout << "春\n";
		break;
		/* 1だった場合 */
	case Summer:
		/* 季節を表示 */
		std::cout << "夏\n";
		break;
		/* 2だった場合 */
	case Fall:
		/* 季節を表示 */
		std::cout << "秋\n";
		break;
		/* 3だった場合 */
	case Winter:
		/* 季節を表示 */
		std::cout << "冬\n";
		break;
	default:
		break;
	}
	/* 乱数から4のあまりを求める事により、値が0～3の間になる */
	rundomNumber = rand() % 7;

	/* 曜日表記 */
	std::cout << "曜日:";

	/* 入力値によって処理を分ける */
	switch (rundomNumber) {
		/* 0だった場合 */
	case Sun:
		/* 曜日を表示 */
		std::cout << "日曜日\n";
		break;
		/* 1だった場合 */
	case Mon:
		/* 曜日を表示 */
		std::cout << "月曜日\n";
		break;
		/* 2だった場合 */
	case Tue:
		/* 曜日を表示 */
		std::cout << "火曜日\n";
		break;
		/* 3だった場合 */
	case Wed:
		/* 曜日を表示 */
		std::cout << "水曜日\n";
		break;
		/* 4だった場合 */
	case Thu:
		/* 曜日を表示 */
		std::cout << "木曜日\n";
		break;
		/* 5だった場合 */
	case Fri:
		/* 曜日を表示 */
		std::cout << "金曜日\n";
		break;
		/* 6だった場合 */
	case Sat:
		/* 曜日を表示 */
		std::cout << "土曜日\n";
		break;

	default:
		break;
	}
	return 0;
}