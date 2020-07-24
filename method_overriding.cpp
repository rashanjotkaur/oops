// Before Overriding
#include <bits/stdc++.h>
using namespace std;
class BaseClass{
    public:
        void show(){
            cout<<"Base Class"<<endl;
        }
};
class DerivedClass : public BaseClass{
    public:
        void show(){
            cout<<"Derived Class"<<endl;
        }
};
int main(){
    BaseClass *obj1;
    obj1 = new DerivedClass();
    obj1->show();
    
    BaseClass *obj2;
    obj2 = new BaseClass();
    obj2->show();
    
    DerivedClass *obj3;
    obj3 = new DerivedClass();
    obj3->show();
    return 0;
}
// Output:
// Base Class
// Base Class
// Derived Class

// After Overriding
#include <bits/stdc++.h>
using namespace std;
class BaseClass{
    public:
        virtual void show(){
            cout<<"Base Class"<<endl;
        }
};
class DerivedClass : public BaseClass{
    public:
        void show() override{
            cout<<"Derived Class"<<endl;
        }
};
int main(){
    BaseClass *obj1;
    obj1 = new DerivedClass();
    obj1->show();
    
    BaseClass *obj2;
    obj2 = new BaseClass();
    obj2->show();
    
    DerivedClass *obj3;
    obj3 = new DerivedClass();
    obj3->show();
    return 0;
}
// Output:
// Derived Class
// Base Class
// Derived Class
