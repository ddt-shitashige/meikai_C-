/**
 * @file Exerises3-14.cpp
 * @brief ���K3-14�@List3-13�Ɏ������N���XPerson�^�̔z����N�C�b�N�\�[�g�A���S���Y���ɂ���ă\�[�g����v���O�������쐬����Bqsort�֐��𗘗p���邱�ƂȂ��A�쐬���鎖�B
 * @author shitashige
 * @date 20200428
 */

#include<cstdlib>
#include<cstring>
#include<iostream>
#include<iomanip>

using namespace std;

class Person {
public:
	char name[10];	// ���O
	int height;	// �g��
	int weight;	// �̏d
};


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
}



/* Person�^�̔�r�֐�(���O����) */
int npcmp(const Person* x, const Person* y) {
	return strcmp(x->name, y->name);
}
/* Person�^�̔�r�֐�(�g������) */
int hpcmp(const Person* x, const Person* y) {
	return x->height<y->height ? -1 :x->height > y->height ? 1 : 0;
}

/* Person�^�̔�r�֐�(�̏d�~��) */
int wpcmp(const Person* x, const Person* y) {
	return x->weight<y->weight ? 1 : x->weight > y->weight ? -1 : 0;
}

/* no�l���̃f�[�^��\�� */
void print_person(const Person x[], int no) {
	/* �l�������[�v */
	for (int i = 0; i < no; i++) {
		/* ���b�Z�[�W�\�� */
		cout << setw(10) << left << x[i].name << " " << x[i].height << "cm " << x[i].weight << "kg\n";
	}
}


/**
 * @fn
 * @brief ���C���֐�
 * @param base ���בւ��ΏۂƂȂ�z��f�[�^�ւ̐擪�Ԓn
 * @param num ���בւ��ΏۂƂȂ�z��̗v�f��
 * @param size ���בւ��Ώۂ̃f�[�^�P���̃o�C�g��
 * @param cmpFunc ���בւ������邽�߂̑召��r�p�֐��ւ̃|�C���^
 */
void Createqsort(void* base, size_t num, size_t size, int (*cmpFunc)(const void* n1, const void* n2)) {

	/* �v�f��1�ȉ��Ȃ烊�^�[�� */
	if (num <= 1) {
		return;
	}
	int searchElement = (num / 2);	// �T���v�f�ԍ�
	int maxElement = num;		// �ő�v�f
	int minElement = 0;		// �ŏ��v�f
	int result;	// ����

	const char* target = reinterpret_cast<const char*>(base);	//�Ώە�

	/* ���������������܂Ń��[�v */
	while (true) {

		/* �z��̗v�f��������T�� */
		for (int i = 0; i < num; i++) {
			/* ���l��r */
			result = cmpFunc(const_cast<void*>(reinterpret_cast<const void*>(&target[searchElement* size])),
				const_cast<void*>(reinterpret_cast<const void*>(&target[i * size])));

			/* �T�������v�f�̍������傫�������ꍇ�̏��� */
			if (result <= 0) {
				/* ���l��ێ� */
				maxElement = i;

				/* ���[�v�E�o */
				break;
			}
		}
		/* �z��̗v�f���E����T�� */
		for (int i = num - 1; i >= 0; i--) {
			/* ���l��r */
			result = cmpFunc(const_cast<void*>(reinterpret_cast<const void*>(&target[searchElement * size])),
				const_cast<void*>(reinterpret_cast<const void*>(&target[i * size])));

			/* �T�������v�f�̉E���������������ꍇ�̏��� */
			if (result >= 0) {
				/* ���l��ێ� */
				minElement = i;
				/* ���[�v�E�o */
				break;
			}
		}
		/* �����ɑ傫���̂��Ȃ������ꍇ�A�܂��A�E���ɏ������̂����������ꍇ�ɔ����� */
		if (maxElement == searchElement && minElement == searchElement) {
			break;
		}
		/* ���g���܂܂�Ă����ꍇ */
		if (searchElement == minElement) {
			/* �T���v�f�ԍ��X�V */
			searchElement = maxElement;
		}
		/* ���g���܂܂�Ă����ꍇ */
		else if (searchElement == maxElement) {
			/* �T���v�f�ԍ��X�V */
			searchElement = minElement;
		}



		/* �l����ւ� */
		memswap(const_cast<void*>(reinterpret_cast<const void*>(&target[maxElement*size])),
			const_cast<void*>(reinterpret_cast<const void*>(&target[minElement*size])), size);
	}
	/* ������x�����̏������s�Ȃ� */
	if(minElement!=1)
		Createqsort(const_cast<void*>(reinterpret_cast<const void*>(target)), maxElement + 1, size, cmpFunc);
	/* �E���̏������s�Ȃ� */
	if(num-maxElement!=1)
		Createqsort(const_cast<void*>(reinterpret_cast<const void*>(target + ((maxElement) * size))), num-minElement, size, cmpFunc);

}


/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {
	/* �l�ԃf�[�^ */
	Person x[] = { {"Shibata",170,52},
					{"Takaoka",180,70},
					{"Nangou",172,63},
					{"Sugiyama",165,50},
				};

	int nx = sizeof(x) / sizeof(x[0]);	// �z��x�̗v�f��

	/* ������o�� */
	puts("�\�[�g�O");

	/* �l�����̃f�[�^�\�� */
	print_person(x, nx);

	/* ���O�����Ƀ\�[�g */
	qsort(x, nx, sizeof(Person), reinterpret_cast<int(*)(const void*, const void*)>(npcmp));

	/* ���b�Z�[�W�\�� */
	cout << "���O�����\�[�g��\n";
	
	/* �l�����̃f�[�^�\�� */
	print_person(x, nx);

	/* �g�������Ƀ\�[�g */
	qsort(x, nx, sizeof(Person), reinterpret_cast<int(*)(const void*, const void*)>(hpcmp));

	/* ���b�Z�[�W�\�� */
	cout << "�g�������\�[�g��\n";

	/* �l�����̃f�[�^�\�� */
	print_person(x, nx);

	/* �̏d�����Ƀ\�[�g */
	qsort(x, nx, sizeof(Person), reinterpret_cast<int(*)(const void*, const void*)>(wpcmp));

	/* ���b�Z�[�W�\�� */
	cout << "�̏d�����\�[�g��\n";

	/* �l�����̃f�[�^�\�� */
	print_person(x, nx);

	/* ���O�����Ƀ\�[�g */
	Createqsort(x, nx, sizeof(Person), reinterpret_cast<int(*)(const void*, const void*)>(npcmp));

	/* ���b�Z�[�W�\�� */
	cout << "���얼�O�����\�[�g��\n";

	/* �l�����̃f�[�^�\�� */
	print_person(x, nx);

	/* �g�������Ƀ\�[�g */
	Createqsort(x, nx, sizeof(Person), reinterpret_cast<int(*)(const void*, const void*)>(hpcmp));

	/* ���b�Z�[�W�\�� */
	cout << "����g�������\�[�g��\n";

	/* �l�����̃f�[�^�\�� */
	print_person(x, nx);

	/* �̏d�����Ƀ\�[�g */
	Createqsort(x, nx, sizeof(Person), reinterpret_cast<int(*)(const void*, const void*)>(wpcmp));

	/* ���b�Z�[�W�\�� */
	cout << "����̏d�����\�[�g��\n";

	/* �l�����̃f�[�^�\�� */
	print_person(x, nx);



}