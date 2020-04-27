/**
 * @file Exerises3-8.cpp
 * @brief ���K3-8	List3-14�̊֐�seqaserch�𗘗p����v���O�������쐬����B
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
	else if (*(char*)string1 > *(char*)string2) {
		return 1;
	}
	else {
		return 0;
	}
}

/**
 * @fn
 * @brief ���C���֐�
 * @param key �T���I�u�W�F�N�g
 * @param base �擪�v�f
 * @param nmemb �v�f��
 * @param size �傫��
 * @param conpar ��r�֐�
  * @return 0:����I��
 */
void* seqsearch(const void* key, const void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*)) {
	const char* x = reinterpret_cast<const char*>(base);	// �i�[����`
	/* �傫�����[�v */
	for(size_t i = 0; i < nmemb; i++) {
		/* �T�������������ꍇ�̏��� */
		if (!compar(key, reinterpret_cast<const void*>(&x[i * size]))) {
			return const_cast<void*>(reinterpret_cast<const void*>(&x[i * size]));
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

	result = (char*)seqsearch(search,string, 27, 1, Comper);

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