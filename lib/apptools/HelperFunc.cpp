#include "HelperFunc.h"
#include "cocos2d.h"
extern "C" {
#include "lua.h"
}
#include "CCLuaEngine.h"

#define MOD_ADLER 65521
unsigned int CZHelperFunc::adler32(const char *pData, int nLen) {
    uint8_t *data = (uint8_t *)pData;
    size_t len = nLen;
    
    uint32_t a = 1, b = 0;
    
    /* Loop over each byte of data, in order */
    for (size_t index = 0; index < len; ++index)
    {
        a = (a + data[index]) % MOD_ADLER;
        b = (b + a) % MOD_ADLER;
    }
    
    return (b << 16) | a;
    
}

int CZHelperFunc::getFileData(const char *pPathFile)
{
    unsigned long len;
    unsigned char* buf = CCFileUtils::sharedFileUtils()->getFileData(pPathFile, "rb", &len);
    if (NULL==buf) return 0;
    
    CCLuaStack* stack = CCLuaEngine::defaultEngine()->getLuaStack();
    stack->clean();
    stack->pushString((const char*)(buf), len);
    delete buf;
    return 1;
}
