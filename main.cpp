#include<bits/stdc++.h>
using namespace std;
class OverLoad {
private:
    int number1, number2;
public:

// test function
    void print()
    {
        cout<<number1 <<" "<<number2 <<endl;
    }


//Default Constructor

    OverLoad();

// Parametrized constructor

    OverLoad(int number1 ,int number2);

// Arithmetic Operators

// " + " function

    OverLoad operator + (OverLoad ob ) ;

// " - " function

    OverLoad  operator - (OverLoad ob);

// " / " function

    OverLoad operator / (OverLoad ob);

// " * " function

    OverLoad operator * ( OverLoad ob);

// " % " function

    OverLoad operator % ( OverLoad ob );

    // bitwise operator

// " & " operator

    OverLoad operator & (OverLoad ob );
// " | " operator

    OverLoad operator | (OverLoad ob);

//" ^ " operator
    OverLoad operator ^ ( OverLoad ob);

// " ~ " operator

    OverLoad operator ~ ();

// " >> " operator

    OverLoad operator >> (OverLoad ob);

// " << " operator

    OverLoad operator << (OverLoad ob);

};
//Default Constructor

    OverLoad ::OverLoad():number1(0) , number2(0){};

//Parametrized constructor

 OverLoad::OverLoad(int number1 ,int number2)
{
    this -> number1 = number1 ;
    this -> number2 = number2 ;
}

// Arithmetic Operators

    // " + " function

OverLoad OverLoad::operator+(OverLoad ob) {
        OverLoad temp(0,0);
        temp.number1= number1 + ob.number1 ;
        temp.number2= number2 + ob.number2 ;
        return temp;
}

    // " - " function

OverLoad OverLoad:: operator - (OverLoad ob)
{
    OverLoad temp(0 , 0);
    temp.number1 = number1 - ob. number1;
    temp.number2 = number2 - ob. number2;
    return temp;
}

    // " / " function

OverLoad OverLoad ::operator / (OverLoad ob)
{
    OverLoad temp;
    temp.number1 = number1 / ob.number1 ;
    temp.number2 = number2 / ob.number2 ;
    return temp;
}

    // " * " function

OverLoad OverLoad::operator * (OverLoad ob)
{
        OverLoad temp;
        temp.number1 = number1 * ob.number1;
        temp.number2 = number2 * ob.number2;
        return temp;
}

    // " % " function

OverLoad OverLoad ::operator % (OverLoad ob)
{
        OverLoad temp;
        temp.number1 = number1 % ob.number1 ;
        temp.number2 = number2 % ob.number2 ;
        return temp;
}

// bitwise operator

    // " & " operator

OverLoad OverLoad ::operator & (OverLoad ob)
{
     OverLoad temp ;
     temp.number1 = number1 & ob.number1;
     temp.number2 = number2 & ob .number2 ;
     return temp;
}

    // " | " operator

OverLoad OverLoad ::operator | (OverLoad ob)
{
     OverLoad temp ;
     temp .number2 = number2 | ob .number2;
     temp .number1 = number1 | ob.number1;
     return temp;
}

    // " ^ " operator

OverLoad OverLoad ::operator ^ (OverLoad ob)
{
    OverLoad temp ;
    temp .number1 = number1 ^ ob. number1;
    temp. number2 = number2 ^ ob. number2;
    return temp;
}

    // " ~ " operator

OverLoad OverLoad ::operator ~ ()
{
     OverLoad temp;
     temp . number1 = ~number1;
     temp .number2 = ~ number2 ;
     return temp ;
}

    // " >> " operator
OverLoad OverLoad::operator >> (OverLoad ob)
{
     OverLoad temp;
     temp . number1 = number1 >> ob.number1 ;
     temp . number2 = number2 >> ob .number2 ;
     return temp;
}

     // " << " operator

OverLoad OverLoad::operator << (OverLoad ob)
     {
         OverLoad temp;
         temp . number1 = number1 << ob.number1 ;
         temp . number2 = number2 << ob .number2 ;
         return temp;
     }

int main()
{
    OverLoad ob1(2, 4) , ob2 ( 3 , 5) , ob3;
    ob3 = ob1 << ob2;
    ob3 .print();


}