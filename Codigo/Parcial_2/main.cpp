#include <iostream>
#include "imagenread.h"
#include "fstream"
using namespace std;

int main()
{

    int c=0,p,q,a,l,m,n,s,t;
    unsigned long long rojo,verde,azul;
    int AlturaInicial,AnchoInicial;
    string filname = "../Parcial_2/Mapas/Colombia4x4.png"; //cargar la imagen
                    //retrocede/ingresa a la carpeta/nombre de la imagen o /nombre de la carp. imagen/nom. imagen
    QImage im(filname.c_str());


    AlturaInicial=im.height();
    AnchoInicial=im.width();
     p=16/AlturaInicial;
     q=16/AnchoInicial;
     m=16%AlturaInicial;
     n=16%AnchoInicial;
     s=AlturaInicial*p+m;
     t=AnchoInicial*q+n;
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





   /* for(int indey=0;indey<AlturaInicial;indey+=1)
    {
        for(int index=0;index<AnchoInicial;index+=1)
        {
            for(int clock=0;clock<s;clock+=1)
            {
            rojo=im.pixelColor(index,indey).red();
            verde=im.pixelColor(index,indey).green();
            azul=im.pixelColor(index,indey).blue();
            c++;
            cout <<index<<", "<<indey<<" = "<< "rojo: "<<rojo<<'\t'<<"verde: "<<verde<<'\t'<<"azul: "<<azul<<endl;
            }
            //cout<<c<<endl;
        }
    }*/
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
                for(int clockX=0;clockX<t;clockX+=1)
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

    return 0;
}
