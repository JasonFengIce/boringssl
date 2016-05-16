#include <jni.h>
#include <string.h>
#include <stdio.h>
#include "md5.h"


jstring md5(JNIEnv *env, char *source) {
    unsigned char md[16];
    int i;
    char tmp[3] = {'\0'}, buf[33] = {'\0'};
    MD5(source, strlen(source), md);
    for (i = 0; i < 16; i++) {
        sprintf(tmp, "%2.2x", md[i]);
        strcat(buf, tmp);
    }
    return (*env)->NewStringUTF(env, buf);
}


JNIEXPORT jstring JNICALL
Java_cn_ismartv_rsalib_Md5Test_md5Test(JNIEnv *env, jclass type) {
    char *source = "hello world";
    unsigned char md[16];
    int i;
    char tmp[3] = {'\0'}, buf[33] = {'\0'};
    MD5(source, strlen(source), md);
    for (i = 0; i < 16; i++) {
        sprintf(tmp, "%2.2x", md[i]);
        strcat(buf, tmp);
    }
    return (*env)->NewStringUTF(env, buf);


//    return (*env)->NewStringUTF(env, returnValue);
}
