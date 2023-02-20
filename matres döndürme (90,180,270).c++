//c++ te matres döndürme(90,180,270)
#include <iostream>
using namespace std;
int main()
{
    cout<<"c++ te matres döndürme(90,180,270)"<<endl;
    int n, m, de;
    de = 1;
    while (de == 1)//matresi değiştirmek için
    {
        cout << "satır ve sütunu giriniz\n";
        cin >> n >> m;
        cout << "döndürecek matrsi giriniz\n";
        int mtr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mtr[i][j];
            }
        }
        cout << "girdiniz matres budur\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << " " << mtr[i][j];
            }
            cout << endl;
        }
        cout << "döndürecek derecesi yazınız"
             << "(90,180,270)" << endl;
        int der;
        cin >> der;
        cout << "'" << der << "'derecede döndüruldüğü halde" << endl;
        if (der == 90)
        {
            n = n - 1;
            for (int j = 0; j < m; j++)
            {
                for (int i = n; i > -1; i--)
                {
                    cout << " " << mtr[i][j];
                }
                cout << endl;
            }
        }
        else if (der == 180)
        {
            n = n - 1;
            m = m - 1;
            for (int i = n; i > -1; i--)
            {
                for (int j = m; j > -1; j--)
                {
                    cout << " " << mtr[i][j];
                }
                cout << endl;
            }
        }
        else if (der == 270)
        {
            m = m - 1;
            for (int j = m; j > -1; j--)
            {
                for (int i = 0; i < n; i++)
                {
                    cout << " " << mtr[i][j];
                }
                cout << endl;
            }
        }
        else
            cout << "yanlış bir derece girdiniz sadece (90,180 ve 270)girebilirsiniz" << endl;
        cout << "matresi değiştirmek için 1 bütona basınız değiştirmak istemıyorsanız 0 bütona basınız;";
        cin >> de;
    }
    return 0;
}