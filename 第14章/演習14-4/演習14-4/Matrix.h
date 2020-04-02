#pragma once
class Matrix {
	int height;	// �s��
	int width;		// ��
	double *m;	// �擪�v�f�ւ̃|�C���^

public:
	Matrix(int height, int width);	// �R���X�g���N�^
	Matrix(const Matrix &x);	// �R�s�[�R���X�g���N�^
	~Matrix();	// �f�X�g���N�^

	Matrix &operator=(const Matrix &matrix);	// ���Z�q=
	friend Matrix operator+(const Matrix &x, const Matrix &y);	// ���Z�q+
	friend Matrix operator-(const Matrix &x, const Matrix &y);	// ���Z�q-
	friend Matrix operator*(const Matrix &x, const Matrix &y);	// ���Z�q*

	/* �l�擾 */
	double GetNumber(int height, int width) const;

	/* �l�ݒ� */
	void SetNumber(int height, int width, double SetNumber);

};