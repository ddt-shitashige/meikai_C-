/**
 * @file Exerises3-23-2.cpp
 * @brief	���v�����łȂ��A���ς����߂�悤��List3-15�����List3-16�������������v���O���������ꂼ��쐬����B
 * @author shitashige
 * @date 20200129
 */

#include "iostream"

using namespace std;

/**
 * @fn
 * ���C���֐�
 * @brief ���͒l�̍��v�ƕ��ϒl�����߂�֐�
 * @return 0:����I��
 */
int main() {

	int n;		// ���Z������i��蕶�������s���Ă��邾���Ŏ��̈ӎu�ł͂Ȃ��j

	/* �ړI�o�� */
	cout << "���������Z���܂��B\n";

	/* ���[�U�[�₢�����o�� */
	cout << "�����Z���܂����F";

	/* ������ */
	cin >> n;

	int sum = 0;		// ���v�l
	int addCount = 0;	// ���Z������

	/* �ŏ��ɓ��͂��� */
	for (addCount = 0; addCount < n; addCount++) {
		int t;		// ���Z����l�i��蕶�������s���Ă��邾���Ŏ��̈ӎu�ł͂Ȃ��j

		/* ���͑���������o�� */
		cout << "����:";

		/* ���l���� */
		cin >> t;

		/* ���v�l��1000�ȏ�Ȃ烋�[�v���甲���� */
		if (sum+t>1000){
			/* �x���o�� */
			cout << "\a���v��1000�𒴂��܂����B\n�Ō�̐��l�͖������܂��B\n";
			/* ���[�v���甲���� */
			break;
		}
		/* ���l�����v�l�ɑ��� */
		sum += t;
	}

	/* ���v�l�o�� */
	cout << "���v��" << sum << "�ł��B\n";

	/* ���ϒl�o�� */
	cout << "���ς�" << sum / addCount << "�ł��B\n";
}