#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// void print(int s1, int s2)
// {
//     cout<<"xin chao\n";
//     cout<<"rat vui gap ban\n";
//     cout<<"s1: "<<s1<<", s2: "<<s2;
// }
// void swap(int &s1, int &s2)
// {
//     int tmp;
//     cout<<"2. swap()-truoc: s1: "<<s1<<", s2: "<<s2<<endl;

//     tmp = s1;
//     s1 = s2;
//     s2 = tmp;
//     cout<<"3. swap()-sau: s1: "<<s1<<", s2: "<<s2<<endl;
// }

int tong(int a, int b, int c=0)
{
    return a+b+c;
}

int main()
{
    int a = 10;
    int b = 20;
    int t = tong(a,b);
    cout <<"tong: "<<t;
    // cout<<"1. truoc khi swap: a: "<<a<<", b: "<<b<<endl;
    // swap(a,b);
    // cout<<"4. sau khi swap: a: "<<a<<", b: "<<b<<endl;
    // int t;
    // print(a,b);
    // cout <<"t: "<<t;6
    // int c;
    // c = a;
    // a = b;
    // b = c;
    // cout << a<<", "<<b<<endl;

    // int d = 78;
    // int e = 90;
    // c = d;
    // d = e;
    // e = c;
    // cout << d<<", "<<e;
}
