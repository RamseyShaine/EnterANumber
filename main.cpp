#include <iostream>
#include <cmath>

using namespace std;

void currencyEquivalents(int);
void age(int);
void digitSeperator(int);
void armstrongNumber(int);
void factorial(int);
void prime(int);
void hailstoneSequence(int);

int main()
{
   int integerValue = 0; //integer value for program to run
   char choice; //User will input a Y||y or N||n to continue or end the program

   cout << "Welcome to my APP" << endl
        << "This APP accepts an integer from the keyboard." << endl
        << "The APP calculates and Displays the following:" << endl;
   cout << "1. Assuming that the integer represents a $ amount, then the" << endl
        << "   number of quarters, dimes, nickels, and pennies will be" << endl
        << "   calculated and displayed." << endl << endl
        << "2. Assuming that the integer represents a person's age in years"
        << endl
        << "   then the number of months, days, hours, minutes, and seconds"
        << endl
        << "   for the person will be calculated and displayed." << endl << endl
        << "3. The numbers will be separated into its individual digits." << endl
        << "   Then the numbers will be displayed." << endl << endl
        << "4. Indicate whether or not the integer is an Armstrong Number."
        << endl << endl
        << "5. The factorial of the integer will be calculated and displayed."
        << endl << endl
        << "6. Indicate whether or not the integer is prime. Then all prime numbers"
        << endl
        << "   between 1 and that number will be displayed." << endl << endl
        << "7. The Hailstone Sequence stating at the selected number will" << endl
        << "   calculated and displayed." << endl << endl;



   do
    {
       cout << "Enter a positive integer between 0 and 200 ---->  ";
       cin >> integerValue;
       cout << endl << endl;

    if ( integerValue > 0 && integerValue < 200)
     {
        currencyEquivalents(integerValue);
        age(integerValue);
        digitSeperator(integerValue);
        armstrongNumber(integerValue);
        factorial(integerValue);
        prime(integerValue);
        hailstoneSequence(integerValue);
     }
    else if (cin.fail())
     {
       cin.clear();
       cin.ignore();
       cout << "Error *** incorrect input - You entered a character \n"<<
                "Please enter a positive integer."<< endl;
     }
    else
     {
       cout << "Error *** number must be > 0 and < 200!"<< endl;
     }

      cout << "Enter Y||y if you want to try another number"
            << "or N||n to end the program ";

       cin >> choice;
       cout << endl;


    if (choice !='n'&& choice!='N'&& choice!= 'y'&& choice!='Y' && isdigit(choice))
     {
       cout << "Error *** invalid choice - Must be y||Y or n||N"<< endl;
       cout << "Enter Y||y if you want to try another number"
            << "or N||n to end the program ";
      cin.clear();
      cin.ignore();
       cin >> choice;
       cout << endl;

     }

    if(choice == 'n' || choice == 'N')
     {
        return 0;
     }


    }while(choice == 'y' || choice == 'Y');
}

void currencyEquivalents(int integerValue)
{
   int dollar = integerValue,   //dollar amount based off of integerValue
       quarters = integerValue * 4, //amount of quarters based on entered dollar amount
       dimes = integerValue * 10, //amount of dimes based on entered dollar amount
       nickels = integerValue * 20, //amount of nickels based on entered dollar amount
       pennies = integerValue * 100; //amount of pennies based on entered dollar amount

       cout << "Currency Calculation" << endl << endl
            << "dollar/s = " << dollar << endl
            << "quarter/s = " << quarters << endl
            << "dime/s = " << dimes << endl
            << "nickel/s = " << nickels << endl
            << "pennies = " << pennies << endl<< endl;
}
void age(int integerValue)
{
   int years = integerValue; //number of years set by integerValue
   int months=0; //number of months based on entered number of years
   int days=0; //number of days based on entered number of years
   int hours=0; // relative number of hours based on entered number of years
   int minutes=0; //relative number of minutes based on entered number of years
   long int seconds=0;// relative number of seconds based on entered number of years

   months= years*12;
   days= years*365;
   hours= days*24;
   minutes= hours*60;
   seconds= minutes*60;

   cout <<"Age Calculation"<< endl << endl;
   cout << "Assuming you are " << years <<" years old" << endl;
   cout << "You are " << months<< " months old" << endl;
   cout << "You are " << days << " days old" << endl;
   cout << "You are approximately " << hours << " hours old" << endl;
   cout << "You are approximately "<< minutes<< " minutes old " << endl;
   cout << "You are approximately" <<seconds << " seconds old" << endl<< endl;
}

