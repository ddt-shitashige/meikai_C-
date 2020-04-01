#include "IntArray.h"

/* �R�s�[�R���X�g���N�^ */
IntArray::IntArray(const IntArray &x) {
	/* �������g�ŏ��������悤�Ƃ������� */
	if (&x == this) {
		/* �z��̗v�f��1�ɂ��� */
		nelem = 1;
		/* 1�Ń������m�� */
		vec = new int[nelem];
		/* ���l�i�[ */
		vec[0] = 0;
	}
	else {
		/* �v�f����x�Ɠ����ɂ��� */
		nelem = x.nelem;
		/*  */
		vec = new int[nelem];
		for (int i = 0; i < nelem; i++) {
			vec[i] = x.vec[i];
		}
	}
}
/* ������Z�q */
IntArray &IntArray::operator=(const IntArray &x) {
	/* ��������������g�Ŗ��������ꍇ�̏��� */
	if (&x != this) {
		/* ����O��̗v�f�������̂Ȃ����ꍇ�̏��� */
		if (nelem != x.nelem) {
			/* �������J�� */
			delete[] vec;
			/* �V�����v�f�� */
			nelem = x.nelem;
			/* �������m�� */
			vec = new int[nelem];
		}
		/* �S�v�f���R�s�[���郋�[�v */
		for (int i = 0; i < nelem; i++) {
			/* �v�f�i�[ */
			vec[i] = x.vec[i];
		}
	}
	return *this;
}
