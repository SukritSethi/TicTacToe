// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
char game[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9' };
int a;
char player = 'X';
void gameplay()
{
    system("cls");
    cout << "Tic Tac Toe" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << game[i][j] << " ";
        }
        cout << endl;
    }
}
void Input()
{
    int a;
    cout << "Pick your target: "
    cin >> a;
    if (a==1)
        game[0][0] = player;
    if (a==2)
        game[0][1] = player;
    if (a==3)
        game[0][2] = player;
    if (a==4)
        game[1][0] = player;   
    if (a==5)
        game[1][1] = player;
    if (a==6)
        game[1][2] = player;
    if (a==7)
        game[2][0] = player;
    if (a==8)
        game[2][1] = player; 
    if (a==9)
        game[2][2] = player;
}

void TogglePlayer()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}
char Win()
{
    if(game[0][0] == 'X' && game[0][1] == 'X' && game[0][2] == 'x')
        return 'X';
}

int main() {
    gameplay();
    system("pause");
    
    
    return 0;
}