#include <iostream>
#include <string>
using namespace std;
class personType
{
    private:
string firstName; 
string lastName; 
public:
void print() const;
void setName(string first, string last);
string getFirstName() const;
string getLastName() const;
personType(string first = "jawad", string last = "khan");

};
void personType::print() const
{
cout <<  firstName << endl;
cout <<  lastName  << endl;
}
void personType::setName(string first, string last)
{
firstName = first;
lastName = last;
}
string personType::getFirstName() const
{
return firstName;
}
string personType::getLastName() const
{
return lastName;
}

//constructor
personType::personType(string first, string last)
{
firstName = first;
lastName = last;
}
class doctortype:public personType
{
    private:
    string doc_name;
    string doc_spe;
    int doc_age;
    public:
    void set_data();
    void get_data();
};
void doctortype::set_data()
{
    cout <<"enter the doctor name" << endl;
    cin>> doc_name;
    cout <<"enter the doctor speciallity" << endl;
    cin >> doc_spe;
    cout <<"enter the doctor age" << endl;
    cin >> doc_age;
}
void doctortype::get_data()
{
    cout <<"the doctor name is \t:" << doc_name << endl;
    cout <<"the doctor speciallity \t:" << doc_spe << endl;
    cout <<"the doctor age \t:" << doc_age << endl; 
}

class billtype:public doctortype
{
    private:
    int patient_id;
    int pc_for_medicine;
    int doctor_fee;
    int room_charges;
    public:
    void set();
    void get();
    billtype();
};
billtype::billtype()
{
    patient_id=0;
    pc_for_medicine=0;
    doctor_fee=0;
    room_charges=0;
}
void billtype::set()
{
    cout <<"enter the patient id" << endl;
    cin >> patient_id;
    cout <<"enter the pharmacy charges for medicine" << endl;
    cin >> pc_for_medicine;
    cout <<"enter the doctor fee" << endl;
    cin >> doctor_fee;
    cout << "enter the room charges" << endl;
    cin >> room_charges;
}
void billtype::get()
{
    cout <<"the patient id \t:" << patient_id << endl;
    cout <<"the pharmacy charges for medicine \t:" << pc_for_medicine << endl;
    cout <<"the docotor fee \t:" << doctor_fee << endl;
    cout  <<"the room charges \t:" << room_charges << endl;
}



class patienttype:public personType
{
    private:
    int patient_id;
    int age,date_of_birth,a,b;
    string phy_name;
    int admit_date,c,d,discharge_date,e,f;
    public:
    patienttype();
    void set_value();
    void get_value();
};
patienttype::patienttype()
{
    patient_id=0;
    age=0;
    a,b,c,d,e,f=0;
    date_of_birth=0;
    phy_name=" ";
    admit_date=0;
    discharge_date=0;
}
void patienttype::set_value()
{
    cout <<"enter the patient ID" <<endl;
    cin >> patient_id;
    cout <<"enter the age of the patient" << endl;
    cin >> age;
    cout <<"enter the date of the birth of the patient" << endl;
    cin >> date_of_birth >> a >> b ;
    cout <<"Enter the attending physician’s name," << endl;
    cin >> phy_name;
    cout <<"enter the admit date of the patient" << endl;
    cin >> admit_date >> c >> d;
    cout <<"Enter the discharge date of the patient " << endl;
    cin >> discharge_date >> e >> f;
}
void patienttype::get_value()
{
    cout <<"patient ID\t:" << patient_id << endl;
    cout <<"age of the patient \t:" << age << endl;
    cout <<"date of the birth of the patient \t:" << date_of_birth << " " << a << " " << b << endl;
    cout  <<"physicians name \t:" << phy_name << endl;
    cout <<"the admit date of the patient \t:" <<admit_date << " " << c << " " << d << endl;
    cout <<"the discharge date of the patient \t:" << discharge_date << e << " " << f << endl;
}

int main()
{
    personType a;
    doctortype obj;
    billtype obj1;
    patienttype obj2;
    a.getFirstName();
    a.getLastName();
    a.print();
    obj.set_data();
    obj.get_data();
    obj1.set();
    obj1.get();
    obj2.set_value();
    obj2.get_value();
    }
    return 0;   
}*/

