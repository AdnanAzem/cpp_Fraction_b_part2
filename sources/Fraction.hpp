#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

namespace ariel{

    class Fraction
    {
    private:
        int numerator;
        int denominator;
        
    public:

        // const
        Fraction();
        Fraction(int , int);
        Fraction(float);
        
        //setters
        void setNumerator(int);
        void setDenominator(int);

        //getters
        int getNumerator();
        int getDenominator();

        //helper functions
        friend bool checkFractionOverflow(const Fraction& , const Fraction& , char ); // check overflow between 2 fractions
        float set3Digits(float ); // set 3 digits after point
        friend float setFloatWith3Digits(float ); // set 3 digits after point
        void reduce(); // reduced form of fraction
        int GCD(int , int ) const; // find gcd between 2 numbers

        // Overloaded operators 
        Fraction operator+(const Fraction&) const;
        Fraction operator-(const Fraction&) const;
        Fraction operator*(const Fraction&) const;
        Fraction operator/(const Fraction&) const;

        friend Fraction operator+(const float& ,const Fraction &) ;
        friend Fraction operator-(const float& ,const Fraction &) ;
        friend Fraction operator*(const float& ,const Fraction &) ;
        friend Fraction operator/(const float& ,const Fraction &) ;

        friend Fraction operator+(const Fraction &, const float&) ;
        friend Fraction operator-(const Fraction &, const float&) ;
        friend Fraction operator*(const Fraction &, const float&) ;
        friend Fraction operator/(const Fraction &, const float&) ;
        
        bool operator==(const Fraction&) const;
        bool operator<(const Fraction&) const;
        bool operator<=(const Fraction&) const;
        bool operator>(const Fraction&) const;
        bool operator>=(const Fraction&) const;

        friend bool operator==(const Fraction &, const float&) ;
        friend bool operator<(const Fraction &, const float&) ;
        friend bool operator<=(const Fraction &, const float&) ;
        friend bool operator>(const Fraction &, const float&) ;
        friend bool operator>=(const Fraction &, const float&) ;

        friend bool operator==(const float& ,const Fraction &);
        friend bool operator<(const float& ,const Fraction &);
        friend bool operator<=(const float& ,const Fraction &);
        friend bool operator>(const float& ,const Fraction &);
        friend bool operator>=(const float& ,const Fraction &);

        Fraction& operator++(); // Prefix
        Fraction operator++( int ); // Postfix
        Fraction& operator--(); // Prefix
        Fraction operator--( int ); // Postfix

        friend ostream & operator<<(ostream&, const Fraction&);
        friend istream& operator>> (istream&, Fraction& );

    };    
    
}
