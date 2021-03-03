#include <ctime>
#include <cstdlib>
#include "kazuate.h"

using namespace std;

static int kotae;   // 回答


/**
  *@fn
  *initialize
  *@brief 初期シード決定
  *@return
  */
void initialize() {
	/* 初期シード決定 */
	srand((unsigned int)time(NULL));
}


/**
  *@fn
  *gen_no
  *@brief 問題作成
  *@return
  */
void gen_no() {
	/* 問題作成 */
	kotae = rand() % (max_no + 1);
}



/**
  *@fn
  *judge
  *@brief 正誤判定
  *@param cand 回答
  *@return
  */
int judge(int cand) {
	/* 答えと回答が同じだった場合 */
	if (cand == kotae)
		return 0;
	/* 回答が大きかった場合 */
	else if (cand > kotae)
		return 1;
	/* 回答が小さかった場合 */
	else
		return 2;
}

/**
  *@fn
  *Answer
  *@brief 答えをリターン
  *@return
  */
int Answer() {
	return kotae;
}