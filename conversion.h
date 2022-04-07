#include <math.h>
double kiloToMeter(double l){
    return l * 1000;
}
double centiToMeter(double l){
    return l * 0.01;
}
double miliToMeter(double l){
    return l * 0.001;
}
double microToMeter(double l){
    return l * 0.000001;
}
double nanoToMeter(double l){
    return l * pow(1, -9);
}
double mileToMeter(double l){
    return l * 1609.34;
}
double yardToMeter(double l){
    return l * 0.9144;
}
double footToMeter(double l){
    return l * 0.3048;
}
double inchToMeter(double l){
    return l * 0.0254;
}
double nMileToMeter(double l){
    return l * 1852;
}
double meterToMeter(double l){
    return l;
}
double meterToKilo(double l){
    return l * 0.001;
}
double meterToCenti(double l){
    return l * 100;
}
double meterTomili(double l){
    return l * 1000;
}
double meterTomicro(double l){
    return l * pow(10,6);
}
double meterToNano(double l){
    return l * pow(10, 9);
}
double meterToMile(double l){
    return l * 0.000621371;
}
double meterToYard(double l){
    return l * 1.09361;
}
double meterToFoot(double l){
    return l * 3.28084;
}
double meterToInce(double l){
    return l * 39.3701;
}
double meterToNMile(double l){
    return l * 0.000539957;
}

double tonToGram(double w){
    return w*pow(10, 6);
}
double kiloToGram(double w){
    return w * 1000;
}
double miliToGram(double w){
    return w * 0.001;
}
double microToGram(double w){
    return w * pow(10, -6);
}
double USTonToGram(double w){
    return w * 907185;
}
double stoneToGram(double w){
    return w * 6350.29;
}
double poundToGram(double w){
    return w * 453.592;
}
double ounceToGram(double w){
    return w * 28.3495;
}
double gramToGram(double w){
    return w;
}
double gramToTon(double w){
    return w * pow(10, -6);
}
double gramToKilo(double w){
    return w * 0.001;
}
double gramToMili(double w){
    return w * 1000;
}
double gramToMicro(double w){
    return w * pow(10, 6);
}
double gramToUSTon(double w){
    return w / 907185;
}
double gramToStone(double w){
    return w * 0.000157473;
}
double gramToPound(double w){
    return w * 0.00220462;
}
double gramToOunce(double w){
    return w * 0.035274;
}

double BarToPascal(double t){
    return t * 100000;
}
double poundToPascal(double t){
    return t * 6894.76;
}
double StdAtmToPascal(double t){
    return t * 101325;
}
double TorrToPascal(double t){
    return t * 133.322;
}
double pascalToPascal(double t){
    return t;
}
double PascalToBar(double t){
    return t * pow(10, -5);
}
double PascalToPound(double t){
    return t * 0.000145038;
}
double PascalToStdAtm(double t){
    return t / 101325;
}
double PascalToTorr(double t){
    return t * 0.00750062;
}

double mphToMmph(double s){
    return s / 2.237;
}
double fphToMmph(double s){
    return s * 0.3048;
}
double kmphToMmph(double s){
    return s / 3.6;
}
double knotToMmph(double s){
    return s / 1.944;
}
double mmphToMmph(double s){
    return s;
}
double mmphToMph(double s){
    return s * 2.237;
}
double mmphToFph(double s){
    return s * 3.28084;
}
double mmphToKmph(double s){
    return s * 3.6;
}
double mmphToKnot(double s){
    return s * 1.94384;
}

double CelToKel(double t){
    return (t+273.15);
}
double fahToKel(double t){
    return (t-32)*5/9+273.15;
}
double kelToKel(double t){
    return t;
}
double KelToCel(double t){
    return (t-273.15);
}
double KelToFah(double t){
    return (t-273.15)*9/5+32;
}

double kiloToHertz(double f){
    return f * 1000;
}
double megaToHertz(double f){
    return f * pow(10, 6);
}
double gigaToHertz(double f){
    return f * pow(10, 9);
}
double hertzToHertz(double f){
    return f;
}
double HertzTokilo(double f){
    return f / 1000;
}
double HertzToMega(double f){
    return f / pow(10, 6);
}
double HertzToGiga(double f){
    return f / pow(10, 9);
}

