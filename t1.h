#ifndef T1_H_INCLUDED
#define T1_H_INCLUDED
template <class T> void f(T);
template <class T> void f(T*);

class A{
public:
    virtual int f(){
        cout<<"A"<<endl;
    }
};
class B:public A{
public:
    int f(int i){
        cout<<"B"<<endl;
    }
};



#endif // T1_H_INCLUDED
