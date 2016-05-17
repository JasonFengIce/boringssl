package cn.ismartv.rsasample;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

import cn.ismartv.boringssl.Md5;

public class MainActivity extends AppCompatActivity {
    EditText editText;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        editText = (EditText) findViewById(R.id.input);


    }

    public void md5(View view) {
        String result = Md5.md5(editText.getText().toString());
        TextView textView = (TextView) findViewById(R.id.test);
        textView.setText(result);
    }
}
