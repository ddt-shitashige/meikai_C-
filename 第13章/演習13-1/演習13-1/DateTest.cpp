/**
 * @file Exerises13-1.cpp
 * @brief ���K13-1	���t�N���XDate��4�łɑ΂��āA�ȉ��̉��Z�q�֐���ǉ��������t�N���X���쐬����B
 *					�E��̓��t�����������ǂ����𔻒肷�铙�����Z�q==
 *					�E��̓��t���������Ȃ����ǂ����𔻒肷�铙�����Z�q!=
 *					�E��̓��t�̑召�֌W�𔻒肷��֌W���Z�q>,>=,<,<=
 *					�����V�������t�̂ق���傫���Ɣ��肷�邱�ƁB
 *					�E��̓��t�̌��Z���s���i��������Ă��邩�����߂�j���Z���Z�q�|
 *					�����I�y�����h����E�I�y�����h���������ƁB���E�̃I�y�����h�̓��t�����������0��Ԃ��A���I�y�����h�̕����V�������t�ł���΁A���t�̍��𐳂̒l�Ƃ��ĕԂ��A���Â����t�ł���΁A���t�̍��𕉒l�Ƃ��ĕԂ����ƁB
 *					�E���t�𗂓��̓��t�ɍX�V���鑝�����Z�q++�i�O�u���y�ь�u���j
 *					�E���t��O���̓��t�ɍX�V���鑝�����Z�q--�i�O�u���y�ь�u���j
 *					�E���t��n���i�߂����t�ɍX�V���镡��������Z�q+=
 *					�E���t��n���߂������t�ɍX�V���镡��������Z�q-=
 *					�E���t��n����̓��t�����߂���Z���Z�q�{
 *					�E���t��n���O�̓��t�����߂錸�Z���Z�q�|
 * @author shitashige
 * @date 20200401
 */

#include <iostream>
#include "Date.h"

using namespace std;

int main() {

	Date firstDate(2020, 2, 20);	// 1�ڂ̓��t
	Date secondDate(2020, 2, 25);	// 2�ڂ̓��t
	Date thirdDate(2020, 2, 15);	// 2�ڂ̓��t


	/* �u�[���A���`���ŕ\�� */
	cout << boolalpha;

	/* ���b�Z�[�W�\�� */
	cout << "[==]�������t[" << (firstDate == firstDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[==]�Ⴄ���t[" << (firstDate == secondDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[!=]�������t[" << (firstDate != firstDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[!=]�Ⴄ���t[" << (firstDate != secondDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[>]�������t[" << (firstDate > firstDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[>]�E���傫�����t[" << (firstDate > secondDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[>]�����傫�����t[" << (secondDate > firstDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[>=]�������t[" << (firstDate >= firstDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[>=]�E���傫�����t[" << (firstDate >= secondDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[>=]�����傫�����t[" << (secondDate >= firstDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[<]�������t[" << (firstDate < firstDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[<]�E���傫�����t[" << (firstDate < secondDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[<]�����傫�����t[" << (secondDate < firstDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[<=]�������t[" << (firstDate <= firstDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[<=]�E���傫�����t[" << (firstDate <= secondDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[<=]�����傫�����t[" << (secondDate <= firstDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[-5]�E���傫�����t[" << (firstDate - secondDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[5]�����傫�����t[" << (secondDate - firstDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "���t���C���N�������g(�O�u)[" << (++firstDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "���t���C���N�������g(��u)[" << (firstDate++) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "���t���f�N�������g(�O�u)[" << (--firstDate) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "���t���f�N�������g(��u)[" << (firstDate--) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[+5]����������Z�q[" << (firstDate += 5) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[-5]����������Z�q(��u)" << (firstDate -= 5) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[+5]���Z���Z�q[" << (firstDate + 5) << "]\n";

	/* ���b�Z�[�W�\�� */
	cout << "[-5]���Z���Z�q[" << (firstDate - 5) << "]\n";

}