#include <ctime>
#include <cstdlib>
#include "kazuate.h"

using namespace std;

static int kotae;   // ��


/**
  *@fn
  *initialize
  *@brief �����V�[�h����
  *@return
  */
void initialize() {
	/* �����V�[�h���� */
	srand((unsigned int)time(NULL));
}


/**
  *@fn
  *gen_no
  *@brief ���쐬
  *@return
  */
void gen_no() {
	/* ���쐬 */
	kotae = rand() % (max_no + 1);
}



/**
  *@fn
  *judge
  *@brief ���딻��
  *@param cand ��
  *@return
  */
int judge(int cand) {
	/* �����Ɖ񓚂������������ꍇ */
	if (cand == kotae)
		return 0;
	/* �񓚂��傫�������ꍇ */
	else if (cand > kotae)
		return 1;
	/* �񓚂������������ꍇ */
	else
		return 2;
}

/**
  *@fn
  *Answer
  *@brief ���������^�[��
  *@return
  */
int Answer() {
	return kotae;
}