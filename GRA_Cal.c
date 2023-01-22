#include<stdio.h>

		
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* Tax bands
first 319    0% oghs
next  100    5.5% 5ghs
next  120    10% 12ghs
next  3000  17.5% 525ghs
next  16461 25%   4115.25ghs
exx   20000  30%                    */

int main (){

    float salary;
    float tax1,tax2,tax3,tax4,tax5,tax6;
    float   sum;
    float netincome;

    printf(" Input your monthly salary \n");
    scanf("%f", &salary);

 if  (salary <= 319)  // No tax bracket

       {

       printf("No tax applied \n");

       netincome == salary;

       printf("Netincome = %.2f",salary);

       }

  else  if (salary > 319 && salary <= 419) //Tax is in 2nd range
{


        tax1= 0.05*100;

        printf("tax applied = %.2fghs \n", tax1);


        }

  else  if (salary > 319 && salary <= 539) // tax is in 3rd range

      {

       tax1= 0.05 *100;
        tax2= 0.1 * 120;
        sum = tax1 + tax2;

        printf("tax applied = %.2fghs \n", sum);

      }


   else if (salary >319 && salary-539 >0 && salary-539<3000){ // tax is in 4th range

       tax1= 0.05 *100;
       tax2= 0.1 * 120;
       tax3=0.175 * (salary-539);
       sum = tax1+tax2+tax3;

        printf("tax applied = %.2fghs \n", sum);

      }

  else if (salary>319 && salary-539 >0 && salary-539>=3000 && salary-3539>=0 && salary-3539 <16421) { // tax is in 5th range

      tax1= 0.05 *100;
       tax2= 0.1 * 120;
       tax3=0.175 *3000;
    tax4 = 0.25 * (salary-3539);
    sum =tax1+tax2+tax3+tax4;

     printf("tax applied = %.2fghs \n", sum);

    }
// All code above tried and tested okay!!!!!!

 else if (salary>319 && salary-539 >0 && salary-539>=3000 && salary-3539>0 && salary-3539 >=16421 && salary-19960 <= 0){ // tax is in 6th range

       tax1= 0.05 *100;
       tax2= 0.1 * 120;
       tax3=0.175 *3000;
        tax4 = 0.25 * (salary-3539);

         sum =tax1+tax2+tax3+tax4;

     printf("tax applied = %.2fghs \n", sum);


    }

  else if (salary>319 && salary-539 >0 && salary-539>=3000 && salary-3539>0 && salary-3539>16421 && salary-19960>0){ // tax is in 6th range

       tax1= 0.05 *100;
       tax2= 0.1 * 120;
       tax3=0.175 *3000;
        tax4 = 0.25 * (16421);
        tax5 = 0.3 * (salary -19960);


         sum =tax1+tax2+tax3+tax4+tax5;

     printf("tax applied = %.2fghs \n", sum);
    }

  else{
    printf("End of program, check salary, i have also done my first commit in git \n ");

    printf(" I will have to start praying ");

    printf("Newtest Branch Creation");
    
    printf(" Git hub Push Trail");

}

return 0; }
