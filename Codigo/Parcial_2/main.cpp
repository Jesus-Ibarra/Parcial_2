#include "imagenread.h"
#include "fstream"
using namespace std;

int main()
{

    int c=0; int altura,ancho;
    unsigned long long rojo,verde,azul;
    string filname = "../Parcial_2/Mapas/Panama.png"; //cargar la imagen
                    //retrocede/ingresa a la carpeta/nombre de la imagen o /nombre de la carp. imagen/nom. imagen
    QImage im(filname.c_str());


    cout<<im.width()<<endl;
    cout<<im.width()/16<<endl;
    cout<<im.height()<<endl;
    cout<<im.height()/16<<endl;
if(im.height()%16!=0)
{

}
altura=im.height()/16;
ancho=im.width()/16;

//Submuestreo
for(int indey=0;indey<im.height();indey+=altura-1)
{
    for(int index=0;index<im.width();index+=ancho-1)
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

for(int indey=0;indey<im.height();indey+=altura-1)
{
    archivo<<"{"<<endl;
    for(int index=0;index<im.width();index+=ancho-1)
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

    archivo<<endl<<"},"<<endl;
}
archivo.close();

//ImagenRead c;
//c.submuestreo();

    return 0;
}