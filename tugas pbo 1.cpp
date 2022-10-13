#include <iostream>
using namespace std;

int main(){
    char a[]={'F','A','U','Z','A','N'};  
    int b, x[][2] = {{1,2}, {3,4}, {5,6}};
    
    cout << "Masukkan Nilai : ";	cin >> b; cout;			// Input
    cout << "Nilainya : " << b <<endl<<endl;
    cout << "Array 1D" << endl;
    for(int i=0; i<6; i++){								// Perulangan For + array 1D
        cout << "index " << i << " = " << a[i] << endl;	// Output
    }
    
    cout << endl << endl << "Array 2D" << endl;			// Array 2D/Multidimensi
    for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout << x[i][j] << "\t";
		}
		cout << endl;
	}
	cout<<endl;
    
    if (b%2==0){										// For percabngan
        cout << b << "  Adalah bilangan genap" << endl<< endl;
    }else{
        cout << b << "  Adalah bilangan ganjil" << endl<< endl;
    }
    
    cout <<  "PERULANGAN"  << endl << endl;
    int f = 0;
    while (f < b) {										//While
        cout << "While" << endl;
        f++;
    }
    cout<<endl;
    int e = 0;
    
    do {												//Do while
        cout << "Do While" << endl;
    e++;
    }
    while (e < b);

}
