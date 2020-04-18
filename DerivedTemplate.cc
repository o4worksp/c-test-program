#include <iostream>
using namespace std;

template<typename T>
class CFather
{
public:
    CFather(T x) : t(x) {}
    ~CFather() {};
    virtual void show();

protected:
    T t;
};

template<typename T>
void CFather<T>::show()
{
    cout << t << endl;
}

template<typename T, typename X>
class CSon : public CFather<T>
{
public:
    CSon(T _t, X _x) : CFather<T>(_t),x(_x) {}
    ~CSon(){}

    void show() { cout << "I am son " << this->t <<  " !" << x << endl;}
protected:
    X x;
};

int main()
{
  CFather<int> cf(12);
  cf.show();
   
  //CSon<string> cs("hello");
  //cs.show();

  CFather<int> *pf = new CSon<int, string>(13, "END!");
  pf->show();

  return 0;
}
