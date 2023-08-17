#include <iostream>
using namespace std;

long long fact(int n)
{
    long long pro=1;
    for(int i=1;i<=n;i++)
    {
        pro=pro*i;
    }
    return pro;
}

long double pow(double inp, double n)
{
    if(n==0)
    {
        return 1.0;
    }
    else
    {
        long double pro=1;
        for(int i=1;i<=n;i++)
        {
            pro=pro*inp;
        }
        return pro;
    }

}

long double sin(double in)
{
    long double sum=0; int c=1;

    for(int i=1;i<=25;i+=2)
    {
        if(c%2==1)
            sum=sum+(pow(in, i)/fact(i));
        else
            sum=sum-(pow(in, i)/fact(i));
        c++;
    }

    return sum;
}

long double cos(double in)
{
    double sum=0; int c=0;

    for(int i=0;i<=25;i+=2)
    {
        if(c%2==0)
            sum=sum+(pow(in, i)/fact(i));
        else
            sum=sum-(pow(in, i)/fact(i));
        c++;
    }

    return sum;
}

int main()
{
    int inp;
    cout<<"Enter 1 for addition, 2 for substraction, 3 for multiplication, 4 for division, 5 for sine, 6 for cosine, 7 for tangent, 8 for exponent:  ";
    cin>>inp;

    double a,b;

    switch(inp)
    {
        case 1:
        cout<<"Enter a and b: ";
        cin>>a>>b;
        cout<<"Sum is: "<<a+b;
        break;

        case 2:
        cout<<"Enter a and b (to find a-b): ";
        cin>>a>>b;
        cout<<"a-b is: "<<a-b;
        break;

        case 3:
        cout<<"Enter a and b: ";
        cin>>a>>b;
        cout<<"a*b="<<a*b;
        break;

        case 4:
        cout<<"Enter a and b to find a/b: ";
        cin>>a>>b;
        cout<<"a/b="<<a/b;
        break;

        case 5:
        cout<<"Enter angle in radians: ";
        cin>>a;
        cout<<"Sine is: "<<sin(a);
        break;

        case 6:
        cout<<"Enter angle in radians: ";
        cin>>a;
        cout<<"Cosine is: "<<cos(a);
        break;

        case 7:
        cout<<"Enter angle in radians: ";
        cin>>a;
        cout<<"Tangent is: "<<sin(a)/cos(a);
        break;

        case 8:
        cout<<"Enter a and b for a^b: ";
        cin>>a>>b;
        cout<<"a^b="<<pow(a,b);
        break;
    }






    
    return 0;
}


