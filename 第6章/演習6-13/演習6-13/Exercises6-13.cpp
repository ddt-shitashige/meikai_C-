/**
 * @file Exerises6-13.cpp
 * @brief ���K6-13	List6-14�̃v���O������a=y;��ǉ����ăv���O�����̋������m�F����B
 * @author shitashige
 * @date 20200323
 */


#include <iostream>
using namespace std;

/**
 * @fn
 * main
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	
	int x=1;	// x�l
	int y=2;	// y�l
	int &a=x;	// a�̒l��x�̃�����������悤�ɂ���B

	/* a�l�o�� */
	cout << "a = " << a << '\n';
	/* x�l�o�� */
	cout << "x = " << x << '\n';
	/* y�l�o�� */
	cout << "y = " << y << '\n';

	/* a�l��5�ɕύX(x�l��5�ɕς��) */
	a=5;

	/* a�l�o�� */
	cout << "a = " << a << '\n';
	/* x�l�o�� */
	cout << "x = " << x << '\n';
	/* y�l�o�� */
	cout << "y = " << y << '\n';

	/* a��x��y�l�ɕύX */
	a = y;

	/* a�l�o�� */
	cout << "a = " << a << '\n';
	/* x�l�o�� */
	cout << "x = " << x << '\n';
	/* y�l�o�� */
	cout << "y = " << y << '\n';

	return 0;
}