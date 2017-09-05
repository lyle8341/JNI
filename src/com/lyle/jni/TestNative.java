package com.lyle.jni;

import org.junit.Before;
import org.junit.Test;

import com.lyle.jni.fc.Child;
import com.lyle.jni.fc.Father;

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

	TestNative n = null;

	@Before
	public void init() {
		System.loadLibrary("jni_native");
		n = new TestNative();
		n.sayHello();
	}

	// java调用native
	@Test
	public void javaCallNative() {
		// attachment中.zip中的index.cpp
	}

	public int number = 10;

	@Test
	public void nativeCallJava() {
		// attachment中index.cpp
		System.out.println(n.number);
	}

	double max(double n1, double n2) {
		return n1 > n2 ? n1 : n2;
	}

	@Test
	public void nativeCallJavaMethod() {
		// attachment中index2.cpp
	}

	public Father f = new Child();

	@Test
	public void callParentMethod() {
		// attachment中index3.cpp
	}
}
