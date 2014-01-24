/*
** Lua binding: CCHTMLLabel_luabinding
** Generated automatically by tolua++-1.0.92 on 01/24/14 15:33:05.
*/

#include "CCHTMLLabel_luabinding.h"
#include "CCLuaEngine.h"

using namespace cocos2d;




#include "CCHTMLLabel.h"
USING_NS_CC_EXT;

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 
 tolua_usertype(tolua_S,"CCHTMLLabel"); toluafix_add_type_mapping(typeid(CCHTMLLabel).hash_code(), "CCHTMLLabel");
 tolua_usertype(tolua_S,"CCSize"); toluafix_add_type_mapping(typeid(CCSize).hash_code(), "CCSize");
 tolua_usertype(tolua_S,"CCNode"); toluafix_add_type_mapping(typeid(CCNode).hash_code(), "CCNode");
}

/* method: create of class  CCHTMLLabel */
#ifndef TOLUA_DISABLE_tolua_CCHTMLLabel_luabinding_CCHTMLLabel_create00
static int tolua_CCHTMLLabel_luabinding_CCHTMLLabel_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCHTMLLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCHTMLLabel* tolua_ret = (CCHTMLLabel*)  CCHTMLLabel::create();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCHTMLLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithString of class  CCHTMLLabel */
#ifndef TOLUA_DISABLE_tolua_CCHTMLLabel_luabinding_CCHTMLLabel_createWithString00
static int tolua_CCHTMLLabel_luabinding_CCHTMLLabel_createWithString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCHTMLLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCSize",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* utf8_str = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCSize preferred_size = *((CCSize*)  tolua_tousertype(tolua_S,3,0));
  const char* font_alias = ((const char*)  tolua_tostring(tolua_S,4,0));
  {
   CCHTMLLabel* tolua_ret = (CCHTMLLabel*)  CCHTMLLabel::createWithString(utf8_str,preferred_size,font_alias);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCHTMLLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithString of class  CCHTMLLabel */
#ifndef TOLUA_DISABLE_tolua_CCHTMLLabel_luabinding_CCHTMLLabel_initWithString00
static int tolua_CCHTMLLabel_luabinding_CCHTMLLabel_initWithString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCHTMLLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCSize",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCHTMLLabel* self = (CCHTMLLabel*)  tolua_tousertype(tolua_S,1,0);
  const char* utf8_str = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCSize preferred_size = *((CCSize*)  tolua_tousertype(tolua_S,3,0));
  const char* font_alias = ((const char*)  tolua_tostring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithString'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithString(utf8_str,preferred_size,font_alias);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setString of class  CCHTMLLabel */
#ifndef TOLUA_DISABLE_tolua_CCHTMLLabel_luabinding_CCHTMLLabel_setString00
static int tolua_CCHTMLLabel_luabinding_CCHTMLLabel_setString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCHTMLLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCHTMLLabel* self = (CCHTMLLabel*)  tolua_tousertype(tolua_S,1,0);
  const char* utf8_str = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setString'", NULL);
#endif
  {
   self->setString(utf8_str);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getString of class  CCHTMLLabel */
#ifndef TOLUA_DISABLE_tolua_CCHTMLLabel_luabinding_CCHTMLLabel_getString00
static int tolua_CCHTMLLabel_luabinding_CCHTMLLabel_getString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCHTMLLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCHTMLLabel* self = (CCHTMLLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getString'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getString();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: appendString of class  CCHTMLLabel */
#ifndef TOLUA_DISABLE_tolua_CCHTMLLabel_luabinding_CCHTMLLabel_appendString00
static int tolua_CCHTMLLabel_luabinding_CCHTMLLabel_appendString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCHTMLLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCHTMLLabel* self = (CCHTMLLabel*)  tolua_tousertype(tolua_S,1,0);
  const char* utf8_str = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'appendString'", NULL);
#endif
  {
   self->appendString(utf8_str);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'appendString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerLuaClickListener of class  CCHTMLLabel */
#ifndef TOLUA_DISABLE_tolua_CCHTMLLabel_luabinding_CCHTMLLabel_registerLuaClickListener00
static int tolua_CCHTMLLabel_luabinding_CCHTMLLabel_registerLuaClickListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCHTMLLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCHTMLLabel* self = (CCHTMLLabel*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION click_handle = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerLuaClickListener'", NULL);
#endif
  {
   self->registerLuaClickListener(click_handle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerLuaClickListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerLuaMovedListener of class  CCHTMLLabel */
#ifndef TOLUA_DISABLE_tolua_CCHTMLLabel_luabinding_CCHTMLLabel_registerLuaMovedListener00
static int tolua_CCHTMLLabel_luabinding_CCHTMLLabel_registerLuaMovedListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCHTMLLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCHTMLLabel* self = (CCHTMLLabel*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION moved_handle = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerLuaMovedListener'", NULL);
#endif
  {
   self->registerLuaMovedListener(moved_handle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerLuaMovedListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeLuaListener of class  CCHTMLLabel */
#ifndef TOLUA_DISABLE_tolua_CCHTMLLabel_luabinding_CCHTMLLabel_removeLuaListener00
static int tolua_CCHTMLLabel_luabinding_CCHTMLLabel_removeLuaListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCHTMLLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCHTMLLabel* self = (CCHTMLLabel*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION handle = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeLuaListener'", NULL);
#endif
  {
   self->removeLuaListener(handle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeLuaListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_CCHTMLLabel_luabinding_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_cclass(tolua_S,"CCHTMLLabel","CCHTMLLabel","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCHTMLLabel");
   tolua_function(tolua_S,"create",tolua_CCHTMLLabel_luabinding_CCHTMLLabel_create00);
   tolua_function(tolua_S,"createWithString",tolua_CCHTMLLabel_luabinding_CCHTMLLabel_createWithString00);
   tolua_function(tolua_S,"initWithString",tolua_CCHTMLLabel_luabinding_CCHTMLLabel_initWithString00);
   tolua_function(tolua_S,"setString",tolua_CCHTMLLabel_luabinding_CCHTMLLabel_setString00);
   tolua_function(tolua_S,"getString",tolua_CCHTMLLabel_luabinding_CCHTMLLabel_getString00);
   tolua_function(tolua_S,"appendString",tolua_CCHTMLLabel_luabinding_CCHTMLLabel_appendString00);
   tolua_function(tolua_S,"registerLuaClickListener",tolua_CCHTMLLabel_luabinding_CCHTMLLabel_registerLuaClickListener00);
   tolua_function(tolua_S,"registerLuaMovedListener",tolua_CCHTMLLabel_luabinding_CCHTMLLabel_registerLuaMovedListener00);
   tolua_function(tolua_S,"removeLuaListener",tolua_CCHTMLLabel_luabinding_CCHTMLLabel_removeLuaListener00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_CCHTMLLabel_luabinding (lua_State* tolua_S) {
 return tolua_CCHTMLLabel_luabinding_open(tolua_S);
};
#endif

