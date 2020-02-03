/**
 * @file Exerises3-26.cpp
 * @brief	人間とコンピューターが対戦するじゃんけんプログラムを作成せよ。
 *			・人間が望む限り何度でも繰り返せるようにするもの。
			・いずれか一方が3回勝つまでを繰り返すもの。
			など、複数パターンのプログラムを作る事。
 * @author shitashige
 * @date 20200203
 */
#include <ctime>
#include <cstdlib>
#include <iostream>
/**
 * @fn
 * メイン関数
 * @brief じゃんけんを行う関数
 * @return 0:正常終了
 */
int main() {
	/* 初期シード決定 */
	srand(time(NULL));

	/* 0～2の乱数を設定 */
	int rpsResult = 0;	// じゃんけん結果
	int modeType = 0;	//  モードタイプ
	int finishFlg = 0;	// 終了フラグ

	/* モード選択出力 */
	std::cout << "じゃんけんをします。モードを選択してください(0:とことん。1:3勝ち)\n";

	/* 0か1を入力するまでループ */
	do {
		/* モード洗濯 */
		std::cin >> modeType;

		/* 入力値が0か1以外だったら警告出力 */
		if (modeType != 0 && modeType != 1) {
			/* 警告出力 */
			std::cout << "数値が違います。もう一度入力して下さい\n";
		}

	} while (modeType != 0 && modeType != 1);

	int inputSkill = 0;	// じゃんけんの入力技
	int myWinCount = 0;	// 自分の勝利数
	int cpuWinCount = 0;	// CPUの勝利数
	/* とことんモードの処理 */
	if (modeType == 0) {
		do {

			/* 選択肢説明 */
			std::cout << "数字を入力してください。(0:グー。1:チョキ。2:パー)\n";

			/* 数値入力 */
			std::cin >> inputSkill;

			/* 0～2の間の数字が入力されたかチェック */
			if (inputSkill < 0 || inputSkill>2) {
				/* 警告出力 */
				std::cout << "数値が違います。もう一度入力してください。\n";
				/* ループの最初に戻る */
				continue;
			}

			/* 0～2の乱数を設定 */
			rpsResult = rand() % 3;

			/* 実行結果判断 */
			if ((inputSkill == 0 && rpsResult == 1) ||
				(inputSkill == 1 && rpsResult == 2) ||
				(inputSkill == 2 && rpsResult == 0)) {
				/* 結果表示 */
				std::cout << "貴方の勝ちです。\n";
			}
			else if ((inputSkill == 0 && rpsResult == 2) ||
				(inputSkill == 1 && rpsResult == 0) ||
				(inputSkill == 2 && rpsResult == 1)) {
				/* 結果表示 */
				std::cout << "貴方の負けです。\n";
			}
			else {
				/* 結果表示 */
				std::cout << "あいこです。もう一度行います。\n";
				/* もう一度 */
				continue;
			}
			/* 問い合わせ表示 */
			std::cout << "もう一度行いますか？(0:続行。それ以外:終了)\n";
			/* 数値入力 */
			std::cin >> finishFlg;

		} while (finishFlg == 0);
	}
	/* 3勝ちモードの処理 */
	else {
		do {
			/* 選択肢説明 */
			std::cout << "数字を入力してください。(0:グー。1:チョキ。2:パー)\n";

			/* 数値入力 */
			std::cin >> inputSkill;

			/* 0～2の間の数字が入力されたかチェック */
			if (inputSkill < 0 || inputSkill > 2) {
				/* 警告出力 */
				std::cout << "数値が違います。もう一度入力してください。\n";
				/* ループの最初に戻る */
				continue;
			}

			/* 0～2の乱数を設定 */
			rpsResult = rand() % 3;

			/* 実行結果判断 */
			if ((inputSkill == 0 && rpsResult == 1) ||
				(inputSkill == 1 && rpsResult == 2) ||
				(inputSkill == 2 && rpsResult == 0)) {
				/* 結果表示 */
				std::cout << "貴方の勝ちです。\n";
				myWinCount++;
			}
			else if ((inputSkill == 0 && rpsResult == 2) ||
				(inputSkill == 1 && rpsResult == 0) ||
				(inputSkill == 2 && rpsResult == 1)) {
				/* 結果表示 */
				std::cout << "貴方の負けです。\n";
				cpuWinCount++;
			}
			else {
				/* 結果表示 */
				std::cout << "あいこです。もう一度行います。\n";
				/* もう一度 */
				continue;
			}
			std::cout << "\n現在の戦績\n貴方：" << myWinCount << "勝　CPU：" << cpuWinCount << "勝\n\n";
		} while (myWinCount != 3 && cpuWinCount != 3);
		if (myWinCount == 3) {
			std::cout << "貴方が先に3勝しました。\n";
		}
		else {
			std::cout << "CPUが先に3勝しました。\n";
		}
	}
}