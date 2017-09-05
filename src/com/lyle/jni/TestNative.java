package com.lyle.jni;

/**
 * @ClassName: TestNative
 * @Description:
 * @author: Lyle
 * @date: 2017年9月5日 上午9:19:58
 */
public class TestNative {

	/**
	 * @Title: sayHello
	 * @Description: native 方法测试
	 * @return: void
	 */
	public native void sayHello();

	public static void main(String[] args) {
		System.loadLibrary("jni_native");
		TestNative n = new TestNative();
		n.sayHello();
	}
}
