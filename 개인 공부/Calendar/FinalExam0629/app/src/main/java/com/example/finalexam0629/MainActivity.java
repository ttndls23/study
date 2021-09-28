package com.example.finalexam0629;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    TextView my_Number, my_Name, TextViewResult;
    EditText Number, Name;
    RadioButton radioMorning, radioBranch, radioNight;
    CheckBox checkBoxRice, checkBoxRnr, checkBoxQkscks, checkBoxQkscks2;
    Button BtnSum;
    String name="", number="";
    int sum = 0;
    String time = "", total ="";


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        setTitle("나의 하루 식단표");

        my_Number = findViewById(R.id.my_number);
        my_Name = findViewById(R.id.my_name);
        Number = findViewById(R.id.input_number);
        Name = findViewById(R.id.input_name);
        radioMorning = findViewById(R.id.radioMorning);
        radioBranch = findViewById(R.id.radioBranch);
        radioNight = findViewById(R.id.radioNight);
        checkBoxRice = findViewById(R.id.checkBoxRice);
        checkBoxRnr = findViewById(R.id.checkBoxRnr);
        checkBoxQkscks = findViewById(R.id.checkBoxQkscks);
        checkBoxQkscks2 = findViewById(R.id.checkBoxQkscks2);
        TextViewResult = findViewById(R.id.TextViewResult);
        BtnSum = findViewById(R.id.BtnSum);


        radioMorning.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                time = "아침";
            }
        });

        radioBranch.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                time = "점심";
            }
        });

        radioNight.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                time = "저녁";
            }
        });


        checkBoxRice.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton compoundButton, boolean b) {
                if(checkBoxRice.isChecked() == true){
                    sum += 300;
                }else{
                    sum -= 300;
                }
            }
        });

        checkBoxRnr.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton compoundButton, boolean b) {
                if(checkBoxRnr.isChecked() == true){
                    sum += 200;
                }else{
                    sum -= 200;
                }

            }
        });

        checkBoxQkscks.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton compoundButton, boolean b) {
                if(checkBoxQkscks.isChecked() == true){
                    sum += 150;
                }else{
                    sum -= 150;
                }
            }
        });

        checkBoxQkscks2.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton compoundButton, boolean b) {
                if(checkBoxQkscks2.isChecked() == true){
                    sum += 100;
                }else{
                    sum -= 100;
                }
            }
        });


        BtnSum.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                name = Name.getText().toString();
                number = Number.getText().toString();

                total = number+" "+name+"의\n"+time+" 칼로리는 "+Integer.toString(sum);
                TextViewResult.setText(total);

            }
        });









    }
}
