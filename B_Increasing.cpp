#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main(){

    int t, i, j, cont2 = 0;

    cin >> t;

    while(cont2 < t){

        int cont = 0;

        int n;

        cin >> n;

        int a[n];

        for(i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a,a + n);

        for(i = 0; i < n; i++){
            for(j = i + 1; j < n; j++){
                if( a[i] == a[j] ){
                cont++;
                }
            }    
        }

        if( cont == 0 ){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    cont2++;
    }

    return 0;
}
