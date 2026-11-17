#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n, m;
    double mas[10][10];
    cout << "Vvedite colichestvo strok i stolbov" << endl;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    {
    cout << "vvedite elementi [" << i << "] [" << j << "]: ";
    cin >> mas[i][j];
    }
    for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++)
    cout << setw(8) << mas[i][j];
    cout << endl;
    }
    cout<<"Elementy, minimalnye v stroke i maksimalnye v stolbtse:"<<endl;
    bool found=true;
    for (int i=0; i<n; i++)
    {
        int jmin=0;
        for (int j=0; j<m; j++)
        if (mas[i][j]<mas[i][jmin]) jmin=j;
    for (int k=0; k<n; k++)
    if (mas[k][jmin]>mas[i][jmin]){
        found=false; break;}
        if (found) cout<<mas[i][jmin]<<endl;
    }
    if (!found) cout<<"net takih elementov"<<endl;
return 0;
}