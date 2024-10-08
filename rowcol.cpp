#include <stddef.h>
#include "rowcol.h"
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>

rowcol::rowcol() 
{
}

rowcol::~rowcol()
{
}

int rowcol::Matrix(size_t mkey, char str[][]){
    char 
    for(int i=0;i<mkey;i++){
        
        for(int j=0;j<mkey;j++){
          
           str[i][j]; 
            
            
        }
    }
    
}

int rowcol::Encrypt(const unsigned char* psource, unsigned int sourcesize, unsigned char* pout, unsigned int& outsize)
{
	if (!psource || !pout || !sourcesize || !outsize || outsize< sourcesize)
		return -1;

	for (unsigned int i = 0; i < sourcesize; ++i)
	{
		//pout[i] = mEncryptTable[1][ psource[i] ];
	}
	return 0;
}

int rowcol::Decrypt(const unsigned char* psource, unsigned int sourcesize, unsigned char* pout, unsigned int& outsize)
{
	if (!psource || !pout || !sourcesize || !outsize || outsize < sourcesize)
		return -1;

	for (unsigned int i = 0; i < sourcesize; ++i)
	{
		//pout[i] = mDecryptTable[1][ psource[i] ];
	}
	return 0;
}

int rowcol::SetKey(unsigned int sz)
{
  mkey = sz;

	return 0;
}

int rowcol::GetKey()
{

	return mkey;
}
