/**
 * @file Exerises3-11.cpp
 * @brief ���K3-11	1����n�܂ł̘a�����߂�List3-9��for���ō쐬����B
 * @author shitashige
 * @date 20200115
 */

#include <iostream>

using namespace std;
/**
 * @fn
 * ���C���֐�
 * @brief 1������͒l�܂ł̑��a�����߂�֐�
 * @return 0:����I��
 */
int main() {
	int n;		// ����n�i��蕶���������Ă��邾���Ŏ��̈ӎu�ł͂Ȃ��j

	/* ������s�����e�̕�������o�� */
	cout << "1����n�܂ł̘a�����߂܂��B\n";
	/* n�ɐ��̒l�����͂����܂Ń��[�v */
	do {
		/* ���[�U�[�ɓ��͂𑣂�������o�� */
		cout << "n�̒l";
		/* n�̒l����� */
		cin >> n;
	} while (n <= 0);

	int sum = 0;		// ���v�l(��蕶���������Ă��邾���Ŏ��̈ӎu�ł͂Ȃ�)

	/* i���C���N�������g���Ă����Ă���𑫂����Ƃō��v�l�����߂� */
	for (int i = 1; i <= n; i++) {
		/* sum��i�𑫂� */
		sum += i;
	}

	cout << "1����" << n << "�܂ł̘a��" << sum << "�ł��B\n";

	return 0;
}