void digitSeperator(int integerValue)
{
   int digit1,
       digit2,
       digit3;

   cout << "Separating the digits for the integer " << integerValue << endl;

   if(integerValue < 10)
     {
        digit1 = integerValue % 10;

        cout << "  " << digit1 << endl;

      switch(digit1)
       {
        case 1 :
           cout << "one" << endl << endl;
           break;
        case 2 :
           cout << "two" << endl << endl;
           break;
        case 3 :
           cout << "three" << endl << endl;
           break;
        case 4 :
           cout << "four" << endl << endl;
           break;
        case 5 :
           cout << "five" << endl << endl;
           break;
        case 6 :
           cout << "six" << endl << endl;
           break;
        case 7 :
           cout << "seven" << endl << endl;
           break;
        case 8 :
           cout << "eight" << endl << endl;
           break;
        case 9 :
           cout << "nine" << endl << endl;
           break;

       }
    }
   if(integerValue >= 10 && integerValue <= 99)
     {
       digit1 = integerValue % 10;
       integerValue /= 10;
       digit2 = integerValue % 10;

       cout << "  " << digit2 << "      " << digit1 << endl;

      switch(digit2)
       {
        case 1 :
           cout << "one" << "   ";
           break;
        case 2 :
           cout << "two" << "   ";
           break;
        case 3 :
           cout << "three" << "   ";
           break;
        case 4 :
           cout << "four" << "   ";
           break;
        case 5 :
           cout << "five" << "   ";
           break;
        case 6 :
           cout << "six" << "   ";
           break;
        case 7 :
           cout << "seven" << "   ";
           break;
        case 8 :
           cout << "eight" << "   ";
           break;
        case 9 :
           cout << "nine" << "   ";
           break;

       }
      switch(digit1)
       {
        case 0 :
           cout << "zero" << endl << endl;
           break;
        case 1 :
           cout << "one" << endl << endl;
           break;
        case 2 :
           cout << "two" << endl << endl;
           break;
        case 3 :
           cout << "three" << endl << endl;
           break;
        case 4 :
           cout << "four" << endl << endl;
           break;
        case 5 :
           cout << "five" << endl << endl;
           break;
        case 6 :
           cout << "six" << endl << endl;
           break;
        case 7 :
           cout << "seven" << endl << endl;
           break;
        case 8 :
           cout << "eight" << endl << endl;
           break;
        case 9 :
           cout << "nine" << endl << endl;
           break;
       }
    }
    if(integerValue >= 100)
    {
      digit1 = integerValue % 10;
      integerValue /= 10;
      digit2 = integerValue % 10;
      integerValue /= 10;
      digit3 = integerValue % 10;

      cout << "  " << digit3 << "    " << digit2 << "     " << digit1 <<endl;

    switch(digit3)
     {
        case 1 :
           cout << "one" << "   ";
           break;
        case 2 :
           cout << "two" << "   ";
           break;
        case 3 :
           cout << "three" << "   ";
           break;
        case 4 :
           cout << "four" << "   ";
           break;
        case 5 :
           cout << "five" << "   ";
           break;
        case 6 :
           cout << "six" << "   ";
           break;
        case 7 :
           cout << "seven" << "   ";
           break;
        case 8 :
           cout << "eight" << "   ";
           break;
        case 9 :
           cout << "nine" << "   ";
           break;
        }
    switch(digit2)
       {
        case 0 :
           cout << "zero" << "   ";
           break;
        case 1 :
           cout << "one" << "   ";
           break;
        case 2 :
           cout << "two" << "   ";
           break;
        case 3 :
           cout << "three" << "   ";
           break;
        case 4 :
           cout << "four" << "   ";
           break;
        case 5 :
           cout << "five" << "   ";
           break;
        case 6 :
           cout << "six" << "   ";
           break;
        case 7 :
           cout << "seven" << "   ";
           break;
        case 8 :
           cout << "eight" << "   ";
           break;
        case 9 :
           cout << "nine" << "   ";
           break;
        }
     switch(digit1)
      {
        case 0 :
           cout << "zero" << endl << endl;
           break;
        case 1 :
           cout << "one" << endl << endl;
           break;
        case 2 :
           cout << "two" << endl << endl;
           break;
        case 3 :
           cout << "three" << endl << endl;
           break;
        case 4 :
           cout << "four" << endl << endl;
           break;
        case 5 :
           cout << "five" << endl << endl;
           break;
        case 6 :
           cout << "six" << endl << endl;
           break;
        case 7 :
           cout << "seven" << endl << endl;
           break;
        case 8 :
           cout << "eight" << endl << endl;
           break;
        case 9 :
           cout << "nine" << endl << endl;
           break;
        }

    }
}

void armstrongNumber(int integerValue)
{
   int total = 0,
       num = 0,
       digit = 0;

   num = integerValue;

   while(num != 0)
    {
      digit = num % 10;
      total += digit * digit * digit;
      num /= 10;
    }

   if(total == integerValue)
    {
      cout << integerValue << " is an Armstrong number." << endl << endl;
    }
   else
    {
      cout << integerValue << " is not an Armstrong number." << endl << endl;
    }
}
 void factorial(int integerValue)
 {
   int factorial=1; //the solved factorial of the entered integerValue
     for (int i= integerValue; i>0; i--)
      {
         factorial*=i;
      }
     cout <<"The factorial of "<< integerValue << " is :" << factorial <<endl<<endl;
 }

void hailstoneSequence(int integerValue)
{

   int hailstone = 0; // the solved hailstone sequence values

   cout << "Your Hailstone Sequence starting at " << integerValue << " is: "
        << integerValue;

   do
    {
      if(integerValue % 2 == 0)
        {
          hailstone = integerValue / 2;
        }
      else
        {
          hailstone = integerValue * 3 + 1;
        }

          integerValue = hailstone;

          cout << ", " << integerValue;

    }while(integerValue != 1);

   cout << endl << endl;

}
void prime(int integerValue)
{
   bool flagOne=true;  //finds if entered integerValue is prime or not
   bool flagTwo=false; //finds primes between 1 and entered integerValue

   while(flagOne)
    {
      for (int j= 2; j <= sqrt(integerValue); j++)
         {
             if ( integerValue%j == 0)
             {
                flagOne=false;
             }
         }

      if (flagOne==false)
       {
             cout << integerValue <<" is not prime!" << endl;
             cout << "All primes between 1 and "<< integerValue<< " are:"<< endl;
           for (int i=1; i<integerValue; i++)
           {
               flagTwo=true;

               for(int j=2; j*j<=i ;j++)
               {
                   if(i%j==0)
                   {
                       flagTwo=false;
                       break;
                   }
               }
              if (flagTwo==true)
               {
                   cout<< i << " is prime!"<< endl;
               }
           }
       }
      else
        {
          cout << integerValue <<" is prime!" << endl;
          break;
        }

   cout << endl<< endl;
}}
