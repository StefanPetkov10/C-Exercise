#ifndef TASK5_H_INCLUDED
#define TASK5_H_INCLUDED

void task5(){

void printMatrix(float matrix[12][4])
{
     for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%If ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


float cards[12][4] = {
{2.0, 2.1, 2.2, 2.3},
{3.0, 3.1, 3.2, 3.3},
{4.0, 4.1, 4.2, 4.3},
{5.0, 5.1, 5.2, 5.3},
{6.0, 6.1, 6.2, 6.3},
{7.0, 7.1, 7.2, 7.3},
{8.0, 8.1, 8.2, 8.3},
{9.0, 9.1, 9.2, 9.3},
{10.0, 10.1, 10.2, 10.3},
{11.0, 11.1, 11.2, 11.3},
{12.0, 12.1, 12.2, 12.3},
{13.0, 13.1, 13.2, 13.3},
};


for(int i = 0; i < 12; i++)
{
    for (int j = 0; j < 3; j++) {

        int random_row = rand() % 12;
        int random_col = rand() % 3;
        float temp = cards[i][j];
        cards[i][j] = cards[random_row][random_col];
        cards[random_row][random_col] = temp;
    }
}
printMatrix(cards);


float player1[8];

int coun = 0;

for(int i = 0; i < 2; i++)
{
    for(int j = 0; j < 4; j++)
    {
    player1[coun] = cards[i][j];
    coun++;
    }
}
for(int i = 0; i < 4; i++)
{
    for(int j = 0; j < 4; j++)
    {
    player1[coun] = cards[i][j];
    coun++;
    }
}

for(int i = 0; i < 2; i++)
{
    for(int j = 0; j < 4; j++)
    {
    player1[coun] = cards[i][j];
    coun++;
    }
}

for(int i = 0; i < 2; i++)
{
    for(int j = 0; j < 4; j++)
    {
    player1[coun] = cards[i][j];
    coun++;
    }
}

for(int i = 0; i < 7; i++)
{
    printf("%f\n", player1[i]);
}
}
#endif // TASK5_H_INCLUDED
