#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    char country[100];
    int jersey_no;
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    char countryName_1[100] = "India";
    dhoni->jersey_no = 7;
    strcpy(dhoni->country, countryName_1);
    // Copying Data from Dhoni Object to Kohli Object
    Cricketer *kohli = new Cricketer;
    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country, countryName_1);
    // Deleting Dhoni Object
    delete dhoni;

    // cout << dhoni->country << endl;
    // cout << dhoni->jersey_no << endl;

    cout << kohli->country << endl;
    cout << kohli->jersey_no << endl;

    return 0;
}