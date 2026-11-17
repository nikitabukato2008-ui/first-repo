#include <iostream>
using namespace std;
int main(){
    int mas[10];
    cout<<"vvedite element: ";
    for (int i=0; i<10; i++){
         cin>>mas[i];
    }
    for (int i = 0; i < 10; i++) {
cout << mas[i] << "   ";}
    cout<<endl;
    int m_povtor=0;
    int chislo=mas[0];
    for (int i=0; i<10; i++){
        int povtor=0;
        for(int j=0; j<10; j++){
            if (mas[i]==mas[j]) povtor++;
        }
        if (povtor > m_povtor) {
            m_povtor=povtor;
            chislo=mas[i];
        }
    }
    cout<<"chislo kotoroe vibiralos bolshe vsego raz   "<<chislo<<endl;
    cout<<"vstretilos: "<<m_povtor<<"   raz"<<endl;
return 0;
}