/**
 * @file Exerises1-11.cpp
 * @brief ���K1-11	�E�Ɏ����悤�ɁA��̎����l��ǂݍ��݁A���̍��v�ƕ��ς����߂ĕ\������v���O�������쐬����B
 * @author shitashige
 * @date 20191211
 */

#include <iostream>

using namespace std;
/**
 * @brief main�֐�
 * @return 0:����
 */
int main() {

	double inputNumberX = 0;	// ���͂���X�̒l
	double inputNumberY = 0;	// ���͂���Y�̒l

	/* X�l�̓��͂𑣂������o�� */
	cout << "X�̒l����͂��Ă�������\n";
	
	/* X�l����*/
	cin >> inputNumberX;

	/* Y�l�̓��͂𑣂������o�� */
	cout << "Y�̒l����͂��Ă�������\n";

	/* Y�l����*/
	cin >> inputNumberY;

	/* ���v�l�ƕ��ϒl�o�� */
	cout << "���v��" << inputNumberX + inputNumberY << "�ł��B\n���ς�" << (inputNumberX + inputNumberY) / 2 << "�ł�";

	return 0;

}