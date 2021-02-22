TASK NO 1
-----------

/*#include<iostream>
#include<string>
using namespace std;
class car
{
    private:
    string car_type;
    int seating_capacity;
    int price;
    int miles_per_gallon;
    string color;
    public:
    void setter();
    void getter();
};
void car::setter()
{
    cout <<"enter the car type" << endl;
    cin >> car_type;
    cout <<"enter the seating capacity in the car" << endl;
    cin >> seating_capacity;
    cout <<"enter the price of the car" << endl;
    cin >> price;
    cout <<"enter the miles per gallon of the car" << endl;
    cin >> miles_per_gallon;
    cout <<"Enter the color of the car" << endl;
    cin >> color;
}
void car::getter()
{
    cout <<"the car type is" <<"\t" <<  car_type << endl;
    cout <<"the seating capacity of the car" <<"\t" <<  seating_capacity << endl;
    cout <<"the price of the car" <<"\t" <<  price << endl;
    cout << "the miles per gallon of the car" << "\t" << miles_per_gallon << endl;
    cout << "the color of the car" << "\t" << color << endl;
}
int main()
{
    car obj;
    obj.setter();
    obj.getter();
    return 0;
}*/

TASK NO # 2
-----------

#include<iostream>
#include<string>
using namespace std;
class autoparts
{
    private:
    int partnumber[3];
    int idnumber[3];
    int price[3];
        string type[5];
        string color[5];
        int price_car[5];
        int seating_capacity[5];
        int miles_per_gallon[5];
    public:
    void set_value();
    void get_value();
};
void autoparts::set_value()
{
    cout <<"enter the partnumber of the car" << endl;
    cin >> partnumber[0] >> partnumber[1] >> partnumber[2];
    cout <<"enter the idnumber of the car" << endl;
    cin >> idnumber[0] >> idnumber[1] >> idnumber[2] ;
    cout <<"enter the price of the parts" << endl;
    cin >> price[0] >> price[1] >> price[2];
    cout <<"--------- some car information -------------" << endl;
    cout <<"enter the type of the car" << endl;
    cin >> type[0] >> type[1] >> type[2] >> type[3] >> type[4] ;
    cout << "enter the color of the car" << endl;
    cin >> color[0] >> color[1] >> color[2] >> color[3] >> color[4] ;
    cout <<"enter the price of the car" << endl;
    cin >> price_car[0] >> price_car[1] >> price_car[2] >> price_car[3] >> price_car[4];
    cout <<"Enter the seating_capacity of the car" << endl;
    cin >> seating_capacity[0] >> seating_capacity[1] >> seating_capacity[2] >> seating_capacity[3] >> seating_capacity[4];
    cout <<"Enter the miles per gallon of the car" << endl;
    cin >> miles_per_gallon[0] >> miles_per_gallon[1] >> miles_per_gallon[2] >> miles_per_gallon[3] >> miles_per_gallon[4]; 
}
void autoparts::get_value()
{
    cout << "the partnumber is" << "\t" << partnumber[0] << "\t" << partnumber[1] << "\t" << partnumber[2] << endl;
    cout << "the idnumber of the car is" << "\t"  << idnumber[0] << "\t" << idnumber[1] << "\t" << idnumber[2] << endl;
    cout << "the price of the car is "  << "\t" << price[0] << "\t" << price[1] << "\t" << price[2] << endl;
    cout <<"the types of the car is " << "\t" << type[0] << "\t" << type[1] << "\t" << type[2] << "\t" << type[3] << "\t" << type[4] << endl;
    cout << "the colors of the car is" << "\t" << color[0] << "\t" << color[1] << "\t" << color[2] << "\t" << color[3] << "\t" << color[4] << endl;
    cout <<"the prices of the car is " << "\t" << price_car[0] << "\t" << price_car[1] << "\t" << price_car[2] <<"\t" << price_car[3] << "\t" << price_car[4] << endl;
    cout << "the seating capacity of the car" << "\t" << seating_capacity[0] << "\t" << seating_capacity[1] << "\t" << seating_capacity[2] << "\t" << seating_capacity[3] << "\t" << seating_capacity[4] << endl;
    cout << "the prices of the car" <<"\t" << miles_per_gallon[0] << "\t" << miles_per_gallon[1] <<"\t" << miles_per_gallon[2] << "\t" << miles_per_gallon[3] << "\t" << miles_per_gallon[4] << endl;
    int sum;
    sum = price[0]+price[1]+price[2];
    cout <<"the total price of all the parts are" << "\t" << sum << endl;
    float average;
    average = sum/3;
    cout <<"the average price of each car part"  <<"\t " << average << endl;
    int sum_of_the_cars;
    sum_of_the_cars=price_car[0]+price_car[1]+price_car[2]+price_car[3]+price_car[4];
    cout <<"the sum of the cars are" << sum_of_the_cars << endl;
    float avg;
    avg=sum_of_the_cars/5;
    cout <<"the average of the car is" << avg << endl;
}
int main()
{

    autoparts obj;
    obj.set_value();
    obj.get_value();
    return 0;
}


