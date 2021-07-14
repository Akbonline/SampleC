#include <jni.h>
#include <string>
#include "dateTime.h"


extern "C" JNIEXPORT jstring JNICALL
Java_com_example_samplec_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++, The Date and Time is: "+getDateTime();
    return env->NewStringUTF(hello.c_str());
}