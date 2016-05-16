package cn.ismartv.rsasample;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

import cn.ismartv.rsalib.Md5Test;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        String result = new Md5Test().md5Test();
        TextView textView = (TextView) findViewById(R.id.test);
        textView.setText(result);
    }
}
