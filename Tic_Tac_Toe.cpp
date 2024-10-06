#include<iostream>
#include<conio.h>
using namespace std;
class Tic
{
    public:
    string name1,name2;
    char a[3][3];
    int i,j,num,b[3][3],choiceo,choicex,number;
    Tic()
    {
        cout<<"First Player - O"<<endl<<"Second Player - X"<<endl;
        cout<<"Enter name of first player: ";
        cin>>name1;
        cout<<"Enter name of second player: ";
        cin>>name2;
        num = 49;
        number = 1;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                b[i][j] = number;
                number++;
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                a[i][j] = num;
                num++;
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<"    ";
            }
            cout<<endl;
        }
    }
    void chanceo();
    void chancex();
};
void Tic :: chanceo()
{
    int count,win=0;
    do
    {
        cout<<name1<<" enter your choice: ";
        cin>>choiceo;
        count = 0;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(choiceo == b[i][j])
                {
                    if(a[i][j] == 'O' || a[i][j] == 'X')
                    count++;
                }
            }
        }
        if(count == 0)
        {
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    if(choiceo == b[i][j])
                    {
                        a[i][j] = 'O';
                    }
                }
            }
        }
        if(count!=0)
        cout<<"Invalid choice.Enter again"<<endl;
    }while(count!=0);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        cout<<a[i][j]<<"    ";
        cout<<endl;
    }
}
void Tic :: chancex()
{
    int count;
    do
    {
        cout<<name2<<" enter your choice: ";
        cin>>choicex;
        count = 0;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(choicex == b[i][j])
                {
                    if(a[i][j] == 'O' || a[i][j] == 'X')
                    count++;
                }
            }
        }
        if(count == 0)
        {
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    if(choicex == b[i][j])
                    {
                        a[i][j] = 'X';
                    }
                }
            }
        }
        if(count!=0)
        cout<<"Invalid choice.Enter again"<<endl;
    }while(count!=0);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        cout<<a[i][j]<<"    ";
        cout<<endl;
    }
}
int main()
{
    int chance=0,win1,win2,win3,win4,win5,win6,win7,win8;
    Tic t;
    do
    {
        chance++;
        switch(chance)
        {
            case 1: t.chanceo();break;
            case 2: t.chancex();break;
            case 3: t.chanceo();break;
            case 4: t.chancex();break;
            case 5: t.chanceo();break;
            case 6: t.chancex();break;
            case 7: t.chanceo();break;
            case 8: t.chancex();break;
            case 9: t.chanceo();break;
        }
    
        win1=0;
        for(t.i=0;t.i<3;t.i++)
        {
            for(t.j=0;t.j<3;t.j++)
            {
                if(t.a[0][0] == 'O' && t.a[1][1] == 'O' && t.a[2][2] == 'O')
                win1++;
                else
                if(t.a[0][2]== 'O' && t.a[1][1] == 'O' && t.a[2][0] == 'O')
                win1++;
                else
                if(t.a[0][0] == 'O' && t.a[1][0] == 'O' && t.a[2][0] == 'O')
                win1++;
                else
                if(t.a[0][1] == 'O' && t.a[1][1] == 'O' && t.a[2][1] == 'O')
                win1++;
                else
                if(t.a[0][2] == 'O' && t.a[1][2] == 'O' && t.a[2][2] == 'O')
                win1++;
                else
                if(t.a[0][0] == 'O' && t.a[0][1] == 'O' && t.a[0][2] == 'O')
                win1++;
                else
                if(t.a[1][0] == 'O' && t.a[1][1] == 'O' && t.a[1][2] == 'O')
                win1++;
                else
                if(t.a[2][0] == 'O' && t.a[2][1] == 'O' && t.a[2][2] == 'O')
                win1++;
            }
        }
        if(win1 != 0)
        {
            cout<<t.name1<<" is winner";
            break;
        }
    
        win2=0;
        for(t.i=0;t.i<3;t.i++)
        {
            for(t.j=0;t.j<3;t.j++)
            {
                if(t.a[0][0] == 'X' && t.a[1][1] == 'X' && t.a[2][2] == 'X')
                win2++;
                else
                if(t.a[0][2]== 'X' && t.a[1][1] == 'X' && t.a[2][0] == 'X')
                win2++;
                else
                if(t.a[0][0] == 'X' && t.a[1][0] == 'X' && t.a[2][0] == 'X')
                win2++;
                else
                if(t.a[0][1] == 'X' && t.a[1][1] == 'X' && t.a[2][1] == 'X')
                win2++;
                else
                if(t.a[0][2] == 'X' && t.a[1][2] == 'X' && t.a[2][2] == 'X')
                win2++;
                else
                if(t.a[0][0] == 'X' && t.a[0][1] == 'X' && t.a[0][2] == 'X')
                win2++;
                else
                if(t.a[1][0] == 'X' && t.a[1][1] == 'X' && t.a[1][2] == 'X')
                win2++;
                else
                if(t.a[2][0] == 'X' && t.a[2][1] == 'X' && t.a[2][2] == 'X')
                win2++;
            }
        }
        if(win2 != 0)
        {
            cout<<t.name2<<" is winner";
            break;
        }
    }while(chance<=9);
    if(win1 == 0 && win2 == 0)
    cout<<"Game Tie";
    getch();
}