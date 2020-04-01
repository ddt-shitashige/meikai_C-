#pragma once
#ifndef ___Class_IntArray
#define ___Class_IntArray

/* ����z��N���X */
class IntArray {
	int nelem;	// �z��̗v�f��
	int *vec;	// �퓬�z��ւ̃|�C���^

public:
	
	/* �����I�R���X�g���N�^ */
	IntArray(int size) : nelem(size) { vec = new int[nelem]; }

	/* �R�s�[�R���X�g���N�^ */
	IntArray(const IntArray &x);

	/* �f�X�g���N�^ */
	~IntArray() { delete[] vec; }

	/* �v�f����Ԃ� */
	int size() const { return nelem; }

	/* ������Z�q= */
	IntArray &operator=(const IntArray &x);

	/* �Y�������Z�q */
	int &operator[](int i) { return vec[i]; }
};

#endif