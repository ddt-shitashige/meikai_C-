/**
 * @file Exerises3-5.cpp
 * @brief ���K3-5	���̉��Z�\�Ə�Z�[�̂ǂ����\������̂���I�������A�I�����ꂽ�\��\������v���O�������쐬����BList3-8�ɏ������v���O�����ƁAList3C-1�ɏ������v���O������2���쐬���鎖�B
 * @author shitashige
 * @date 20200427
 */


#include <iostream>
#include<iomanip>

enum cal { Sum, Mul, Invalid };// �񋓌^��`
typedef void (*Calculation)(int ,int);	//�V�f�[�^�^��`
cal selected;	// �I��l


/*
 *@fn
 * @brief �����Z
 * @param x1 ���Z�l1
 * @param x2 ���Z�l2
 * @return ����
 */
void SumCalculation(int x1, int x2) {
	/* ���b�Z�[�W�o�� */
	std::cout << std::setw(3) << x1 + x2;
}
/*
 *
 *@fn
 * @brief ��Z
 * @param x1 ��Z�l1
 * @param x2 ��Z�l2
 * @return ����
 */
void MulCalculation(int x1, int x2) {
	/* ���b�Z�[�W�o�� */
	std::cout << std::setw(3) << x1 * x2;
}

Calculation calculation[] = { SumCalculation,MulCalculation };	// �z��̒�`

/*
 *@fn
 * @brief ���̕\���o��
 * @param calc �v�Z���Ăяo���֐�
 * @return ����
 */
void Kuku(void calc(int, int)) {
	/* ���b�Z�[�W�o�� */
	std::cout << "  |";
	/* ���l�o�̓��[�v */
	for (int i = 1; i <= 9; i++) {
		/* ���b�Z�[�W�o�� */
		std::cout << std::setw(3) << i;
	}
	/* ���s */
	std::cout << "\n--+";
	/* ���o�̓��[�v */
	for (int i = 1; i <= 27; i++) {
		/* ���b�Z�[�W�o�� */
		std::cout << '-';
	}
	/* ���s*/
	std::cout << "\n";
	/* ���ʏo�̓��[�v */
	for (int i = 1; i <= 9; i++) {
		std::cout << i << " |";
		for (int j = 1; j <= 9; j++) {
			/* ���b�Z�[�W�o�� */
			calc(i, j);
		}
		/* ���s*/
		std::cout << "\n";
	}
	/* ���s���[�v */
	std::cout << "\n";
}

/*
 *@fn
 * @brief ���f�֐�
 * @param number ���͒l
 * @return ����
 */
void(*Judge(int number))(int, int ){
	/* ���f���� */
	if (Sum == number) {
		return SumCalculation;
	}
	else {
		return MulCalculation;
	}
}

/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	int inputNumber;	// ���͒l

	/* ���b�Z�[�W�o�� */
	std::cout << "�ǂ����\���H\n";

	/* ���� */
	std::cin >> inputNumber;

	/* ���͒l�ɂ���ĕύX */
	if (Sum == inputNumber) {
		/* �����Z�̋������s */
		Kuku(SumCalculation);
	}
	else {
		/* �|���Z�̋������s */
		Kuku(MulCalculation);
	}

	/* ���s*/
	std::cout << "\n\n";

	/* ���l���f */
	void (*result)(int,int) = (Judge(inputNumber));
	/* ���s */
	Kuku(result);


}
