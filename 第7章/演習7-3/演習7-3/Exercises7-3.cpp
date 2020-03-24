/**
 * @file Exerises7-3.cpp
 * @brief ���K7-3	List6-16�̊֐�sort���A�Q�Ƃ킽���ł͂Ȃ��A�|�C���g�킽���ɂ���čs���悤�ɕύX�����v���O�������쐬����B
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
 * @return
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
 * @brief ����1�ƈ���2�ƈ���3�������Ƀ\�[�g
 * @param a 1�ڂ̐��l
 * @param b 2�ڂ̐��l
 * @param c 3�ڂ̐��l
 * @return
 */
void sort (int *a, int *b, int *c) {
	/* a��b�̒l�����ւ��� */
	if (*a > *b)swap(a, b);
	/* b��c�̒l�����ւ��� */
	if (*b > *c)swap(b, c);
	/* a��b�̒l�����ւ��� */
	if (*a > *b)swap(a, b);
}

/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	int a, b,c;    // a��b��c�̐��l

	/* ���b�Z�[�W��\�������̂��Aa�l����� */
	cout << "�ϐ�a:"; cin >> a;
	/* ���b�Z�[�W��\�������̂��Ab�l����� */
	cout << "�ϐ�b:"; cin >> b;
	/* ���b�Z�[�W��\�������̂��Ab�l����� */
	cout << "�ϐ�c:"; cin >> c;

	/* a�l��b�l������ */
	sort(&a, &b, &c);

	/* ���b�Z�[�W�\�� */
	cout << "�ϐ�a��b��c�̒l�������Ƀ\�[�g���܂����B\n";
	/* ���b�Z�[�W�\�� */
	cout << "�ϐ�a�̒l��" << a << "�ł�\n";
	/* ���b�Z�[�W�\�� */
	cout << "�ϐ�b�̒l��" << b << "�ł�\n";
	/* ���b�Z�[�W�\�� */
	cout << "�ϐ�c�̒l��" << c << "�ł�\n";


	return 0;
}