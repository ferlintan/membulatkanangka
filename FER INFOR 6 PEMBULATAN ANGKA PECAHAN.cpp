#include <cstdlib> 
#include <iostream>
#include <cmath>
using  namespace std;

int main ()
{
	float pecahan, vround, vceil, vfloor, vtrunc;
	
	//minta masukan bilangan pecahan
	cout<< "Masukan bilangan pecahan : ";
	cin >> pecahan;
	
	//melakukan pembulatan
	vround = round(pecahan);
	vceil = ceil(pecahan);
	vfloor = floor(pecahan);
	vtrunc + trunc(pecahan);
	
//menampilkan hasil pembulatan
cout << "Hasil Pmebulatan Round: " << vround <<endl;
cout << "Hasil Pmebulatan Ceil: " << vceil <<endl;
cout << "Hasil Pmebulatan Floor: " << vfloor <<endl;
cout << "Hasil Pmebulatan Trunc: " << vtrunc <<endl;

  system ("PAUSE");
  return 0;
}
