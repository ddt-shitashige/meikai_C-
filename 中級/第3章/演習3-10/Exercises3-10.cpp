/**
 * @file Exerises3-10.cpp
 * @brief ���K3-10	List3-16�̊֐�binsearchx�𗘗p����v���O�������쐬����B
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

/**
 * @fn
 * @brief �ėp2���T���֐�
 * @param key �T���I�u�W�F�N�g
 * @param base �擪�v�f
 * @param nmemb �v�f��
 * @param size �傫��
 * @param conpar ��r�֐�
  * @return 0:����I��
 */
void* binsearchx(const void* key, const void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*)) {

	/* �傫����0�ȏ�̏ꍇ */
	if (nmemb > 0) {
		const char* x = reinterpret_cast<const char*>(base);	// �i�[X��`
		size_t pl = 0;	// �T���͈͐擪�̓Y����
		size_t pr = nmemb - 1;	// �T���͈͖����̓Y����
		size_t pc;	// �T���͈͒����̓Y����

		/* �������[�v */
		while (1) {
			int comp = compar(key, reinterpret_cast<const void*>(&x[(pc = (pl + pr) / 2) * size]));	// �T������
			/* �T�������� */
			if (comp == 0) {
				/* �T��������Ɠ������擪�̗v�f��T�� */
				for (; pc > pl; pc--) {
					/* �������l���������烋�[�v���甲���� */
					if (compar(key, reinterpret_cast<const void*>(&x[pc = (pl + pr) / 2 * size]))) {
						break;
					}
					return const_cast<void*>(reinterpret_cast<const void*>(&x[pc * size]));
				}
			}
			/* �T���͈͏I���� */
			else if (pl == pr) {
				break;
			}
			/* �T���͈͌㔼�ɍi�荞�� */
			else if (comp > 0) {
				pl = pc + 1;
			}
			/* �T���͈͑O���ɍi�荞�� */
			else {
				pr = pc - 1;
			}
		}
	}
	return NULL;
}

/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	char string[] = "abcdefghijklmnopqrstuvwxyz";	// ������z��1
	char search[] = "g";	// �T��������


	char* result;	// ����

	result = (char*)binsearchx(search, string, 27, 1, Comper);

	/* ���ʂ�NULL�Ŗ��������ꍇ */
	if (result != NULL) {
		/* ���b�Z�[�W�o�� */
		std::cout << result - string << "����v(�|�C���^�z��)\n";
	}
	else {
		/* ���b�Z�[�W�o�� */
		std::cout << "������Ȃ�����";
	}

}