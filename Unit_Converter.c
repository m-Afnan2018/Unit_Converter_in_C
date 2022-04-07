#include "units.h"
void main(){
    int ch;
    char choice[12][50]={"Length", "Mass", "Pressure", "Speed", "Temperature", "Frequency", "Time", "Area", "Energy", "Fuel Economy", "Feedback", "Exit"};
    system("cls");
    while(1){
        printf("Choose the type of Converter you want to use:\n");
        for(int i=0;i<12;i++){
            printf("%d\t->\t%s\n",i+1, choice[i]);
        }
        printf("Enter your Choice:\t");
        scanf("%d",&ch);
        system("cls");
        switch(ch){
            case 1:
                length();
                break;
            case 2:
                mass();
                break;
            case 3:
                pressure();
                break;
            case 4:
                speed();
                break;
            case 5:
                temperature();
                break;
            case 6:
                frequency();
                break;
            case 7:
                time();
                break;
            case 8:
                area();
                break;
            case 9:
                energy();
                break;
            case 10:
                fuel();
                break;
            case 11:
                feedback();
                break;
            case 12:
                exitting();
                break;
            default:
                printf("Wrong Choice Option Selected\n");
        }
        system("pause");
        system("cls");
    }
}