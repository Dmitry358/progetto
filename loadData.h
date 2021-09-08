#include "Container.h"
#include "DeepPtr.h"
#include "hierarchy/Vehicle.h"
#include <string>
using std::string;

/*    Moto(string _make,
         string _model,
         unsigned int _registrationYear,
         unsigned int _mileage,
         double _basePrice,
         unsigned short int _fuelType,
         unsigned short int _transmissionType,
         unsigned int _power,
         unsigned int _displacement,

         bool _sidecar,
         bool _engineProtection);

    Car(string _make,
        string _model,
        unsigned int _registrationYear,
        unsigned int _mileage,
        double _basePrice,
        unsigned short int _fuelType,
        unsigned short int _transmissionType,
        unsigned int _power,
        unsigned int _displacement,

        bool _conditioner,
        unsigned int _passengerNum,
        bool _pintleHook,
        bool _sensors,

        bool _stWagon,
        bool _sunroof,
        bool _luggagerack);

 Camper(string _make,
        string _model,
        unsigned int _registrationYear,
        unsigned int _mileage,
        double _basePrice,
        unsigned short int _fuelType,
        unsigned short int _transmissionType,
        unsigned int _power,
        unsigned int _displacement,

        bool _conditioner,
        unsigned int _passengerNum,
        bool _pintleHook,
        bool _sensors,

        unsigned int _sleepingPlaces,
        bool _toilet,
        bool _kitchen);

  Truck(string _make,                         1-MAKE
        string _model,                        2-MODEL
        unsigned int _registrationYear,       3-REGISTRATION_YEAR
        unsigned int _mileage,                4-MILEAGE
        double _basePrice,                    5-BASE_PRICE
        unsigned short int _fuelType,         6-FUEL_TYPE
        unsigned short int _transmissionType, 7-TRANSMISSION_TYPE
        unsigned int _power,                  8-POWER
        unsigned int _displacement,           9-DISPLACEMENT

        unsigned int _maxLoadability,         10-MAXLOADABILITY
        bool _sleepingPlace,                  11-SLEEPINGPLACE
        bool _dangerousGood);                 12-DANGEROUS_GOOD
*/

