//Chaston Davis
// A program that computes tuition bills

#include <iostream>
using namespace std;

int main()
{int creditshours, costpercredit, totalcost;
cout <<" ** Welcome to the Tuition Bill Porgram! ** "<<endl;

while (creditshours != -1)
{cout <<"How many credits? (-1 to exit)"<<endl;
cin >> creditshours;

if (creditshours >= 0 && creditshours <= 11)
{totalcost=creditshours*2030.00;
cout <<"Your total cost is $ "<<totalcost<<" per hour" <<endl;
}
    else if (creditshours >= 12 && creditshours <= 20)
    {totalcost=24450.00;
    cout <<"Your total cost is $ "<<totalcost<<" per semester" <<endl;
    }
    else if (creditshours >= 21)
    {totalcost=24450.00+2030.00*(creditshours-20);
    cout <<"Your total cost is $ "<<totalcost<<"" <<endl;
}
}

return 0;
}

/* Sample run
thomas% a.out
 ** Welcome to the Tuition Bill Porgram! ** 
How many credits? (-1 to exit)
3
Your total cost is $ 6090 per hour
How many credits? (-1 to exit)
13
Your total cost is $ 24450 per semester
How many credits? (-1 to exit)
25
Your total cost is $ 34600
How many credits? (-1 to exit)
-1

   
