#include <stdio.h>
#include <stdlib.h>
#include "conversion.h"
int display(char units[][50], int len,int choice){
    int ch;
    for(int i=0; i<len; i++){
        if(choice != i){
            printf("%d\t->\t%s\n",i+1, units[i]);
        }
    }
    do{
        printf("Enter the Choice:\t");
        scanf("%d", &ch);
        if(ch>len){
            printf("Wrong option selected.!!!\n");
        }
    }while(ch>len);
    system("cls");
    return ch-1;
}

double takingInput(char strr[]){
    double inp;
    printf("Enter the value (in %s):\t", strr);
    scanf("%lf", &inp);
    system("cls");
    return inp;
}

void print_Results(double (*toSIUnit[])(double), double (*SIUnitTo[])(double), char unit[][10], char units[][50], int ch1, int ch2){
    double inp=takingInput(units[ch1]);
    double result=SIUnitTo[ch2](toSIUnit[ch1](inp));
    printf("%0.02lf %s into %s is %0.2lf %s\n", inp, units[ch1], units[ch2], result, units[ch2]);
    printf("%0.02lf %s = %0.4lf %s\n", inp, unit[ch1], result, unit[ch2]);
}

void length(){
    char units[11][50]={"Kilometer","Meter", "Centimeter", "Milimeter", "Micrometer", "Nanometer", "Miles", "Yard", "Foot", "Inch", "Nautical-Mile"};
    char unit[11][10]={"km", "m", "cm", "mm", "mcm", "nm", "mi", "yd", "ft", "in", "nmi"};
    int ch1, ch2;
    printf("Length: Convert this:\n");
    ch1=display(units, 10, -1);
    printf("Length: Convert %s into:\n", units[ch1]);
    ch2=display(units, 10, ch1);
    double (*toSIUnit[11])(double)={kiloToMeter,meterToMeter, centiToMeter, miliToMeter, microToMeter, nanoToMeter, mileToMeter, yardToMeter, footToMeter, inchToMeter, nMileToMeter};
    double (*SIUnitTo[11])(double)={meterToKilo,meterToMeter, meterToCenti, meterTomili, meterTomicro, meterToNano, meterToMile, meterToYard, meterToFoot, meterToInce, meterToNMile};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void mass(){
    char units[9][50]={"Tonne", "Kilogram","Gram", "Miligram", "Microgram", "US Tonne", "Stone", "Pound", "Ounce"};
    char unit[9][10]={"ton", "kg", "g", "mg", "mcg", "us-ton", "st", "lb", "oz"};
    int ch1, ch2;
    printf("Mass: Convert this:\n");
    ch1=display(units, 9, -1);
    printf("Mass: Convert %s into:\n", units[ch1]);
    ch2=display(units, 9, ch1);
    double (*toSIUnit[9])(double)={tonToGram, kiloToGram, gramToGram, miliToGram, microToGram, USTonToGram, stoneToGram, poundToGram, ounceToGram};
    double (*SIUnitTo[9])(double)={gramToTon, gramToKilo, gramToGram, gramToMili, gramToMicro, gramToUSTon, gramToStone, gramToPound, gramToOunce};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void pressure(){
    char units[5][50]={"Bar", "Pascal", "Pound per sq Inch", "Standard Atmospheric", "Torr"};
    char unit[5][10]={"bar", "Pa", "psi", "atm", "torr"};
    int ch1, ch2;
    printf("Pressure: Convert this:\n");
    ch1=display(units, 5, -1);
    printf("Pressure: Convert %s into:\n", units[ch1]);
    ch2=display(units, 5, ch1);
    double (*toSIUnit[5])(double)={BarToPascal, pascalToPascal, poundToPascal, StdAtmToPascal, TorrToPascal};
    double (*SIUnitTo[5])(double)={PascalToBar, pascalToPascal, PascalToPound, PascalToStdAtm, PascalToTorr};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void speed(){
    char units[5][50]={"Miles per Hour", "Foot per hour", "Meter per hour", "Kilometer per hour", "Knot"};
    char unit[5][10]={"mph", "fph", "m/h", "kmph", "kt"};
    int ch1, ch2;
    printf("Speed: Convert this:\n");
    ch1=display(units, 5, -1);
    printf("Speed: Convert %s into:\n", units[ch1]);
    ch2=display(units, 5, ch1);
    double (*toSIUnit[5])(double)={mphToMmph, fphToMmph, mphToMmph, kmphToMmph, knotToMmph};
    double (*SIUnitTo[5])(double)={mmphToMph, mmphToFph, mmphToMmph, mmphToKmph, mmphToKnot};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void frequency(){
    char units[4][50]={"Hertz", "KiloHertz", "MegaHertz", "GigaHertz"};
    char unit[4][10]={"Hz", "kHz", "mHz", "gHz"};
    int ch1, ch2;
    printf("Frequency: Convert this:\n");
    ch1=display(units, 4, -1);
    printf("Frequency: Convert %s into:\n", units[ch1]);
    ch2=display(units, 4, ch1);
    double (*toSIUnit[4])(double)={hertzToHertz, kiloToHertz, megaToHertz, gigaToHertz};
    double (*SIUnitTo[4])(double)={hertzToHertz, HertzTokilo, HertzToMega, HertzToGiga};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void temperature(){
    char units[3][50]={"Celsius", "Fahrenheit", "Kelvin"};
    char unit[3][10]={"C", "F", "K"};
    int ch1, ch2;
    printf("Temperature: Convert this:\n");
    ch1=display(units, 3, -1);
    printf("Temperature: Convert %s into:\n", units[ch1]);
    ch2=display(units, 3, ch1);
    double (*toSIUnit[3])(double)={CelToKel, fahToKel, kelToKel};
    double (*SIUnitTo[3])(double)={KelToCel, KelToFah, kelToKel};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void time(){
    char units[12][50]={"NanoSecond", "Microsecond", "Milisecond", "Second", "Minute", "Hour", "Day", "Week", "Month", "Year", "Decade", "Century"};
    char unit[12][10]={"ns", "us", "ms", "s", "min", "h", "d", "week", "month", "a", "dec","C"};
    int ch1, ch2;
    printf("Time: Convert this:\n");
    ch1=display(units, 12, -1);
    printf("Time: Convert %s into:\n", units[ch1]);
    ch2=display(units, 12, ch1);
    double (*toSIUnit[12])(double)={nanoToSeconds, microToSeconds, miliToSeconds, SecondsToSeconds, minToSeconds, hourToSeconds, dayToSeconds, weekToSeconds, monthToSeconds, yearToSeconds, decadeToSeconds, centuryToSeconds};
    double (*SIUnitTo[12])(double)={secondsToNano, secondsToMicro, secondsToMili, SecondsToSeconds, secondsToMinunte, secondsToHour, secondsToDay, secondsToWeek, secondsToMonth, secondsToYear, secondsToDecade, secondsToCentury};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void area(){
    char units[8][50]={"Square Kilometer", "Square Meter", "Square Mile", "Square Yard", "Square Foot", "Square Inch", "Hectare", "Acre"};
    char unit[8][10]={"sq. km", "sq. m", "sq. mi", "sq. yd", "sq. ft", "sq. in", "ha", "ac"};
    int ch1, ch2;
    printf("Area: Convert this:\n");
    ch1=display(units, 8, -1);
    printf("Area: Convert %s into:\n", units[ch1]);
    ch2=display(units, 8, ch1);
    double (*toSIUnit[8])(double)={sqKiloToSQMeter, sqMeterToSQMeter, sqMileToSQMeter, sqYardToSQMeter, sqfootToSQMeter, sqInchToSQMeter, HectareToSQMeter, AcreToSQMeter};
    double (*SIUnitTo[8])(double)={sqMeterToSQKilo, sqMeterToSQMeter, sqMeterToSQMile, sqMeterToSQYard, sqMeterToSQFoot, sqMeterToSQInch, sqMeterToHectare, sqMeterToAcre};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void energy(){
    char units[10][50]={"Joule", "KiloJoule", "Gram Calorie", "KiloCalorie", "Watt Hour", "KiloWatt Hour", "Electrovolt", "British Thermal Unit", "US Therm", "Foot-Pound"};
    char unit[10][10]={"J", "kJ", "cal", "kCal", "Wh", "KWh", "eV", "Btu", "thm", "ft-lb"};
    int ch1, ch2;
    printf("Area: Convert this:\n");
    ch1=display(units, 10, -1);
    printf("Area: Convert %s into:\n", units[ch1]);
    ch2=display(units, 10, ch1);
    double (*toSIUnit[10])(double)={jouleToJoule, kiloToJoule, gramCalToJoule, kiloCalToJoule, wattToJoule, kiloWattToJoule, electronvoltToJoule, BriThermalToJoule, USThermalToJoule, footPoundToJoule};
    double (*SIUnitTo[10])(double)={jouleToJoule, jouleTokilo, jouleToGramCal, jouleToKiloCal, jouleToWatt, jouleToKiloWatt, jouleToElectronvolt, jouleToBriThermal, jouleToUSThermal, jouleToFootPound};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void fuel(){
    char units[4][50]={"Miles per gallon", "Miles per gallon (Imperial)", "Kilometer per liter", "Liter per 100 kilometers"};
    char unit[4][10]={"mpg", "mpg", "kmpl", "L/100km"};
    int ch1, ch2;
    printf("Area: Convert this:\n");
    ch1=display(units, 4, -1);
    printf("Area: Convert %s into:\n", units[ch1]);
    ch2=display(units, 4, ch1);
    double (*toSIUnit[4])(double)={mileToKmpL, impMileToKmpL, kmpLToKmpL, literToKmpL};
    double (*SIUnitTo[4])(double)={kmpLToMile, kmpLToImpMile, kmpLToKmpL, kmpLToLiter};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void save_In_File(char *name, char *review, char *email){
    FILE *fptr;
    fptr=fopen("Unit-Converter-Reviews.txt","a");
    fprintf(fptr, "Name:\t%s\n", name);
    fprintf(fptr, "Email:\t%s\n\n", email);
    fprintf(fptr, "Review:\t%s\n\n", review);
    fprintf(fptr, "Time:\t%s\n", __TIME__);
    fprintf(fptr, "Date:\t%s", __DATE__);
    fprintf(fptr, "\n-----------------------------------------------------------------------------------------\n");
    fclose(fptr);
}

int check_Mail(char *mail){
    int i, at=0, dot=0;
    while(mail[i]!='\0'){
        if(mail[i]=='@'){
            at=1;
        }
        if(mail[i]=='.'){
            dot=1;
        }
        i++;
    }
    if(at==1 && dot>0){
        return 0;
    }
    else{
        printf("Please enter a valid email address.!!!!!\n");
        return 1;
    }
}

void feedback(){
    char name[30], review[500], email[100];
    printf("Enter your Name:\t");
    char temp; // Temp char for clearing the buffer
    scanf("%c", &temp); // Clearing the Buffer
    gets(name);
    do{
        printf("Enter your Email ID (email must contain '@' and domain):\t");
        gets(email);
    }while(check_Mail(email));
    printf("Enter your Review:\t");
    gets(review);
    save_In_File(name, review, email);
    system("cls");
    printf("Name:%s\n", name);
    printf("Email: %s\n\n", email);
    printf("Review:%s\n\n", review);
    printf("Time: %s\n", __TIME__);
    printf("Date: %s\n\n", __DATE__);
    printf("Thank you for the Review.\n\n");
}

void exitting(){
    int ch;
    restart:
        printf("Would you like to give us feedback ?\n");
        printf("1\t->\tYes\n");
        printf("2\t->\tNo\n");
        printf("Enter your Choice:\t");
        scanf("%d", &ch);
        if(ch==1){
            system("cls");
            feedback();
            system("pause>nul"); // Batch script command to pause.
            exit(0);
        }
        else if(ch==2){        
            system("cls");
            system("echo Thank you for using it...&pause>nul"); // Batch script command to print the output message with pause.
            exit(0);
        }
        else{
            system("cls");
            printf("You Entered Wrong Choice !!\n");
            goto restart;
        }
}
