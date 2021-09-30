#include<bits/stdc++.h>

using namespace std;

class Box
{
private:
    int l;
    int br;
    int h;
public:
    Box() : l(0), br(0), h(0) {}
    Box(int a, int b, int c) : l(a), br(b), h(c) {}
    Box(const Box & b);
    int getLength() {return l;}
    int getBreadth() {return br;}
    int getHeight() {return h;}
    long CalculateVolume() {return (long long)(l) * br * h;}
    friend bool operator<(Box & b1, Box & b2);
    friend ostream & operator<<(ostream & os, const Box & b);   
};

Box::Box(const Box & b)
{
    l = b.l;
    br = b.br;
    h = b.h;
}

bool operator<(Box & b1, Box & b2)
{
    if ((b1.l < b2.l) || (b1.l == b2.l && b1.br < b2.br) || (b1.l == b2.l && b1.br == b2.br && b1.h < b2.h))
        return true;
    else
        return false;
}

ostream & operator<<(ostream & os, const Box & b)
{
    os << b.l << " " << b.br << " " << b.h;
    return os;
}



