/**
 * @file Exerises7-21.cpp
 * @brief ���K7-2	List6-15�̊֐�swap���A�Q�Ƃ킽���ł͂Ȃ��A�|�C���g�킽���ɂ���čs���悤�ɕύX�����v���O�������쐬����B
 * @author shitashige
 * @date 20200324
 */



#include <iostream>

using namespace std;
/**
 * @fn
 * main
 * @brief ����1�ƈ���2�̒l������
 * @param x 1�ڂ̐��l
 * @param y 2�ڂ̐��l
 * @return 0:����I��
 */
void swap(int *x, int *y) {
	/* t��x������*/
	int t = *x;
	/* x�̒l��y�ɂ��� */
	*x = *y;
	/* y�̒l��x�ɂ��� */
	*y = t;

}
/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	int a, b;    // a��b�̐��l

	/* ���b�Z�[�W��\�������̂��Aa�l����� */
	cout << "�ϐ�a:"; cin >> a;
	/* ���b�Z�[�W��\�������̂��Ab�l����� */
	cout << "�ϐ�b:"; cin >> b;

	/* a�l��b�l������ */
	swap(a, b);

	/* ���b�Z�[�W�\�� */
	cout << "�ϐ�a��b�̒l���������܂����B\n";
	/* ���b�Z�[�W�\�� */
	cout << "�ϐ�a�̒l��" << a << "�ł�\n";
	/* ���b�Z�[�W�\�� */
	cout << "�ϐ�b�̒l��" << b << "�ł�\n";

	return 0;
}