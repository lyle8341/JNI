#include "../com_lyle_jni_TestNative.h"
#include<iostream>
using namespace std;

/**
*native调用java代码
*/
JNIEXPORT void JNICALL Java_com_lyle_jni_TestNative_sayHello(JNIEnv * env, jobject obj)
{
	jclass clazz_TestNative = env->GetObjectClass(obj);
	jfieldID id_f = env->GetFieldID(clazz_TestNative,"f","Lcom/lyle/jni/fc/Father;");
	jobject f = env->GetObjectField(obj,id_f);
	jclass clazz_father = env->FindClass("com/lyle/jni/fc/Father");
	jmethodID id_father_func =  env->GetMethodID(clazz_father,"function","()V");
	//env->CallVoidMethod(f,id_father_func);//调用的是子类的方法
	env->CallNonvirtualVoidMethod(f,clazz_father,id_father_func);//调用的是父类的方法
}
