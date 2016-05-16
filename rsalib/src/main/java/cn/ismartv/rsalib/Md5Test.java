package cn.ismartv.rsalib;

/**
 * Created by huaijie on 5/16/16.
 */
public class Md5Test {
    static {
        System.loadLibrary("rsa");
    }

    public static native String md5Test(String str);
}
