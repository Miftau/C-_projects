#include <iostream>
using namespace std;

int main()
{
    cout << "Printing a rectangle with diagonals (Advanced version of rectangle assignment)\n";
    cout << "Eg: Try the following inputs: 20 x 20, 31 x 31, 18 x 35, 19 x 37, 6 x 61, 11 x 71....\n\n";

    while(true){
        int height, width;
        cout << "Enter the height: "; cin >> height;
        cout << "Enter the width: "; cin >> width;

        if(width==1){  for(int i = 1; i <= height; i++) cout << "*\n"; }
        else if(height==1){ for(int i = 1; i <= width; i++) cout << "*"; cout << "\n"; }
        else if((width-1)%(height-1)==0){
            int gradient = (width-1)/(height-1);
            int pos = 1+gradient;
            int pos2 = width-gradient;
            for(int i = 1; i <= height; i++){
                if(i==1 or i==height){
                    for(int j = 1; j <= width; j++) cout << "* ";
                }
                else{
                    bool chk = false, chk2 = false;
                    for(int j = 1; j <= width; j++){
                        if((j==pos and chk==false) or (j==pos2 and chk2==false)){
                            cout << "*";
                            if(j==pos and chk==false) pos+=gradient, chk = true;
                            if(j==pos2 and chk2==false) pos2-=gradient, chk2 = true;
                        }
                        else if(j==1 or j==width) cout << "*";
                        else cout << " ";
                        cout << " ";
                    }
                }
                cout << "\n";
            }
        }
        else if((height-1)%(width-1)==0){
            cout << "This can be done, but I'm leaving it as an exercise to the curious reader :)\n";
        }
        else cout << "Diagonal cannot be printed out\n";
        cout << "\n";
    }
}
