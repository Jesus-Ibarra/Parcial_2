#include <iostream>
#include "imagenread.h"
#include "fstream"
using namespace std;

int main()
{

    int c=0,p,q,a,l,m,n,s,t;
    unsigned long long rojo,verde,azul;
    int AlturaInicial,AnchoInicial;
    //char band=true,opcion=true;
    string filname = "../Parcial_2/Mapas/Guayana4x5.png"; //cargar la imagen
                    //retrocede/ingresa a la carpeta/nombre de la imagen o /nombre de la carp. imagen/nom. imagen
    QImage im(filname.c_str());


    AlturaInicial=im.height();
    AnchoInicial=im.width();
    /* p=16/AlturaInicial;
     q=16/AnchoInicial;
     m=16%AlturaInicial;
     n=16%AnchoInicial;
     s=AlturaInicial*p+m;
     t=AnchoInicial*q+n;*/
    /*cout<<"ingrese a y b: ";
    cin>>a>>l;
    p=16/a;
    q=16/l;
    m=16%a;
    n=16%l;
    s=a*p+m;
    t=l*q+n;
    cout<<"division a: "<<p<<endl;
    cout<<"modulo a: "<<m<<endl;
    cout<<s<<endl;
    cout<<"division l: "<<q<<endl;
    cout<<"modulo l: "<<n<<endl;
    cout<<t<<endl;*/

//**************************************************************************************************
  //escala=AlturaInicial*AnchoInicial;

     /*ratio=3;

     char **RGB[16][16][3];
     x=round(AlturaInicial/16*i);
     y=round(AnchoInicial/16*j);

      rojo = 250;
     [row,AnchoInicial,rojo]=size(filname);



      row = round(ratio * row);
      AnchoInicial = round(ratio * AnchoInicial);

      //  Generar nueva imagen
      dst = zeros(row, AnchoInicial, rojo, class(filname));

      for (i = 1 : row){
          for j = 1 : col{
              x = round(i / ratio);
              y = round(j / ratio);
              if x == 0{
                  x = x + 1;
              }
              if y == 0{
                  y = y + 1;
              }
              dst(i, j, : ) = src(x, y, :);
          }
      }

      figure
      imshow(src)
      figure
      imshow(dst)*/
//******************************************************************************************************************************
    /* char ***RGB;  //genera matriz

     RGB = new char**[16];
     for( i=0;i<16;i++){
         RGB[i]= new char*[16];
         cout<<"i: "<<i<<'\t';
         for(j=0;j<16;j++){
             //cout<<"j: "<<j<<'\t';
             //int color=0;
             rojo=im.pixelColor(i,j).red();
             verde=im.pixelColor(i,j).green();
             azul=im.pixelColor(i,j).blue();
             RGB[i][j]=new char (rojo);
             RGB[i][j]=new char (verde);
             RGB[i][j]=new char (azul);

             cout<<"|"<<rojo<<","<<verde<<","<<azul<<"|"<<'\t';

             *********************************************************

             //m=i+1;
             //n=j+1;
             //p=i-m;
             //q=j-n;

             //s=(1-p)*(1-q)*(1,1)+p*(1-q)*(1,3)+(1-p)*q*(3,1)+p*q*(3,3);
         }
         cout<<endl;

     }*/
     /*s=(1-p)*(1-q)*(1,1)+p*(1-q)*(1,3)+(1-p)*q*(3,1)+p*q*(3,3);

     string nombreArchivo= "../Parcial_2/Matriz.txt";
     ofstream archivo;
     c=0;
     archivo.open(nombreArchivo.c_str(), fstream::out);
     archivo<<"{"<<endl;

     for(int indey=0;indey<AlturaInicial;indey+=1)
     {
         for(int clockY=0;clockY<s;clockY+=1)
         {
             archivo<<"{"<<endl;
             for(int index=0;index<AnchoInicial;index+=1)
             {
                 for(int clockX=0;clockX<s;clockX+=1)
                 {
                     rojo=im.pixelColor(index,indey).red();
                     verde=im.pixelColor(index,indey).green();
                     azul=im.pixelColor(index,indey).blue();
                     archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"}";
                     c=c+1;
                     if(c%16!=0)
                     {
                         archivo<<",";
                     }
                 }

             }
             archivo<<endl<<"},"<<endl;
         }
     }
     archivo.close();*/

//**************************************************************************************************
/*     string nombreArchivo= "../Parcial_2/Matriz.txt";
     ofstream archivo;
     c=0;
     archivo.open(nombreArchivo.c_str(), fstream::out);
     archivo<<"{"<<endl;

     for(int indey=0;indey<AlturaInicial;indey+=1)
     {
         for(int index=0;index<AnchoInicial;index+=1)
         {
         for(int clockY=indey*escala;clockY<(indey*escala)+escala;clockY+=1)
         {
             archivo<<"{"<<endl;

                 for(int clockX=index*escala;clockX<(index*escala)+escala;clockX+=1)
                 {
                     rojo=im.pixelColor(index,indey).red();
                     verde=im.pixelColor(index,indey).green();
                     azul=im.pixelColor(index,indey).blue();
                     nuevo[clockX][clockY]=RGB[index][indey];
                     nuevo[clockX][clockY]=new char (rojo);
                     nuevo[clockX][clockY]=new char (verde);
                     nuevo[clockX][clockY]=new char (azul);
                     archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"}";
                     c=c+1;
                     if(c%16!=0)
                     {
                         archivo<<",";
                     }
                 }

             }
             archivo<<endl<<"},"<<endl;
         }
     }
     archivo.close();
*/


//************************************************************************************************

//***************************************************************************************************


/*q=16/AlturaInicial;
m=16/AnchoInicial;
p=16%AlturaInicial;
n=16%AnchoInicial;*/


   /* for(int indey=0;indey<AlturaInicial;indey+=1)
    {
        for(int clockY=0;clockY<16/AlturaInicial;clockY+=1)
            {

            for(int index=0;index<AnchoInicial;index+=1)
            {
                for(int clock=0;clock<16/AlturaInicial;clock+=1)
                {
                rojo=im.pixelColor(index,indey).red();
                verde=im.pixelColor(index,indey).green();
                azul=im.pixelColor(index,indey).blue();
                c++;
                if(c=q){
                    p=16%AlturaInicial;
                    while(band){
                        clockY-=p;
                        //indey=p;
                        //index=p;
                        band=false;
                    }

                }
                cout <<index<<", "<<indey<<" = "<< "rojo: "<<rojo<<'\t'<<"verde: "<<verde<<'\t'<<"azul: "<<azul<<endl;
                }
                cout<<c<<endl;
            }
        }
    }*/
    string nombreArchivo= "../Parcial_2/Matriz.txt";
    ofstream archivo;
    c=0;
    archivo.open(nombreArchivo.c_str(), fstream::out);
    archivo<<"{"<<endl;
    //q=16/AlturaInicial;
    p=16%AlturaInicial;
    //q=16/AlturaInicial;

    for(int indey=0;indey<AlturaInicial;indey+=1)
    {
        //p=16%AlturaInicial;

        for(int clockY=0;clockY<16/AlturaInicial;clockY+=1)
        {
            //clockY=1;
            archivo<<"{"<<endl;
            n=16%AnchoInicial;
            //m=16/AnchoInicial;
            for(int index=0;index<AnchoInicial;index+=1)
            {
                for(int clockX=0;clockX<16/AnchoInicial;clockX+=1)
                {
                    rojo=im.pixelColor(index,indey).red();
                    verde=im.pixelColor(index,indey).green();
                    azul=im.pixelColor(index,indey).blue();
                    archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"}";
                    c=c+1;
                    if(p!=0 && clockY>p){//q=16/AlturaInicial


                            clockY-=p;
                        //im.copy(index,indey,AnchoInicial,AlturaInicial);
                            //indey=p;
                            //index=p;
                            p--;



                    }
                     if(n!=0 && clockX>n ){//m=16/AnchoInicial

                            clockX-=n;
                            n--;


                    }
                    /*else if(p!=0 && clockY>p && n!=0 && clockX>n && indey>p && index>n){

                            clockY-=p;
                            clockX-=n;
                            indey-=p;
                            index-=n;
                            p--;
                            n--;

                    }*/
                    if(c%16!=0)
                    {
                        //index-=1;
                        archivo<<",";
                    }
                }

            }
            archivo<<endl<<"},"<<endl;
        }
    }
    archivo.close();

 /*   cout<<im.width()<<endl;
    cout<<im.width()/16<<endl;
    cout<<im.height()<<endl;
    cout<<im.height()/16<<endl;


//Submuestreo
for(int indey=0;indey<im.height();indey+=im.height()/16)
{
    for(int index=0;index<im.width();index+=im.width()/16)
    {
        rojo=im.pixelColor(index,indey).red();
        verde=im.pixelColor(index,indey).green();
        azul=im.pixelColor(index,indey).blue();
        c++;
        cout <<index<<", "<<indey<<" = "<< "rojo: "<<rojo<<'\t'<<"verde: "<<verde<<'\t'<<"azul: "<<azul<<endl;
        cout<<c<<endl;
    }
}
string nombreArchivo= "../Parcial_2/Matriz.txt";
ofstream archivo;
c=0;
archivo.open(nombreArchivo.c_str(), fstream::out);
archivo<<"{"<<endl;

for(int indey=0;indey<im.height();indey+=im.height()/16)
{
    archivo<<"{"<<endl;
    for(int index=0;index<im.width();index+=im.width()/16)
    {
        rojo=im.pixelColor(index,indey).red();
        verde=im.pixelColor(index,indey).green();
        azul=im.pixelColor(index,indey).blue();
        archivo <<"{"<<rojo<<","<<verde<<","<<azul<<"}";
        c=c+1;
        if(c%16!=0)
        {
            archivo<<",";
        }

    }

    archivo<<endl<<"}"<<endl;
}
archivo.close();*/

    //ImagenRead n;
    //n.submuestreo();

 /*   string filname = "../Parcial_2/Mapas/Guyana.png";
    QImage im;

    if(filname.c_str()){

    for(int index=0;index<im.width();++index){
         //RGB[i][index]=new char[color];
        for(int indey=0;indey<im.height();++indey){
            rojo=im.pixelColor(index,indey).red();
            verde=im.pixelColor(index,indey).green();
            azul=im.pixelColor(index,indey).blue();
            //submuestreo();

            cout <<index<<", "<<indey<<" = "<< "rojo: "<<rojo<<'\t'<<"verde: "<<verde<<'\t'<<"azul: "<<azul<<endl;
            //cout<<"{ "<<rojo<<", "<<verde<<", "<<azul<<" }";
        }
    }
    }
    else cout<<"no se abrio";*/


    //***************************************************************************************************
/*int arreglo[16][16][3]=
  {
{
{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0}
},
{
{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0}
},
{
{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0}
},
{
{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0}
},
{
{255,246,0},{255,246,0},{255,246,0},{255,246,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{252,243,0},{252,243,0},{252,243,0},{252,243,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0}
},
{
{255,246,0},{255,246,0},{255,246,0},{255,246,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{252,243,0},{252,243,0},{252,243,0},{252,243,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0}
},
{
{255,246,0},{255,246,0},{255,246,0},{255,246,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{252,243,0},{252,243,0},{252,243,0},{252,243,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0}
},
{
{255,246,0},{255,246,0},{255,246,0},{255,246,0},{254,245,0},{254,245,0},{254,245,0},{254,245,0},{252,243,0},{252,243,0},{252,243,0},{252,243,0},{255,246,0},{255,246,0},{255,246,0},{255,246,0}
},
{
{48,26,228},{48,26,228},{48,26,228},{48,26,228},{24,0,254},{24,0,254},{24,0,254},{24,0,254},{23,0,243},{23,0,243},{23,0,243},{23,0,243},{24,0,255},{24,0,255},{24,0,255},{24,0,255}
},
{
{48,26,228},{48,26,228},{48,26,228},{48,26,228},{24,0,254},{24,0,254},{24,0,254},{24,0,254},{23,0,243},{23,0,243},{23,0,243},{23,0,243},{24,0,255},{24,0,255},{24,0,255},{24,0,255}
},
{
{48,26,228},{48,26,228},{48,26,228},{48,26,228},{24,0,254},{24,0,254},{24,0,254},{24,0,254},{23,0,243},{23,0,243},{23,0,243},{23,0,243},{24,0,255},{24,0,255},{24,0,255},{24,0,255}
},
{
{48,26,228},{48,26,228},{48,26,228},{48,26,228},{24,0,254},{24,0,254},{24,0,254},{24,0,254},{23,0,243},{23,0,243},{23,0,243},{23,0,243},{24,0,255},{24,0,255},{24,0,255},{24,0,255}
},
{
{251,0,1},{251,0,1},{251,0,1},{251,0,1},{238,0,16},{238,0,16},{238,0,16},{238,0,16},{249,0,3},{249,0,3},{249,0,3},{249,0,3},{252,0,0},{252,0,0},{252,0,0},{252,0,0}
},
{
{251,0,1},{251,0,1},{251,0,1},{251,0,1},{238,0,16},{238,0,16},{238,0,16},{238,0,16},{249,0,3},{249,0,3},{249,0,3},{249,0,3},{252,0,0},{252,0,0},{252,0,0},{252,0,0}
},
{
{251,0,1},{251,0,1},{251,0,1},{251,0,1},{238,0,16},{238,0,16},{238,0,16},{238,0,16},{249,0,3},{249,0,3},{249,0,3},{249,0,3},{252,0,0},{252,0,0},{252,0,0},{252,0,0}
},
{
{251,0,1},{251,0,1},{251,0,1},{251,0,1},{238,0,16},{238,0,16},{238,0,16},{238,0,16},{249,0,3},{249,0,3},{249,0,3},{249,0,3},{252,0,0},{252,0,0},{252,0,0},{252,0,0}
}
  };

for(int i=0;i<16;i++){
      for(int j=0;j<16;j++){
       cout<<"rojo: "<<arreglo[i][j][0]<<'\t';
       cout<<"verde: "<<arreglo[i][j][1]<<'\t';
       cout<<"azul: "<<arreglo[i][j][2]<<endl;;
      }
    }*/



     // ******************************************************************************************************

    return 0;
}
/*
char nuevo(***nuevo){
     char ***nuevo;  //genera matriz

     nuevo = new char**[16];
     for( i=0;i<16;i++){
         nuevo[i]= new char*[16];
         cout<<"i: "<<i<<'\t';
         for(j=0;j<16;j++){
             //cout<<"j: "<<j<<'\t';
             //int color=0;
             rojo=im.pixelColor(i,j).red();
             verde=im.pixelColor(i,j).green();
             azul=im.pixelColor(i,j).blue();
             nuevo[i][j]=new char (rojo);
             nuevo[i][j]=new char (verde);
             nuevo[i][j]=new char (azul);

             cout<<"|"<<rojo<<","<<verde<<","<<azul<<"|"<<'\t';

             //m=i+1;
             //n=j+1;
             //p=i-m;
             //q=j-n;

             //s=(1-p)*(1-q)*(1,1)+p*(1-q)*(1,3)+(1-p)*q*(3,1)+p*q*(3,3);
         }
         cout<<endl;

     }
}
*/
