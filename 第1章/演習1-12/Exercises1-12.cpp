/**
 * @file Exerises1-12.cpp
 * @brief ���K1-12	�E�Ɏ����悤�ɁB�O�p�`�̒�ӂƍ�����ǂݍ���ŁA���̖ʐς�\������v���O�������쐬����B
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
	double base = 0;		// ���
	double height = 0;		// ����

	/* �ړI��\�� */
	cout << "�O�p�`�̖ʐς����߂܂��B\n";

	/* ��ӓ��͂𑣂����b�Z�[�W��\�� */
	cout << "��ӂ���͂��Ă��������B\n";

	/* ��ӓ��� */
	cin >> base;

	/* �����̓��͂𑣂����b�Z�[�W��\�� */
	cout << "��������͂��Ă��������B\n";

	/* �������� */
	cin >> height;

	/* �ʐϏo�� */
	cout << "�ʐς�" << (base * height) / 2 << "�ł��B";
}