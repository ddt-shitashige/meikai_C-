/**
 * @file Exerises3-24.cpp
 * @brief	���v�����łȂ��A���ς����߂�悤��List3-17�������������v���O�������쐬����B
 *			�Ȃ��ǂݍ��񂾕��̐��̌��͕��ς����߂�ۂ̕��ꂩ�珜�O���鎖�B
 * @author shitashige
 * @date 20200130
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
	int delCount = 0;	// ���O�����

	/* �ŏ��ɓ��͂��� */
	for (addCount = 0; addCount < n; addCount++) {
		int t;		// ���Z����l�i��蕶�������s���Ă��邾���Ŏ��̈ӎu�ł͂Ȃ��j

		/* ���͑���������o�� */
		cout << "����:";

		/* ���l���� */
		cin >> t;

		/* ���͂�0�Ȃ烋�[�v���甲���� */
		if (t < 0) {
			/* �ʒm���b�Z�[�W�o�� */
			cout<<"\a���̐��͉��Z���܂���B\n";

			/* ���O�񐔒ǉ� */
			delCount++;
			continue;
		}

		/* ���l�����v�l�ɑ���(���l�͉��Z����Ȃ�) */
		sum += t;
	}

	/* ���v�l�o�� */
	cout << "���v��" << sum << "�ł��B\n";

	/* ���ϒl�o�� */
	cout << "���ς�" << sum / (addCount-delCount) << "�ł��B\n";

	return 0;
}