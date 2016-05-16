# Copyright (C) 2009 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
include sources.mk

LOCAL_MODULE    := hello-jni
LOCAL_SRC_FILES := $(crypto_sources)
LOCAL_SRC_FILES += $(ssl_sources)
LOCAL_SRC_FILES += $(linux_arm_sources)
LOCAL_SRC_FILES += $(tool_sources)

LOCAL_C_INCLUDES := \
	src/include \

LOCAL_CPP_EXTENSION := .cxx .cpp .cc
LOCAL_CPP_FEATURES := rtti  
LOCAL_CPP_FEATURES := exceptions 

include $(BUILD_SHARED_LIBRARY)
