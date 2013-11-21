LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := pbc

LOCAL_MODULE_FILENAME := libpbc

LOCAL_SRC_FILES := \
 src/alloc.c \
src/array.c \
src/bootstrap.c \
src/context.c \
src/decode.c \
src/map.c \
src/pattern.c \
src/proto.c \
src/register.c \
src/rmessage.c \
src/stringpool.c \
src/varint.c \
src/wmessage.c \
binding/lua/pbc-lua.c \


LOCAL_C_INCLUDES+= src	\
$(QUICK_COCOS2DX_ROOT)/lib/cocos2d-x/scripting/lua/luajit/include	\


include $(BUILD_STATIC_LIBRARY)