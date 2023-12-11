#include<iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

// 3 satýr 81 sütun illere göre sýcaklýk (rasgele)
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;

int sicaklik[3][7];
int top=0;
srand(time(0));


 for (int i=0; i < 3 ; i++ )
  {
  	
  	cout << i << endl;
  	for(int j =0; j<7 ; j++)
  	 
  	 {
  	 	sicaklik[i][j]=rand() % (50+20)-20;
  	 	top+=sicaklik[i][j];
  	 	
  	 	}
  	cout <<"1." << (top/7)  ;

  }

 


  
return 0;	

}
