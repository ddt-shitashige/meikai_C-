/**
 * @file Exerises3-15.cpp
 * @brief ���K3-15	�ǂݍ��񂾐����l�̑S�񐔂�\������List3-12�����������Ė񐔂̕\�����I��������ɁA�񐔂̌���\������v���O�������쐬����B
 * @author shitashige
 * @date 20200118
 */



#include <iostream>

using namespace std;

/**
 * @fn
 * ���C���֐�
 * @brief �񐔂�\������֐�
 * @return 0:����I��
 */
int main() {
	int n;		// ��蕶�������s���Ă��������ŁA���̈ӎu�ł͂Ȃ��B�ϐ�n

	/* �����o�� */
	cout << "�����l�F\n";

	/* �������� */
	cin >> n;

	int factorCount = 0;	// �񐔃J�E���g

	/* �����l��MAX�ɂȂ�܂ŁA�񐔂�\�����郋�[�v */
	for (int i = 1; i <= n; i++) {
		/* �񐔃`�F�b�N */
		if (n % i == 0){
			/* �񐔏o�� */
			cout << i << "\n";

			/* �񐔃J�E���g�C���N�������g */
			factorCount++;
		}
	}

	cout <<"�񐔂�"<<factorCount<<"�ł��B";
}