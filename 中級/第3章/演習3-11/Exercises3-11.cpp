/**
 * @file Exerises3-11.cpp
 * @brief ���K3-11	List3-17�̊֐�quicksort�𗘗p����v���O�������쐬����B
 * @author shitashige
 * @date 20200427
 */

#include<iostream>
#include<cstdlib>

 /*
  *@fn
  * @brief ��r
  * @param string1 ������1
  * @param string2 ������2
  * @return ����
  */
int Comper(const void* string1, const void* string2) {


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


namespace {
	/**
	 * @fn
	 * @brief �ėp2���T���֐�
	 * @param key �T���I�u�W�F�N�g
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
}
/**
 * @fn
 * @brief �ėp�N�C�b�N�\�[�g
 * @param key �T���I�u�W�F�N�g
 * @param nmemb �v�f��
 * @param size �傫��
 * @param conpar ��r�֐�
 * @return 0:����I��
 */
void quicksort(void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*)) {

	/* �傫����0�ȏ�̏ꍇ */
	if (nmemb > 0) {
		const char* v = reinterpret_cast<const char*>(base);	// �擪�v�f�̃|�C���^v
		size_t pl = 0;	// �T���͈͐擪�̓Y����
		size_t pr = nmemb - 1;	// �T���͈͖����̓Y����
		size_t pv = nmemb;	// ����
		size_t pt = (pl + pr) / 2;	// �����̍X�V�l
		const char* x = nullptr;	// �����ւ̃|�C���^

		do {
			/* �������X�V����Ă����ꍇ�A�����ւ̃|�C���^���X�V */
			if (pv != pt)x = &v[(pv = pt) * size];
			/* �l���r���đ傫����ΓY�������{1 */
			while (compar(reinterpret_cast<const void*>(&v[pl * size]), x) < 0) {
				pl++;
			}
			/* �l���r���ď�������ΓY������-1 */
			while (compar(reinterpret_cast<const void*>(&v[pr * size]), x) > 0) {
				pr--;
			}
			/* �E�J�[�\�������J�[�\�����傫���Ȃ��Ă��܂����ꍇ�̏��� */
			if (pl <= pr) {
				/* ���J�[�\���Ɛ����������Ȃ�A�E�J�[�\���𐕎��ɁB�E�J�[�\���Ɛ����������Ȃ�A���J�[�\���𐕎��ɁB�����łȂ���Ό��ݒn���i�[���� */
				pt = (pl == pv) ? pr : (pr == pv) ? pl : pv;
				/* ���J�[�\���ƉE�J�[�\���̒l�����ւ��� */
				memswap(const_cast<void*>(reinterpret_cast<const void*>(&v[pl * size])),
					const_cast<void*>(reinterpret_cast<const void*>(&v[pr * size])), size);
				/* ���J�[�\���C���N�������g */
				pl++;

				/* �E�J�[�\����0�o�Ȃ���� */
				if (pr == 0) {
					/* �N�C�b�N���C�g���s */
					goto QuickRight;
				}
				/* �E�J�[�\���f�N�������g */
				pr--;
			}
		} while (pl <= pr);

		/* �E�J�[�\����0�������ꍇ */
		if (0 < pr) {
			/* �N�C�b�N�\�[�g���s�� */
			quicksort(const_cast<void*>(reinterpret_cast<const void*>(&v[0])), pr + 1, size, compar);
		}

	QuickRight:
		if (pl < nmemb - 1) {
			/* �N�C�b�N�\�[�g���s�� */
			quicksort(const_cast<void*>(reinterpret_cast<const void*>(&v[pl * size])), nmemb - pl, size, compar);
		}
	}
}

/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	char string[] = "zyxwvutsrqponmlkjihgfedcba";	// ������z��1

	quicksort(string, 27, 1, Comper);

	/* ���b�Z�[�W�o�̓��[�v */
	for (int i = 0; i < 27; i++) {
		/* ���b�Z�[�W�o�� */
		std::cout << string[i];
	}

}