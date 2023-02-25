#include <iostream>
#include <string>
#include <locale>
#include <iomanip>
using namespace std;

struct car{
    string make;
    string model;
    int year;
    string color;

void printCar(car* c){
    cout<<endl;
    cout<<"\n Make: "<< c->make<<endl;
    cout<<"\n Model: "<< c->model<<endl;
    cout<<"\n Year: "<<c->year<<endl;
    if(c->year>=2010){
        c->color="GREEN";
    }else{
        c->color="RED";
    };
    cout<<"\n Color: "<<c->color<<endl;
    cout<<endl;
};

car* updateCar(){
    car* cPtr;
    cout<<"enter make ";
    cin>> cPtr->make;
    cout<<"enter model ";
    cin>> cPtr->model;
    cout<<"enter year ";
    cin>> cPtr->year;
    return cPtr;
}
};

int main(){
    car carcar={ "Ford", "Ranger", 2002, " ",};
    car carcar0={ "Hyundai", "Tucson", 2018, " ",};

    car* carcarPtr;
    car* carcar0Ptr;
    car* carcar1Ptr;

    carcarPtr = &carcar;
    carcar0Ptr = &carcar0;

    carcar.printCar(carcarPtr);
    carcar.printCar(carcar0Ptr);

    carcar1Ptr=carcar.updateCar();//this line allows us to change update carcar but not change the original one.
    carcar.printCar(carcar1Ptr);
    carcar.printCar(carcarPtr);

    carcarPtr=NULL;
    carcar0Ptr=NULL;
    carcar1Ptr=NULL;
    return 0;
}

