#include<iostream>
#include<cstdlib>
#include<curses.h>
using namespace std;
int main()
{
    char maze[18][24]= {"************** ********",//1
					 	"*            * *      *",//2
					 	"* ************ * ** * *",//3
					 	"*            * **** * *",//4
					 	"* ********** * *    * *",//5
					 	"* **       *   * ******",//6
					 	"* ** ***** ***** * ** *",//7
					 	"*        *          * *",//8
					 	"****** * **********   *",//9
					 	"*    * * *       * $ *",//10
					 	"* **** * * ****** *****",//11
					 	"* *    * * *    * *  *",//12
					 	"* * ****** * ** * * * *",//13
					 	"* *        * ** * * * *",//14
					 	"* ********** **     * *",//15
					 	"*               *     *",//16
					 	"*************** *******",//17
					 	"***********************"
					 	};//18

    srand(time(0));
    int x, y;
    x = rand()%18;
    y = rand()%23;
    while(maze[x][y] != ' '){
        x = rand()%18;
        y = rand()%23;
    }
    maze[x][y] = 'i';

    for (size_t i = 0; i < 18; i++)
    {
        for (size_t j = 0; j < 23; j++)
        {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }

    char c;
    while(true){
        c = getch();

        if(c == 'w'){
            if(maze[x-1][y] != '*'){
                maze[x][y] = ' ';
                --x;
                maze[x][y] = 'i';
            }
            for (size_t i = 0; i < 18; i++)
            {
                for (size_t j = 0; j < 23; j++)
                {
                    cout << maze[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}