/**
 * @file Exerises11-1.cpp
 * @brief ���K11-1	�O�u���Z�q�ƌ�u���Z�q�͍s�����Ƃ��قړ����ł��邽�߁A�����悤�ȃR�[�h���e���Z�q�֐��ɎU��΂��Ă���i���Ƃ��΁A�������Z�q����if���͑O�u�łƌ�u�łœ���ł��邵�A�������Z�q����if�����O�u�łƌ�u�łœ���ł���j�B�O�u���Z�q�֐������u���Z�q�֐����Ăяo�����A�������͌�u���Z�q�֐�����O�u���Z�q�֐����Ăяo�����̂����ꂩ�ɕύX����B�Ȃ��A�ǂ���̎������D�܂����̂����������邱�ƁB
 * @author shitashige
 * @date 20200330
 */

#include <iostream>
#include "Counter.h"
using namespace std;


/**
 * @fn
 * main
 * @brief ���C���֐�
 * @return
 */
int main()
{
	int no;	// �i���o�[
	Counter x;	// �J�E���^�[��
	Counter y;	// �J�E���^�[��

	/* ���b�Z�[�W�\�� */
	cout << "�J�E���g�A�b�v�񐔁F"; cin >> no;

	/* �i���o�[���������[�v */
	for (int i = 0; i < no; i++) {
		/* ���b�Z�[�W�\�� */
		cout << x++ << '\t' << ++y << '\n';
	}
	/* ���b�Z�[�W�\�� */
	cout << "�J�E���g�_�E���񐔁F"; cin >> no;

	/* �i���o�[���������[�v */
	for (int i = 0; i < no; i++) {
		cout << x-- << '\t' << --y << '\n';
	}
	/* x��0�������ꍇ */
	if (!x) {
		/* ���b�Z�[�W�\�� */
		cout << "x��0�ł��B\n";
	}
	else {
		/* ���b�Z�[�W�\�� */
		cout << "x��0�ł͂���܂���B\n";
	}

	/* Q.�ǂ���̎������D�܂������B
	   A.�O�u�����Z�q�B
	   ���R�F�O�u�̓����������̂܂܎g�����A��u�̓��������擾�����*/
}