double nanoToSeconds(double t){
    return t * pow(10, -9);
}
double microToSeconds(double t){
    return t * pow(10, -6);
}
double miliToSeconds(double t){
    return t * 0.001;
}
double minToSeconds(double t){
    return t * 60;
}
double hourToSeconds(double t){
    return t * 3600;
}
double dayToSeconds(double t){
    return t * 86400;
}
double weekToSeconds(double t){
    return t * 604800;
}
double monthToSeconds(double t){
    return t * 2628000;
}
double yearToSeconds(double t){
    return t * 31535965.4396976;
}
double decadeToSeconds(double t){
    return t * 3.154*pow(10, 8);
}
double centuryToSeconds(double t){
    return t * 3.154*pow(10, 9);
}
double SecondsToSeconds(double t){
    return t ;
}
double secondsToNano(double t){
    return t * pow(10, 9);
}
double secondsToMicro(double t){
    return t * pow(10, 6);
}
double secondsToMili(double t){
    return t * 1000;
}
double secondsToMinunte(double t){
    return t / 60;
}
double secondsToHour(double t){
    return t / 3600;
}
double secondsToDay(double t){
    return t / 86400;
}
double secondsToWeek(double t){
    return t / 604800;
}
double secondsToMonth(double t){
    return t / 2618000;
}
double secondsToYear(double t){
    return t / 3.171*pow(10, -8);
}
double secondsToDecade(double t){
    return t / 3.154*pow(10, 8);
}
double secondsToCentury(double t){
    return t / 3.154*pow(10, 9);
}

double sqKiloToSQMeter(double a){
    return a * pow(10, 6);
}
double sqMileToSQMeter(double a){
    return a * 2.59*pow(10, 6);
}
double sqYardToSQMeter(double a){
    return a * 0.836127;
}
double sqfootToSQMeter(double a){
    return a / 10.764;
}
double sqInchToSQMeter(double a){
    return a / 1550;
}
double HectareToSQMeter(double a){
    return a * 10000;
}
double AcreToSQMeter(double a){
    return a * 4046.86;
}
double sqMeterToSQMeter(double a){
    return a;
}
double sqMeterToSQKilo(double a){
    return a / pow(10, 6);
}
double sqMeterToSQMile(double a){
    return a / 3.861 * pow(10, -7);
}
double sqMeterToSQYard(double a){
    return a * 1.196;
}
double sqMeterToSQFoot(double a){
    return a * 10.764;
}
double sqMeterToSQInch(double a){
    return a * 1550;
}
double sqMeterToHectare(double a){
    return a * pow(10, -4);
}
double sqMeterToAcre(double a){
    return a / 4046.86;
}

double kiloToJoule(double a){
    return a * 1000;
}
double gramCalToJoule(double a){
    return a * 4.184;
}
double kiloCalToJoule(double a){
    return a * 4184;
}
double wattToJoule(double a){
    return a * 3600;
}
double kiloWattToJoule(double a){
    return a * 3.6 * pow(10, 6);
}
double electronvoltToJoule(double a){
    return a / 6.242 * pow(10, -19);
}
double BriThermalToJoule(double a){
    return a * 1055.06;
}
double USThermalToJoule(double a){
    return a * 1.055 * pow(10, 8);
}
double footPoundToJoule(double a){
    return a * 1.35582;
}
double jouleToJoule(double a){
    return a;
}
double jouleTokilo(double a){
    return a * 0.001;
}
double jouleToGramCal(double a){
    return a / 4.184;
}
double jouleToKiloCal(double a){
    return a / 4184;
}
double jouleToWatt(double a){
    return a / 3600;
}
double jouleToKiloWatt(double a){
    return a / 3.6 * pow(10, 6);
}
double jouleToElectronvolt(double a){
    return a * 6.242 * pow(10, 18);
}
double jouleToBriThermal(double a){
    return a / 1055;
}
double jouleToUSThermal(double a){
    return a / 1.055 * pow(10, 8);
}
double jouleToFootPound(double a){
    return a / 1.35582;
}

double mileToKmpL(double a){
    return a / 2.352;
}
double impMileToKmpL(double a){
    return a / 2.825;
}
double literToKmpL(double a){
    return a * 100;
}
double kmpLToKmpL(double a){
    return a;
}
double kmpLToMile(double a){
    return a * 2.352;
}
double kmpLToImpMile(double a){
    return a * 2.825;
}
double kmpLToLiter(double a){
    return a * 100;
}
