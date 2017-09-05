# JNI

### jdk1.8
### OS-x64
### vs2017

1.在类com.lyle.jni.TestNative中声明一个native方法

2.使用javah.exe命令生成native方法定义,在dos窗口，路径D:\jdk8_eclipse_oxygen\workspace\JNI\bin下执行
	javah com.lyle.jni.TestNative，生成com_lyle_jni_TestNative.h
	
3.用visual studio 2017创建工程jni_native
![创建工程1](/img/创建工程1.png "创建工程1")
![向导配置2](/img/向导配置2.png "向导配置2")

4.把步骤2生成的文件复制到步骤三创建的工程下,右击头文件——添加——现有项——选择com_lyle_jni_TestNative.h
![添加头文件3](/img/添加头文件3.png "添加头文件3")

5.把D:\Program Files\Java\jdk1.8.0_111\include\jni.h和D:\Program Files\Java\jdk1.8.0_111\include\win32\jni_md.h拷贝到步骤三创建的工程下

6.把com_lyle_jni_TestNative.h文件中的#include <jni.h>改成#include "jni.h"

7.创建index.cpp

![visual_studio工程目录](/img/visual_studio工程目录.png "visual_studio工程目录")

8.生成……配置管理器……x64
![配置管理器4](/img/配置管理器4.png "配置管理器4")

9.ctrl+f7编译……在index.cpp编辑页面右击……运行测试……生成D:\visualstudio_workspace\jni_native\x64\Debug\jni_native.dll文件

10.把D:\visualstudio_workspace\jni_native\x64\Debug路径配置到path中，重启eclipse

11.运行 com.lyle.jni.TestNative

12.项目磁盘目录结构
![磁盘目录](/项目磁盘目录.txt "磁盘目录")