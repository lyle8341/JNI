# JNI

### jdk1.8
### OS-x64
### vs2017

1.在类com.lyle.jni.TestNative中声明一个native方法
2.使用javah.exe命令生成native方法定义,在dos窗口，路径D:\jdk8_eclipse_oxygen\workspace\JNI\bin下执行
	javah com.lyle.jni.TestNative
3.用visual studio 2017创建工程jni_native
4.把步骤2生成的文件复制到步骤三创建的工程下
5.把D:\Program Files\Java\jdk1.8.0_111\include\jni.h和D:\Program Files\Java\jdk1.8.0_111\include\win32\jni_md.h拷贝到步骤三创建的工程下
6.把com_lyle_jni_TestNative.h文件中的#include <jni.h>改成#include "jni.h"
7.创建index.cpp
8.生成……配置管理器……x64
9.ctrl+f7编译……在index.cpp编辑页面右击……运行测试……生成D:\visualstudio_workspace\jni_native\x64\Debug\jni_native.dll文件
10.把D:\visualstudio_workspace\jni_native\x64\Debug路径配置到path中，重启eclipse
11.运行 com.lyle.jni.TestNative