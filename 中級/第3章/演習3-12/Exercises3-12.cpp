
#include<iostream>

namespace {
	/**
	 * @fn
	 * @brief �l����ւ��֐�
	 * @param x ����ւ���|�C���^
	 * @param y ����ւ���|�C���^
	 * @param n �傫��
	 * @return 0:����I��
	 */
	void memswap(void* x, void* y, size_t n) {
		unsigned char* a = reinterpret_cast<unsigned char*>(x);	// �^�ϊ������|�C���^a
		unsigned char* b = reinterpret_cast<unsigned char*>(y);	// �^�ϊ������|�C���^b
		/* �傫����0�ɂȂ�܂Ń��[�v */
		for (; n--; a++, b++) {
			/* �ꎞ�ۑ���c��a������ */
			unsigned char c = *a;
			/* �l����ς� */
			*a = *b;
			/* �l����ς� */
			*b = c;
		}
	}
	/**
	 * @fn
	 * @brief �l����ւ��֐�
	 * @param x ����ւ���|�C���^
	 * @param y ����ւ���|�C���^
	 * @param element1 �v�f��1
	 * @param element2 �v�f��2
	 * @param data �ԋp�p�f�[�^
	 * @return 0:����I��
	 */
	void Memcatch(void* x, void* y, size_t element1, size_t element2, unsigned char *data) {
		unsigned char* a = reinterpret_cast<unsigned char*>(x);	// �^�ϊ������|�C���^a
		unsigned char* b = reinterpret_cast<unsigned char*>(y);	// �^�ϊ������|�C���^b
		int leftCount = 0;	// ���J�E���g
		int rightCount = 0;	// �E�J�E���g

		/* �J�E���g���v�f���ɂȂ�܂Ń��[�v */
		for (int i=0; leftCount < element1 || rightCount || element2;i++) {
			/* �E�ƍ����r���� */
			if (a[leftCount] > b[rightCount]) {
				/* �������l���i�[ */
				data[i] = b[rightCount];
				/* �C���N�������g */
				rightCount++;
			}
			else {
				/* �������l���i�[ */
				data[i] = a[leftCount];
				/* �C���N�������g */
				leftCount++;
			}
		}
	}

}

/*
 *@fn
 * @brief ��r
 * @param string1 ������1
 * @param string2 ������2
 * @return ����
 */
int Compar(const void* string1, const void* string2) {


	/* ������2���傫�������ꍇ */
	if (*(char*)string1 < *(char*)string2) {
		return -1;
	}
	/* ������1���傫�������ꍇ */
	else if (*(char*)string1 > * (char*)string2) {
		return 1;
	}
	else {
		return 0;
	}
}

static bool callflg = false;

/**
 * @fn
 * @brief �}�[�W�\�[�g
 * @param base �Ώە�
 * @param nmemb �v�f��
 * @param size �傫��
 * @param conpar ��r�֐�
 * @return 0:����I��
 */
