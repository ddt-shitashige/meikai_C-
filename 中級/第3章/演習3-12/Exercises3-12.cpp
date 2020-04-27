
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


	char *answer=NULL;	// �����@

	/* �������m�ۃ��[�v */
	for (int i = 0; i < nmemb * size; i++) {
		/* �������m�� */
		answer=new char[nmemb * size];
	}
	const char* target = reinterpret_cast<const char*>(base);	//�Ώە�


	/* �l�i�[���[�v */
	for (int i = 0; i < nmemb; i++) {
		/* �l�i�[ */
		answer[i*size]= target[i];
	}
	

	int result = 0;	// ����

	/* ��r���[�v */
	for (int i = 0; i < nmemb/2; i++) {
		/* �l��r */
		result = Compar(const_cast<void*>(reinterpret_cast<const void*>(&answer[2 * (i * size)])), const_cast<void*>(reinterpret_cast<const void*>(&answer[2 * (i * size) + 1])));
		/* ���̐��l�̕����傫�������ꍇ�̏��� */
		if (result == 1) {
			/* �l�����ւ��� */
			memswap(const_cast<void*>(reinterpret_cast<const void*>(&answer[2*(i*size)])),
				const_cast<void*>(reinterpret_cast<const void*>(&answer[2*(i*size)+1])), size);
		}

	}
	int leftUpper = 0;	// ����ւ������̊m�F(��
	int rightUpper = 0;	// ����ւ������̊m�F(�E)
	char *cache;	// �L���b�V��
	int count;	// �J�E���g
	/* �l�i�[���[�v */
	for (int i = 1; i*i*2 <= nmemb ; i++) {
		count=0;
		/* �l�i�[���[�v */
		for(int j=1;j*j*i<nmemb;j++){
			/* ������*/
			leftUpper = 0;
			/* ������ */
			rightUpper = 0;
			/* �������m�� */
			cache = new char[i * 4 * size];

			/* �l�i�[���[�v */
			for (int k = 0; leftUpper<i* 2&&rightUpper<i*2; k++) {
				/* �O�ƌ��̒l���r */
				result = Compar(answer + (leftUpper+j*j-1) * size, answer + (1*j*i+j*j*i + rightUpper) * size);
				/* ���̐��l�̕����傫�������ꍇ�̏��� */
				if (result == 1) {
					/* �l�i�[ */
					cache[k]=answer[1*j*i + j * j*i + rightUpper];
					/* 1�ɂȂ�����A�E���C���N�������g */
					rightUpper++;
				}
				else {
					/* �l�i�[ */
					cache[k] = answer[leftUpper + j * j-1];

					/* 1�ɂȂ�����A�����C���N�������g */
					leftUpper++;
				}
			}
			/* ������ɓ��B�����ꍇ */
			if (leftUpper == i*2) {
				/* �l�i�[���[�v */
				for(int l=leftUpper+rightUpper;l<i*j*4;l++){
					/* �l�i�[ */
					cache[l]=answer[rightUpper+count+i*i];
					/* �C���N�������g */
					rightUpper++;
				}
			}

			/* �E����ɓ��B�����ꍇ */
			if (rightUpper == i * 2) {
				/* �l�i�[���[�v */
				for (int k = leftUpper + rightUpper; k < i * 4; k++) {
					/* �l�i�[ */
					cache[k] = answer[leftUpper + count*(j-1)];
					/* �C���N�������g */
					leftUpper++;
				}
			}

			/* �l�i�[���[�v */
			for (int l = 0; l < i * 4; l++) {
				/* �l�i�[ */
				answer[count]=cache[l];
				count++;
			}

			/* �������J�� */
			delete[] cache;
		}

	}
	/* �l�i�[ */
	memcpy(base,answer,size*nmemb);
}

/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {

	char string[] = "65318724";

	margesort(string, 8, 1, Compar);

	/* ���b�Z�[�W�o�̓��[�v */
	for (int i = 0; i < 8; i++) {
		/* ���b�Z�[�W�o�� */
		std::cout << string[i];
	}

}