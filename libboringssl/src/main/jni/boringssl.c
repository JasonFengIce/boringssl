#include <jni.h>
#include <string.h>
#include <stdio.h>
#include "openssl/md5.h"


JNIEXPORT jstring JNICALL
Java_cn_ismartv_boringssl_Md5_md5(JNIEnv *env, jclass type, jstring str_) {
    const char *str = (*env)->GetStringUTFChars(env, str_, 0);
    unsigned char md[16];
    int i;
    char tmp[3] = {'\0'}, buf[33] = {'\0'};
    MD5(str, strlen(str), md);
    for (i = 0; i < 16; i++) {
        sprintf(tmp, "%2.2x", md[i]);
        strcat(buf, tmp);
    }
    (*env)->ReleaseStringUTFChars(env, str_, str);
    return (*env)->NewStringUTF(env, buf);
}