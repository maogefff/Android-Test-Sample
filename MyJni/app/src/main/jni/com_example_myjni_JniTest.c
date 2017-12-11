#include "com_example_myjni_JniTest.h"

JNIEXPORT jstring JNICALL Java_com_example_myjni_JniTest_HelloJni
(JNIEnv * env, jobject obj){
  return (*env)->NewStringUTF(env,"HelloJni");
}