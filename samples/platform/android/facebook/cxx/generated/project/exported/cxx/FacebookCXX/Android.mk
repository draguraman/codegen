LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE    := FacebookCXX
LOCAL_SRC_FILES := ../../../FacebookCXX/libs/$(TARGET_ARCH_ABI)/libFacebookCXX_static.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../../FacebookCXX/jni/cxx/includes
LOCAL_EXPORT_LDLIBS := -llog

include $(PREBUILT_STATIC_LIBRARY)