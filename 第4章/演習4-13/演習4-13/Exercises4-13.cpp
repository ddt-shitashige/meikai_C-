/**
 * @file Exerises4-13.cpp
 * @brief ���K4-13	���ʁA�G�߁A�j���Ȃǂ�\���񋓑̂����R�ɒ�`���A�����p�����v���O�������쐬����B
 * @author shitashige
 * @date 20191211
 */


#include <iostream>
#include <ctime>


/**
 * @fn
 * ���C���֐�
 * @brief ���ʂƋG�߂Ɨj����\������֐�
 * @return 0:����I��
 */
int main() {

	enum sex { Boy, Girl };	// ����
	enum season { Spring, Summer, Fall, Winter };	// �G��
	enum week { Sun, Mon, Tue, Wed, Thu, Fri, Sat };	// �j��
	int rundomNumber;	// �����_�����l

	/* �����V�[�h������ */
	srand((unsigned int)time(NULL));

	/* ��������2�̂��܂�����߂鎖�ɂ��A�l��0�`1�̊ԂɂȂ� */
	rundomNumber = rand() % 2;

	/* ���ʕ\�L */
	std::cout << "����:";

	/* ���͒l�ɂ���ď����𕪂��� */
	switch (rundomNumber) {
		/* 0�������ꍇ */
	case Boy:
		/* ���ʂ�\�� */
		std::cout << "�j\n";
		break;
		/* 1�������ꍇ */
	case Girl:
		/* ���ʂ�\�� */
		std::cout << "��\n";
		break;
	default:
		break;
	}
	/* ��������4�̂��܂�����߂鎖�ɂ��A�l��0�`3�̊ԂɂȂ� */
	rundomNumber = rand() % 4;

	/* �G�ߕ\�L */
	std::cout << "�G��:";

	/* ���͒l�ɂ���ď����𕪂��� */
	switch (rundomNumber) {
		/* 0�������ꍇ */
	case Spring:
		/* �G�߂�\�� */
		std::cout << "�t\n";
		break;
		/* 1�������ꍇ */
	case Summer:
		/* �G�߂�\�� */
		std::cout << "��\n";
		break;
		/* 2�������ꍇ */
	case Fall:
		/* �G�߂�\�� */
		std::cout << "�H\n";
		break;
		/* 3�������ꍇ */
	case Winter:
		/* �G�߂�\�� */
		std::cout << "�~\n";
		break;
	default:
		break;
	}
	/* ��������4�̂��܂�����߂鎖�ɂ��A�l��0�`3�̊ԂɂȂ� */
	rundomNumber = rand() % 7;

	/* �j���\�L */
	std::cout << "�j��:";

	/* ���͒l�ɂ���ď����𕪂��� */
	switch (rundomNumber) {
		/* 0�������ꍇ */
	case Sun:
		/* �j����\�� */
		std::cout << "���j��\n";
		break;
		/* 1�������ꍇ */
	case Mon:
		/* �j����\�� */
		std::cout << "���j��\n";
		break;
		/* 2�������ꍇ */
	case Tue:
		/* �j����\�� */
		std::cout << "�Ηj��\n";
		break;
		/* 3�������ꍇ */
	case Wed:
		/* �j����\�� */
		std::cout << "���j��\n";
		break;
		/* 4�������ꍇ */
	case Thu:
		/* �j����\�� */
		std::cout << "�ؗj��\n";
		break;
		/* 5�������ꍇ */
	case Fri:
		/* �j����\�� */
		std::cout << "���j��\n";
		break;
		/* 6�������ꍇ */
	case Sat:
		/* �j����\�� */
		std::cout << "�y�j��\n";
		break;

	default:
		break;
	}
	return 0;
}