void loadVehicles(Model& model){

int i=1995;

i=1995;
for(; i<1996; ++i){ //MOTO
    string str("MOTO - "); str.append(std::to_string(i));

    Vehicle* moto=new Moto(str, //MAKE
                           "E-0", //MODEL
                           i, //REGISTRATION YEAR
                           47000+(i*101.5), //MILEAGE
                           5000+(i*3), //BASEPRICE
                           0, //FUEL TYPE (0-3)
                           1, //TRANSMISSION (0-1)
                           40, //POWER
                           151, //DISPLACEMENT

                           false, //SIDECAR
                           false //ENGINEPROTECTION
                           );

    model.push_back(moto);
}


i=1995;
for(; i<1999; ++i){ //CAR
    string str("CAR"); str.append(std::to_string(i));
    Vehicle* moto=new Car(str, "x3" , 2000+i, 50000+(i*100), 15000+(i*10), 0, 0, 5, 15,
                          false, 2, true, true, true, false, true);
    model.push_back(moto);
}


i=1995;
for(; i<1997; ++i){ //MOTO
    string str("MOTO - "); str.append(std::to_string(i-1994));

    Vehicle* moto=new Moto(str, //MAKE
                           "E-0", //MODEL
                           i, //REGISTRATION YEAR
                           47000+(i*101.5), //MILEAGE
                           5000+(i*3), //BASEPRICE
                           0, //FUEL TYPE (0-3)
                           0, //TRANSMISSION (0-1)
                           40, //POWER
                           151, //DISPLACEMENT

                           false, //SIDECAR
                           false //ENGINEPROTECTION
                           );

    model.push_back(moto);
}


i=1995;
for(; i<1999; ++i){ //CAMPER
    string str("CAMPER"); str.append(std::to_string(i));
    Vehicle* camper=new Camper(str,
                              "x3" ,
                              2000+i,
                              50000+(i*100),
                              15000+(i*10),
                              0,
                              0,
                              5,
                              15,

                              false,
                              2,
                              true,
                              true,

                              4,
                              false,
                              true);
    model.push_back(camper);
}

i=1995;
for(; i<1997; ++i){ //TRUCK
    string str("TRUCK - "); str.append(std::to_string(i-1994));

    Vehicle* truck=new Truck(str, //MAKE
                             "E-0", //MODEL
                             i, //REGISTRATION YEAR
                             47000+(i*101.5), //MILEAGE
                             5000+(i*3), //BASEPRICE
                             0 , //FUEL TYPE (0-3)
                             0, //TRANSMISSION (0-1)
                             40, //POWER
                             151, //DISPLACEMENT
                             10,//MAXLOADABILITY

                             false, //SIDECAR
                             false //ENGINEPROTECTION
                           );

    model.push_back(truck);
}



//i=1995;
//for(; i<1999; ++i){ //CAR
//    string str("CAR"); str.append(to_string(i));
//    Vehicle* moto=new Car(str, "x3" , 2000+i, 50000+(i*100), 15000+(i*10), 0, 0, 5, 15, "Bella!", "",
//                          false, 2, true, true, true, false, true);
//    model.push_back(moto);
//}

//i=1995;
//for(; i<1998; ++i){ //MOTO
//    string str("MOTO"); str.append(to_string(i));
//    Vehicle* moto=new Moto(str, "x3" , 1980+i, 47000+(i*1000), 15000+(i*100), 0, 0, 5, 5, "Bella!", "",
//                           false, false);
//    model.push_back(moto);
//}

//i=1995;
//for(; i<2005; ++i){ //MOTO
//    string str("MOTO - "); str.append(to_string(i));

//    Vehicle* moto=new Moto(str, //MAKE
//                           "E-0", //MODEL
//                           i, //REGISTRATION YEAR
//                           47000+(i*2), //MILEAGE
//                           5000+(i*3), //BASEPRICE
//                           0, //FUEL TYPE
//                           0, //TRANSMISSION (MANUALE)
//                           5, //POWER
//                           5, //DISPLACEMENT
//                           "Bella!", //DESCRIPTION
//                           "", //PHOTO
//                           true, //SIDECAR
//                           false //ENGINEPROTECTION
//                           );

//    model.push_back(moto);
//}


//for(; i<5; ++i){ //MOTO
//    string str("MOTO"); str.append(to_string(i));
//    Vehicle* moto=new Moto(str, "x3" , 1980+i, 47000+(i*1000), 15000+(i*100), 0, 0, 5, 5, "Bella!", "",
//                           true, false);
//    model.push_back(moto);
//}

//for(; i<5; ++i){ //MOTO
//    string str("MOTO"); str.append(to_string(i));
//    Vehicle* moto=new Moto(str, "x3" , 1980+i, 47000+(i*1000), 15000+(i*100), 0, 0, 5, 5, "Bella!", "",
//                           false, true);
//    model.push_back(moto);
//}



//for(; i<30; ++i){ //MOTO
//    string str("MOTO"); str.append(to_string(i));
//    Vehicle* moto=new Moto(str, "xE" , 2000+i, 47000+(i*1000), 15000+(i*100), 3, 0, 20, 55, "Bella!", "",
//                           true, false);
//    model.push_back(moto);
//}

//for(; i<40; ++i){ //CAR
//    string str("CAR"); str.append(to_string(i));
//    Vehicle* moto=new Car(str, "x3" , 2000+i, 50000+(i*100), 15000+(i*10), 1, 0, 20, 55, "Bella!", "",
//                          false, 2, true, true, true, false, true);
//    model.push_back(moto);
//}

//for(; i<50; ++i){ //MOTO
//    string str("MOTO"); str.append(to_string(i));
//    Vehicle* moto=new Moto(str, "xE" , 2000+i, 47000+(i*1000), 15000+(i*100), 3, 1, 20, 55, "Bella!", "",
//                           true, false);
//    model.push_back(moto);
//}
} //END
