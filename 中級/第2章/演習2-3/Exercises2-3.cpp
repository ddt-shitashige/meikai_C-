

#include<iostream>

unsigned set(unsigned x, int pos) {

	unsigned number = 1;	// ���l

	/* 1�̒l��pos�����炷 */
	number << pos;

	/* pos�����炵���Ƃ����1���i�[ */
	x |= pos;
}

unsigned reset(unsigned x, int pos) {

	unsigned number = 0;	// ���l

	/* 1�̒l��pos�����炷 */
	number << pos;

	/* pos�����炵���Ƃ����1���i�[ */
	x |= pos;
}