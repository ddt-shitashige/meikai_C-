#include "computer.h"
#include<time.h>
#include<iostream>



/**
 * @fn
 * @brief �v�f���Z�b�g
 */
void Computer::SetElement() {
	
	/* �����V�[�h���� */
	srand(time(NULL));
	/* �v�f�ݒ� */
	element = rand() % 2;
}
