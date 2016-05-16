#include <jni.h>
#include <string.h>
#include <stdio.h>
#include "openssl/md5.h"


char *md5(char *source) {
    unsigned char md[16];
    int i;
    char tmp[3] = {'\0'}, buf[33] = {'\0'};
    MD5(source, strlen(source), md);
    for (i = 0; i < 16; i++) {
        sprintf(tmp, "%2.2x", md[i]);
        strcat(buf, tmp);
    }
    return buf;
}

JNIEXPORT jstring JNICALL
Java_cn_ismartv_rsalib_Md5Test_md5Test(JNIEnv *env, jclass type, jstring str_) {
    const char *str = (*env)->GetStringUTFChars(env, str_, 0);
    (*env)->ReleaseStringUTFChars(env, str_, str);
    unsigned char md[16];
    int i;
    char tmp[3] = {'\0'}, buf[33] = {'\0'};
    MD5(str, strlen(str), md);
    for (i = 0; i < 16; i++) {
        sprintf(tmp, "%2.2x", md[i]);
        strcat(buf, tmp);
    }
    return (*env)->NewStringUTF(env, buf);
}

//JNIEXPORT jstring JNICALL
//Java_cn_ismartv_rsalib_Md5Test_md5Test(JNIEnv *env, jclass type) {
//    char *source = "hello world";
//    unsigned char md[16];
//    int i;
//    char tmp[3] = {'\0'}, buf[33] = {'\0'};
//    MD5(source, strlen(source), md);
//    for (i = 0; i < 16; i++) {
//        sprintf(tmp, "%2.2x", md[i]);
//        strcat(buf, tmp);
//    }
//    return (*env)->NewStringUTF(env, buf);
//
//
////    return (*env)->NewStringUTF(env, returnValue);
//}

