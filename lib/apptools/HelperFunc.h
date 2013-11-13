#ifndef Cocos2Dx_ZJF_HelperFunc_h
#define Cocos2Dx_ZJF_HelperFunc_h

#include "cocos2d.h"

USING_NS_CC;

class CZHelperFunc
{
public:
    static unsigned int adler32(const char *data, int len);
    static int getFileData(const char *pPathFile);

private:

};

#endif //Cocos2Dx_ZJF_HelperFunc_h
