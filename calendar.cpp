#include <iostream>
#include <string>
class calendar
{
private:
     int m,yr;
public:
     calendar(int month,int year);

     void assign(int month, int year){
          int days= daysInMonth(month,year);
          int firstD= firstDay(month,year);
          std::string nameMonth=monthName(month);
          if (nameMonth=="Invalid month"){
               std::cout << "Month dosen't exist!";
          }
          else{
               printCalendar(month,year,firstD,days,nameMonth);
          }
     }

     int daysInMonth(int n,int year){
          switch (n)
          {
               case 1: 
               case 3:
               case 5:
               case 7:
               case 8:
               case 10:
               case 12:
                    return 31;
               case 4:
               case 6:
               case 9:
               case 11:
                    return 30;
               case 2:
                    if(year%400==0 || year%4==0 && year%100!=0){
                         return 29;
                    }
                    else{
                         return 28;
                    }
               default:
                    return 0;
          }
     } 
     int firstDay(int m,int year){
          if(m==1){                                     //jan as 13th month of previous year
               m=13;
               year=year-1;
          }
          if(m==2){                                     //feb as 13th month of previous year
               m=14;
               year=year-1;
          }
          int k=year%100;
          int j=year/100;
          
          int h=(1+(13*(m+1)/5)+k+(k/4)+(j/4)-(2*j))%7; //zeller's congruence

          if (h==0){
               h=7;
          }
          return h;
     }

     std::string monthName(int month){
          switch (month)
          {
          case 1:
               return "January";
          case 2:
               return "February";
          case 3:
               return "March";
          case 4:
               return "April";
          case 5:
               return "May";
          case 6:
               return "June";
          case 7:
               return "July";
          case 8:
               return "August";
          case 9:
               return "September";
          case 10:
               return "October";
          case 11:
               return "November";
          case 12:
               return "December";
          default:
               return "Invalid month";
          }
     }

     void printCalendar(int month, int year, int firstDay, int daysInMonth,std::string name){

         std::cout << "\n    " << name << " " << year << std::endl;
         std::cout << "Su Mo Tu We Th Fr Sa" << std::endl;

         for (int i = 1; i < firstDay; i++)
         {
             std::cout << "   ";
         }

         for (int day = 1; day <= daysInMonth; day++)
         {
               std::cout << day;   
               if (day < 10)
                   std::cout << "  ";
               else
                   std::cout << " ";    
               if ((firstDay + day - 1) % 7 == 0)
                   std::cout << std::endl;
         }
     }
};

calendar::calendar(int month,int year) : yr(year),m(month) {
     assign(m,yr);
}

int main(){

     int month,year;

     std::cout << "Enter the month: ";
     std::cin >> month;
     std::cout << "Enter the year: ";
     std::cin >> year;

     calendar cal(month,year);

     return 0;

}



