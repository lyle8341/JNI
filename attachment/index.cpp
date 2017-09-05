#include "../com_lyle_jni_TestNative.h"
#include<iostream>
using namespace std;

/**
 *native调用java代码
 */
JNIEXPORT void JNICALL Java_com_lyle_jni_TestNative_sayHello(JNIEnv * env, jobject obj)
{
	jclass clazz_TestNative = env->GetObjectClass(obj);
	jfieldID id_number = env->GetFieldID(clazz_TestNative,"number","I");
	jint number = env->GetIntField(obj,id_number);
	cout << number << endl;
	env->SetIntField(obj,id_number,199L);
}
