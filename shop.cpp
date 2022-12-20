#include <iostream>

using namespace std;

class AbstractPhone {
    protected:
        string ModelName;
        string Manufacturer;
        int YearRealeased; 
        int numberOfPhones;
        int price;
        
        public:
            static int Phonecount;
        
        AbstractPhone(string ModelName, string Manufacturer, int YearRealeased, int numberOfPhones, int price) {
         this-> ModelName = ModelName;
         this-> Manufacturer = Manufacturer ;
         this-> YearRealeased = YearRealeased ;
         this-> numberOfPhones = numberOfPhones;
         this-> price = price;
         Phonecount++;
        }
     
        string getModelName() {
            return ModelName;
        }
        
        void setModelName(string ModelName) {
            this->ModelName = ModelName;
        }
     
        string getManufacturer() {
            return Manufacturer = Manufacturer;
        }
        
        void setManufacturer(string Manufacturer) {
            this->Manufacturer = Manufacturer;
        }
     
        int getYearReleased() {
            return YearRealeased;
        }
        
        void setYearReleased(int YearRealeased) {
            this->YearRealeased = YearRealeased;
        }
        
        void call() {
         cout << "Abstract phone is calling..." << endl;
        }
       
       void receiveCall() {
           cout << "Abstract phone is receiving call..." << endl;
       } 
       
    //   virtual void cameraPress()=0;
       
       void connectTowifi() {
           cout << "Abstract phone connected to wifi..." << endl;
       }
       
       void getNumberOfPhones() {
           cout << "current number of phones " << numberOfPhones<<endl;
       }
       
       void sellPhone() {
           this-> numberOfPhones = numberOfPhones - 1;
           cout << "number of phones after selling " << numberOfPhones;
       }
};

int AbstractPhone::Phonecount = 0;


class OnlineShop {
    string Name;
    
    public:
        static int SoldPhoneCount;
        
        OnlineShop(string Name) {
            this->Name = Name;
        }
        
        string getName() {
            return Name;
        }
        
        void serName(string Name) {
            this->Name = Name;
        }
         
         void sellSamsung() {
            cout << "Online shop sold phone to customer" << endl;
            SoldPhoneCount++;
         }
         
         void sellPhone(AbstractPhone phone) {
             phone.sellPhone();
             SoldPhoneCount++;
         }
         
};

int OnlineShop::SoldPhoneCount = 0;

int main()
{
    OnlineShop myShop("Shop");
    AbstractPhone iPhone("Apple","IPhone 13",2013, 10, 300);
    iPhone.getNumberOfPhones();
    myShop.sellPhone(iPhone);
    return 0;
}


