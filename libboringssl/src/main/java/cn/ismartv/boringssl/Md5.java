package cn.ismartv.boringssl;

/**
 * Created by huaijie on 5/16/16.
 */
public class Md5 {
    static {
        System.loadLibrary("boringssl");
    }

    public static native String md5(String str);
}
