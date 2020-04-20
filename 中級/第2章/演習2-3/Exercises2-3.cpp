

#include<iostream>

unsigned set(unsigned x, int pos) {

	unsigned number = 1;	// ”’l

	/* 1‚Ì’l‚ğpos•ª‚¸‚ç‚· */
	number << pos;

	/* pos•ª‚¸‚ç‚µ‚½‚Æ‚±‚ë‚É1‚ğŠi”[ */
	x |= pos;
}

unsigned reset(unsigned x, int pos) {

	unsigned number = 0;	// ”’l

	/* 1‚Ì’l‚ğpos•ª‚¸‚ç‚· */
	number << pos;

	/* pos•ª‚¸‚ç‚µ‚½‚Æ‚±‚ë‚É1‚ğŠi”[ */
	x |= pos;
}