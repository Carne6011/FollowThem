package com.example.hacktoberfest_2021;

import androidx.appcompat.app.AppCompatActivity;
import androidx.constraintlayout.widget.ConstraintLayout;

import android.app.ActionBar;
import android.content.Context;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.ShapeDrawable;
import android.os.Bundle;
import android.view.View;

import android.content.Intent;
import android.view.ViewGroup;
import android.widget.ImageView;

import java.lang.reflect.Field;


public class MainActivity extends AppCompatActivity {

    int x_s = 605; //graphical value
    int y_s = 400;


    int[][] map = new int[10][28];
    int mx_s = 8; //coordinate value
    int my_s = 4;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.battle_setup);
        setupmap();
        startlocations();
    }

    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (hasFocus) {
            hideSystemUI();
        }
        final ImageView imageView = (ImageView)findViewById(R.id.MinerHat);
        imageView.setX(x_s);
        imageView.setY(y_s);
        imageView.invalidate();
    }

    private void hideSystemUI(){
        View decorView = getWindow().getDecorView();
        decorView.setSystemUiVisibility(
                View.SYSTEM_UI_FLAG_IMMERSIVE
                        | View.SYSTEM_UI_FLAG_LAYOUT_STABLE
                        | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
                        | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
                        | View.SYSTEM_UI_FLAG_HIDE_NAVIGATION
                        | View.SYSTEM_UI_FLAG_FULLSCREEN);
    }
    private void showSystemUI(){
        View decorView = getWindow().getDecorView();
        decorView.setSystemUiVisibility(
                View.SYSTEM_UI_FLAG_LAYOUT_STABLE
                        | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
                        | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN);
    }

    public void setupmap()//sets up the playing field
    {
        for(int i = 1; i <3; i++)//set out of bounds
        {
            for(int j =1; j<7; j++)
            {
                map[i][j] = 5;
            }
        }

        for(int l = 0; l <28; l++)//set out of bounds
        {
            map[0][l] = 5;
            map[9][l] = 5;
        }

        for(int k =0; k<10; k++)
        {
            map[k][0] = 5;
            map[k][27] = 5;
        }
    }

    public void startlocations()//sets the starting locations for the enemy and student
    {
        map[my_s][mx_s] = 1; //student location

        map[my_s][mx_s+1] = 2; //student range
        map[my_s][mx_s-1] = 2;
        map[my_s+1][mx_s] = 2;
        map[my_s-1][mx_s] = 2;
    }

    public void DisplayStudent()
    {

        int dispx;
        int dispy ;
        for(int l = 0; l <28; l++)//set out of bounds
        {
            for(int k =0; k<10; k++)
            {

                if (map[k][l] == 1)
                {
                    dispx= (l * 85)-75;
                    dispy= 740-(k* 85);
                    final ImageView StudentV = (ImageView) findViewById(R.id.MinerHat);
                    StudentV.setX(dispx);
                    StudentV.setY(dispy);
                    StudentV.invalidate();

                }
            }
        }

    }

    public void ArrowUp(View view) {

            my_s = my_s + 1;
            y_s = y_s - 85;
    }
    public void ArrowDown(View view) {

            my_s = my_s - 1;
            y_s = y_s + 85;
         //   DisplayStudent();
    }
    public void ArrowLeft(View view) {
            mx_s = mx_s - 1;
            x_s = x_s - 85;
    }
    public void ArrowRight(View view) {
            mx_s = mx_s + 1;
            x_s = x_s + 85;

    }
}