#include <jni.h>


JNIEXPORT jstring JNICALL
Java_com_david_hellondk_MainActivity_stringFromJNI(JNIEnv *env, jobject instance) {

    // TODO
    return (*env)->NewStringUTF(env, "this String come from C ");
}

JNIEXPORT jstring JNICALL
Java_com_david_hellondk_MainActivity_stringFromJNI2(JNIEnv *env, jobject instance) {

    // TODO
    return (*env)->NewStringUTF(env, "this String come from C 2");
}

