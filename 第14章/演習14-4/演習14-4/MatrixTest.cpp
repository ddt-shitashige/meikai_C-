/**
 * @file Exerises14-4.cpp
 * @brief ���K14-4	�ȈՓI�ȍs��N���XMatrix���쐬����B�ȉ��̃R�[�h���Q�l�ɂ��āA�R���X�g���N�^�E�f�X�g���N�^�E�e�����o�֐����A�����Ő݌v���邱�ƁB
 *					class Matrix {
 *						int height;	// �s��
 *						int width;		// ��
 *						double *m;	// �擪�v�f�ւ̃|�C���^
 *					
 *					public:
 *						Matrix(int, int);	// �R���X�g���N�^
 *						Matrix(const Matrix &);	// �R�s�[�R���X�g���N�^
 *						~Matrix();	// �f�X�g���N�^
 *						 // +, -, *, = �Ȃǂ̉��Z�q���`����B
 * @author shitashige
 * @date 20200402
 */


#include <iostream>
#include "Matrix.h"

/* ���C���֐� */
int main() {
	Matrix firstMatrix(2,2);	// �}�g���N�X1
	Matrix secondMatrix(2,2);	// �}�g���N�X2


	/* ���b�Z�[�W�o�� */
	std::cout<<"�����Z�F\n";


	/* ���ʏo�͂̃��[�v */
	for (int i = 0; i < 2; i++) {
		/* ���ʏo�͂̃��[�v */
		for (int j = 0; j < 2; j++) {
			/* ���l�Z�b�g */
			firstMatrix.SetNumber(i, j, 2);
			/* ���l�Z�b�g */
			secondMatrix.SetNumber(i, j, 2);
		}
	}
	/* �s��̑����Z */
	Matrix AnswerMatrix = firstMatrix + secondMatrix;

	/* ���ʏo�͂̃��[�v */
	for (int i = 0; i < 2; i++) {
		/* ���ʏo�͂̃��[�v */
		for (int j = 0; j < 2; j++) {
			std::cout<<AnswerMatrix.GetNumber(i,j)<<" ,";
		}
		/* ���b�Z�[�W�o�� */
		std::cout<<'\n';
	}

	/* ���ʏo�͂̃��[�v */
	for (int i = 0; i < 2; i++) {
		/* ���ʏo�͂̃��[�v */
		for (int j = 0; j < 2; j++) {
			/* ���l�Z�b�g */
			firstMatrix.SetNumber(i, j, 3);
			/* ���l�Z�b�g */
			secondMatrix.SetNumber(i, j, 2);
		}
	}
	/* �s��̈����Z */
	AnswerMatrix = firstMatrix - secondMatrix;


	/* ���b�Z�[�W�o�� */
	std::cout << "�����Z�F\n";

	/* ���ʏo�͂̃��[�v */
	for (int i = 0; i < 2; i++) {
		/* ���ʏo�͂̃��[�v */
		for (int j = 0; j < 2; j++) {
			std::cout << AnswerMatrix.GetNumber(i, j) << " ,";
		}
		/* ���b�Z�[�W�o�� */
		std::cout << '\n';
	}


	Matrix thirdMatrix(3, 2);	// �}�g���N�X3
	Matrix forseMatrix(2, 4);	// �}�g���N�X4

	/* ���l�Z�b�g */
	thirdMatrix.SetNumber(0,0, 0);
	thirdMatrix.SetNumber(0, 1, 1);
	thirdMatrix.SetNumber(1, 0, 2);
	thirdMatrix.SetNumber(1, 1, 3);
	thirdMatrix.SetNumber(2, 0, 4);
	thirdMatrix.SetNumber(2, 1, 5);
	forseMatrix.SetNumber(0, 0, 0);
	forseMatrix.SetNumber(0, 1, 1);
	forseMatrix.SetNumber(0, 2, 2);
	forseMatrix.SetNumber(0, 3, 3);
	forseMatrix.SetNumber(1, 0, 4);
	forseMatrix.SetNumber(1, 1, 5);
	forseMatrix.SetNumber(1, 2, 6);
	forseMatrix.SetNumber(1, 3, 7);

	/* �s��̊|���Z*/
	Matrix fifthMatrix = thirdMatrix * forseMatrix;



	/* ���b�Z�[�W�o�� */
	std::cout << "�|���Z�F\n";

	/* ���ʏo�͂̃��[�v */
	for (int i = 0; i < 3; i++) {
		/* ���ʏo�͂̃��[�v */
		for (int j = 0; j < 4; j++) {
			std::cout << fifthMatrix.GetNumber(i, j) << " ,";
		}
		/* ���b�Z�[�W�o�� */
		std::cout << '\n';
	}

}