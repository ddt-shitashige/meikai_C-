#include <iomanip>
#include "Matrix.h"

/* �R���X�g���N�^ */
Matrix::Matrix(int height, int width) {

	/* �����ݒ� */
	Matrix::height=height;

	/* ���ݒ� */
	Matrix::width=width;

	/* �������m�� */
	m = new double[Matrix::height* Matrix::width];
}

/* �R�s�[�R���X�g���N�^ */
Matrix::Matrix(const Matrix &matrix) {
	/* �����R�s�[ */
	height = matrix.height;
	/* �����R�s�[ */
	width = matrix.width;

	/* �������m�� */
	m = new double[height * width];

	/* �v�f�R�s�[���[�v */
	for (int i = 0; i < height * width; i++) {
		/* �v�f�R�s�[ */
		m[i] = matrix.m[i];
	}

}
/* �f�X�g���N�^ */
Matrix::~Matrix() {
	/* �������폜 */
	delete[] m;
}


/* ���Z�q= */
Matrix &Matrix::operator=(const Matrix &matrix) {
	/* ���ȏ��������� */
	if (&matrix != this) {
		/* �v�f����������ꍇ�̏��� */
		if (height * width != matrix.height * matrix.height) {
			/* �������폜 */
			delete[] m;
		}
	}
	/* �v�f�R�s�[���[�v */
	for (int i = 0; i < height * width; i++) {
		/* �v�f�R�s�[ */
		m[i] = matrix.m[i];
	}
	return *this;
}

/* ���Z�q+ */
Matrix operator+(const Matrix &x, const Matrix &y) {
	Matrix cacheMatrix = x;	// �ꎞ�ۑ��̃}�g���N�X

	/* �v�f�������[�v */
	for (int i = 0; i < x.height * x.width; i++) {
		/* �v�f�R�s�[ */
		cacheMatrix.m[i] = x.m[i] + y.m[i];
	}
	return cacheMatrix;

}

/* ���Z�q- */
Matrix operator-(const Matrix &x, const Matrix &y) {
	Matrix cacheMatrix = x;	// �ꎞ�ۑ��̃}�g���N�X

	/* �v�f�������[�v */
	for (int i = 0; i < x.height * x.width; i++) {
		/* �v�f�R�s�[ */
		cacheMatrix.m[i] = x.m[i] - y.m[i];
	}
	return cacheMatrix;


}
/* ���Z�q* */
Matrix operator*(const Matrix &x, const Matrix &y) {
	Matrix cacheMatrix(x.height, y.width);	// �ꎞ�ۑ��̃}�g���N�X

	/* ���������[�v */
	for (int i = 0; i < cacheMatrix.height; i++) {
		/* ���������[�v */
		for (int j = 0; j < cacheMatrix.width; j++) {
			/* �z��̒��g������ */
			cacheMatrix.m[i * cacheMatrix.width + j] = 0;
			/* x�̉��������[�v */
			for (int k = 0; k < x.width; k++) {
				/* �s��v�Z */
				cacheMatrix.m[i * cacheMatrix.width + j] += x.m[i * x.width + k] * y.m[k * y.width + j];
			}
		}
	}
	return cacheMatrix;
}

/* �l�擾 */
double Matrix::GetNumber(int height, int width) const{
	return  m[height * Matrix::width+ width];
}

/* �l�ݒ� */
void Matrix::SetNumber(int height, int width, double setNumber) {
	/* ���l���Z�b�g */
	m[height*Matrix::width + width] = setNumber;
}

