LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := apptools

LOCAL_MODULE_FILENAME := libapptools

LOCAL_SRC_FILES := \
CZHelperFunc_luabinding.cpp \
HelperFunc.cpp \
lpack.c \



LOCAL_C_INCLUDES+= . \
$(QUICK_COCOS2DX_ROOT)/lib/cocos2d-x/scripting/lua/luajit/include	\
$(QUICK_COCOS2DX_ROOT)/lib/cocos2d-x/scripting/lua/tolua	\
$(QUICK_COCOS2DX_ROOT)/lib/cocos2d-x/scripting/lua/cocos2dx_support	\
$(QUICK_COCOS2DX_ROOT)/lib/cocos2d-x/cocos2dx/include	\
$(QUICK_COCOS2DX_ROOT)/lib/cocos2d-x/cocos2dx	\
$(QUICK_COCOS2DX_ROOT)/lib/cocos2d-x/cocos2dx/platform/android	\
$(QUICK_COCOS2DX_ROOT)/lib/cocos2d-x/cocos2dx/kazmath/include	\



include $(BUILD_STATIC_LIBRARY)
