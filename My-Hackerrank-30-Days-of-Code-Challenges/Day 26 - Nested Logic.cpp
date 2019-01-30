#include <iostream>
using namespace std;

unsigned int Fine(unsigned int d[], unsigned int m[], unsigned int y[])
{
   unsigned int fine=0;
   if     (y[0]>y[1])
      fine=10000;
   else if(m[0]>m[1] && y[0]==y[1])
      fine=(m[0]-m[1])*500;
   else if(d[0]>d[1] && m[0]==m[1])
      fine=(d[0]-d[1])*15;
   else
      fine=0;
   return fine;
}
int main()
{
   unsigned int day[2], month[2], year[2];
   cin>> day[0] >> month[0] >> year[0]; //on which the book was actually returned.
   cin>> day[1] >> month[1] >> year[1]; //on which the book was expected to be returned (due date).
   if((1<=day[0] && day[0]<=31) && (1<=month[0] && month[0]<=12)  && (1<=year[0] && year[0]<=3000) )
   {
      if((1<=day[1] && day[1]<=31) && (1<=month[1] && month[1]<=12)  && (1<=year[1] && year[1]<=3000) )
      {
         unsigned int fine=Fine(day, month, year);
         cout<<fine<<endl;
      }
   }
   return 0;
}
// editorial
/*#include <iostream>
using namespace std;

int main(int argc, const char* args[]){
    int actualDay;
    int actualMonth;
    int actualYear;
    int expectedDay;
    int expectedMonth;
    int expectedYear;

    // Actual return date
    cin >> actualDay;
    cin >> actualMonth;
    cin >> actualYear;

    // Expected return date
    cin >> expectedDay;
    cin >> expectedMonth;
    cin >> expectedYear;

    int fine = 0;

    // Returned within the current year:
    if(expectedYear == actualYear){
        if(expectedMonth < actualMonth){
            // Returned 1+ months late in current year
            fine = (actualMonth - expectedMonth) * 500;
        }
        else if( (expectedMonth == actualMonth)
                && (expectedDay < actualDay) ){
            // Returned 1+ days late within the current month
            fine = (actualDay - expectedDay) * 15;
        }
        // Else it is implied that the book was returned early
    }
    else if(expectedYear < actualYear){
        // Returned 1+ years late
        fine = 10000;
    }
    // Else it is implied that the book was returned 1+ years early

    cout << fine << endl;
}*/
