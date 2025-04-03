#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    int x = rand() % (6 - 2*-2 + 1) + 1;
    cout << x << endl;
    int user_point = 0, comp_point = rand()%3;
    char user_select = ' ', comp_select = ' ';

    for (int i = 1; i <= 3; i++) {
        cout << "Round " << i << endl;

        while (true) {
            int user_select;
            cout << "Select choice:\n\t\t[r] - rock;\n\t\t[s] - scissors;\n\t\t[p] - paper;\n\tInput: ";
            cin >> user_select;
            if (user_select == 'r' || user_select == 's' || user_select == 'p')break;
            else cout << "Select true option!" << endl;
        }

        switch (1 + rand() % 3)
        {
        case 1: comp_select = 'r'; break;
        case 2: comp_select = 's'; break;
        case 3: comp_select = 'p'; break;
        }
        cout << "Computer select: " << comp_select << endl;
        if (user_select == comp_select) {
            cout << "Draw!!" << endl;
        }
        else if (user_select == 'r' && comp_select == 's') {
            user_point++;
            cout << "User win" << endl;
        }
        else if (user_select == 's' && comp_select == 'p') {
            user_point++;
            cout << "User win" << endl;
        }
        else if (user_select == 'p' && comp_select == 'r') {
            user_point++;
            cout << "User win" << endl;
        }
        else {
            comp_point++;
            cout << "Computer wins!" << endl;
        }
    }

    if (user_point == comp_point) {
        cout << "Draw" << endl;
    }
    else if (user_point > comp_point) {
        cout << "Congratulation!!!! User win!" << endl;
    }
    else {
        cout << "Sorry ...... Computer wins" << endl;
    }
    return 0;
}
