#include <iostream>

using namespace std;

void print(int a[], int n){
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n = 5;
    int a[n] = {12, 11, 13, 5, 6};
    
    for (int i = 1; i < n; i++) {
        int card = a[i];
        for (int j = i-1; j >= 0; j--) {
            
                if(card<a[j]){
                    if(j==0){
                        a[j+1] = a[j];
                        a[j] = card;
                    }
                    else{
                        a[j+1] = a[j];
                        
                    }
                }
                
                else{
                    a[j+1] = card;
                    break;
                }
            
        }
    print(a,5);cout<<endl;

    }    
    
    print(a,5);

    return 0;
}
