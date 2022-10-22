
#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int i =1;
    while(i<=r){
        int j=1;
        while(j<=c){
            cout<<c-j+1;
            j++;
        }
    cout<<endl;
      i++ ;
    }

    return 0;
}


