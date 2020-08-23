package com.onursercanyilmaz.qalqulator;

import androidx.appcompat.app.AppCompatActivity;

import android.app.ProgressDialog;
import android.os.AsyncTask;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;

public class MainActivity extends AppCompatActivity {

    Button title_button;
    TextView title_text;
    private ProgressDialog progressDialog;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate( savedInstanceState );
        setContentView( R.layout.activity_main );

        title_button = findViewById( R.id.title_button );
        title_text = findViewById( R.id.title_text );

        title_button.setOnClickListener( new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                new FetchTitle().execute(  );
            }
        } );
    }

    private  class FetchTitle extends AsyncTask<Void, Void, Void> {
        String title;


        protected void onPreExecute(){
            super.onPreExecute();
            progressDialog = new ProgressDialog( MainActivity.this );
            progressDialog.setTitle( "Title" );
            progressDialog.setMessage( "Loading..." );
            progressDialog.setIndeterminate( false );
            progressDialog.show();
        }
        @Override
        protected Void doInBackground(Void... voids) {
            try {
                Document doc = Jsoup.connect( "https://www.izu.edu.tr/" ).get();
                title = doc.title();
            }catch (Exception e){
                e.printStackTrace();
            }
            return  null;
        }
        @Override
        protected void onPostExecute(Void aVoid) {


            title_text.setText("Title: " + " " + title);
            progressDialog.dismiss();
        }
    }

    }
