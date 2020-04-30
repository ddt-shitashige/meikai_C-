#include "computer.h"
#include<time.h>
#include<iostream>



/**
 * @fn
 * @brief 要素をセット
 */
void Computer::SetElement() {
	
	/* 初期シード決定 */
	srand(time(NULL));
	/* 要素設定 */
	element = rand() % 2;
}
