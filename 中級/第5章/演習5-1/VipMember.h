#pragma once
#include<string>
#include "Member.h"

class VipMember:public Member{
public:
	/* ƒRƒ“ƒXƒgƒ‰ƒNƒ^ */
	VipMember(const std::string& name, int no, double w, const std::string& prv);

	/* “Á“Tæ“¾ */
	std::string get_privilege() const { return privilege; }

	/* “Á“Tİ’è */
	void set_privilege(const std::string& prv) {
		/* “Á“T‚ğƒZƒbƒg‚·‚é */
		privilege = (prv != "") ? prv : "–¢“o˜^";
	}
	/* ‰ïˆõî•ñ•\¦ */
	void print() const;

	/* ©ŒÈĞ‰î */
	void introduce();

private:
	std::string privilege;	// “Á“T
};
