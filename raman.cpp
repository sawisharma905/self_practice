//function overloading
#include<iostream>
using namespace std;


//functions
int add(int a , int b)
{
    int m;
    m=a+b;
    return m;
}

float add(float c , float d)
{
    float n;
    n=c+d;
    return n;
}

double add(double e , double f)
{
    double o;
    o=e+f;
    return o;
}

char add(char g , char h)
{
    char p;
    p=g+h;
    return p;
}
int main()
{
    int q;
    int a, b, w;
    float c,d,x;
    double e,f,y;
    char g,h,z;

     cout<<"choose optionP:\n";
     cout<<"1=integer\n2=float\n3=double\n4=char\n";
     cin>>q;

     switch(q)
{

     case 1: cout<<"enter two integer values: \n";
                  cin>>a>>b;
                    w=add(a,b);
                cout<<"\nsum of integer values is: "<<w<<endl;break;

     case 2: cout<<"enter two float values: \n";
               cin>>c>>d;
               x=add(c,d);
               cout<<"\nsum of float values is: "<<x<<endl;break;

     case 3: cout<<"enter two double values: \n";
                 cin>>e>>f;
                 y=add(e,f);
                cout<<"\nsum of double values is: "<<y<<endl;break;

     case 4: cout<<"enter two char values: \n";
                 cin>>g>>h;
                 z=add(g,h);
                cout<<"\nsum of char values is: "<<z<<endl;break;

      default:cout<<"maa wali harkatein naiiiiii!!!";
}
     return 0;

}
