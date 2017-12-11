package com.example.myjni;

/**
 * Created by aplex-new1 on 2017/12/11.
 */
public class JniTest {
    native public String HelloJni();
    static{
        System.loadLibrary("myjniso");
    }
}
