// Code Optimisation

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

// Unoptimised 
int main()
{

time_t start, end; 

time(&start);

int m =0, l=12;
for(long int i=0; i<1000000000; i++){
    m = m+1;
    l=l+1;

}


time(&end);

// Time taken by program is: 2.000000 sec in  my pc

// Calculating total time taken by the program. 
double time_taken = double(end - start); 
cout << "Time taken by program is :"<< fixed << time_taken << setprecision(2); cout << "sec " << endl;

return 0;

}