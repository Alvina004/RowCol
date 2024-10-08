#pragma once

#include "Crypto.h"
#include <cstddef>

const unsigned int TemplateSize = 256;

class rowcol : public Crypto
{
public:
	rowcol();
	virtual ~rowcol();

	virtual int Encrypt(const unsigned char* pSrc, unsigned int SrcSz, unsigned char* pOut, unsigned int& Outsz);
    virtual int Decrypt(const unsigned char* pSrc, unsigned int SrcSz, unsigned char* pOut, unsigned int& Outsz);

	int SetKey(unsigned int);
	int GetKey();

private:

	size_t mkey;

};