void margesort(void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*)) {

	int result = 0;	// ����
	int flontElement = 0;	// �O�̗v�f��
	const char* target = reinterpret_cast<const char*>(base);	//�Ώە�
	/* �v�f��1�������ꍇ�A�������Ȃ� */
	if (nmemb == 1) {
		flontElement = 1;	// �O�̗v�f����1�ɂ���B
	}
	/* �v�f��2�������ꍇ�A */
	else if (nmemb == 2) {
		/* �l���r */
		result = Compar(target, target + size);
		/* ���̐��l�̕����傫�������ꍇ�̏��� */
		if (result == 1) {
			/* �l�����ւ��� */
			memswap(const_cast<void*>(reinterpret_cast<const void*>(&target[0])),
				const_cast<void*>(reinterpret_cast<const void*>(&target[size])), size);
		}
	}
	else {
		/* �㔼���łȂ������ꍇ */
		if (callflg == false) {
			/* �Ăяo���t���O��TRUE�ɂ��� */
			callflg = true;
			/*  �v�f�𕪊�����*/
			margesort(const_cast<void*>(reinterpret_cast<const void*>(target)), nmemb / 2, size, Compar);
		}
		else {
			/*  �v�f�𕪊�����*/
			margesort(const_cast<void*>(reinterpret_cast<const void*>(&target[nmemb/2])), nmemb / 2, size, Compar);

		}
	}

	/*
	 * ���Α��̏������s�Ȃ�
	 */
	int halfNmemb = nmemb / 2;	// �����̗v�f��
	int leftUpper = 0;	// ����ւ������̊m�F(��
	int rightUpper = 0;	// ����ւ������̊m�F(�E)



	 /* �v�f��1�������ꍇ�̏���*/
	if (nmemb == 2 && flontElement == 1) {
		/* �l���בւ����[�v */
		for (int i = 0; i < 2; i++) {
			/* �O�ƌ��̒l���r */
			result = Compar(target + (i * size), target + (halfNmemb + 2) * size);
			/* ���̐��l�̕����傫�������ꍇ�̏��� */
			if (result == 1) {
				/* �l�����ւ��� */
				memswap(const_cast<void*>(reinterpret_cast<const void*>(&target[halfNmemb * size])),
					const_cast<void*>(reinterpret_cast<const void*>(&target[(halfNmemb * size + size) * size])), size);
			}
		}
	}
	/* �E�v�f��2�������ꍇ�A */
	else if (nmemb == 1 || nmemb == 2) {
		/* �l���r */
		result = Compar(target, target + (nmemb * size));
		/* ���̐��l�̕����傫�������ꍇ�̏��� */
		if (result == 1) {
			/* �l�����ւ��� */
			memswap(const_cast<void*>(reinterpret_cast<const void*>(&target[nmemb*size])),
				const_cast<void*>(reinterpret_cast<const void*>(&target[nmemb * size+1])), size);
			/* ����ւ������l(��)���C���N�������g */
		}
		/* �l���בւ����[�v */
		for (int i = 0; i < 2; i++) {

			/* �Ăяo���t���O��ON�Ȃ烋�[�v�E�o */
			if (callflg == true) {
				break;
			}
			/* �O�ƌ��̒l���r */
			result = Compar(target + (leftUpper) * size, target + (nmemb + rightUpper) * size);
			/* ���̐��l�̕����傫�������ꍇ�̏��� */
			if (result == 1) {
				/* ��r������̏ꍇ2������ւ��� */
				if (leftUpper == 0 && rightUpper == 0) {
					/* �l�����ւ��� */
					memswap(const_cast<void*>(reinterpret_cast<const void*>(&target[0])),
						const_cast<void*>(reinterpret_cast<const void*>(&target[nmemb * size])), size);
					/* �l�����ւ��� */
					memswap(const_cast<void*>(reinterpret_cast<const void*>(&target[size])),
						const_cast<void*>(reinterpret_cast<const void*>(&target[(nmemb + 1) * size])), size);

				}
				else {
					/* �l�����ւ��� */
					memswap(const_cast<void*>(reinterpret_cast<const void*>(&target[(+leftUpper) * size])),
						const_cast<void*>(reinterpret_cast<const void*>(&target[(nmemb + rightUpper) * size])), size);
				}
				/* 1�ɂȂ�����A�E���C���N�������g */
				leftUpper =1;
			}
			else {
				/* 1�ɂȂ�����A�����C���N�������g */
				rightUpper = 1;

				/* �擪�v�f��1�������ꍇ�A�u���C�N */
				if (flontElement == 1) {
					break;
				}
			}
		}
	}
	else {
		/* �Ăяo���t���O��ON�ɂ��� */
		callflg = true;
		/*  �v�f�𕪊�����*/
		margesort(const_cast<void*>(reinterpret_cast<const void*>(&target[(nmemb * size)])), nmemb, size, Compar);
	}

}

/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	//char string[] = "zyxwvutsrqponmlkjihgfedcba";	// ������z��1

	char string[] = "65318724";

	margesort(string, 8, 1, Compar);

	/* ���b�Z�[�W�o�̓��[�v */
	for (int i = 0; i < 8; i++) {
		/* ���b�Z�[�W�o�� */
		std::cout << string[i];
	}

}