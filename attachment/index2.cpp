#include "../com_lyle_jni_TestNative.h"
#include<iostream>
using namespace std;

/**
*native调用java代码
*/
JNIEXPORT void JNICALL Java_com_lyle_jni_TestNative_sayHello(JNIEnv * env, jobject obj)
{
	jclass clazz_TestNative = env->GetObjectClass(obj);
	jmethodID id_max = env->GetMethodID(clazz_TestNative,"max","(DD)D");//javap -s -p xx.class
	jdouble maxValue = env->CallDoubleMethod(obj,id_max,3.14,3.15);
	cout << maxValue << endl;
}
