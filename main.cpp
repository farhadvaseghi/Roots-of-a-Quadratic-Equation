
#include <iostream>
#include <cmath>

using namespace std;
void find_roots_quadratic(float, float, float);

int main()
{   float a,b,c;
    cout<<"Pleas Enter the coefficients of your quadratic equation in order"<<endl;
    cin>>a>>b>>c;
    find_roots_quadratic(a, b, c);
    return 0;
}

void find_roots_quadratic(float a, float b, float c)
{   
    float discriminant, x1, x2, realPart, imaginaryPart;
    discriminant = pow(b,2) - 4*a*c;
    if(discriminant>0)
    {
        x1 = (-b+sqrt(discriminant))/(2*a);
        x2 = (-b-sqrt(discriminant))/(2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if(discriminant==0)
    {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }
    else
    {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

}

// #include<iostream>

// using namespace std;
// int main()
// {   
//     // int value1=10; // occupy 4 bytes _ by defualt in signed
//     // int value2=-300; // occupy 4 bytes_ by defualt in signed

//     // signed int value1=10; 
//     // signed int value2=-300;

//     // unsigned int value1=10; 
//     // unsigned int value2=300;

//     // cout<<"First Number: "<<value1<<endl<<"Second Number: "<<value2<<endl;
   
   
//    short int value1=10; // occupy 2 bytes
//    long int value2=1230; // occupy 4 bytes
//    long long int value3=88; // occupy 8 bytes

//    cout<<"First Number: "<<value1<<endl<<"size : "<<sizeof(value1)<<endl;
//    cout<<"First Number: "<<value2<<endl<<"size : "<<sizeof(value2)<<endl;
//    cout<<"First Number: "<<value3<<endl<<"size : "<<sizeof(value3)<<endl;
//    //Tip: regardless of signed or unsigned int will occupy 4 bytes of memory
//    // but if we use short before that, it will occupy 2 bytes of memory
//     return 0;
// }

