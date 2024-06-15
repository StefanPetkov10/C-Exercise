#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED

void task2()
{
    int n;
    printf("Enter a number for array");
    scanf("%d", &n);

    int arr[n];

    printf("Enter a element");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            if(arr[i] < arr[i + 1])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        else
        {
            if(arr[i] > arr[i + 1])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }

    }

    if(flag == 1)
    {
        printf("ok");
    }
    else{
        printf("no");
    }





}


#endif // TASK2_H_INCLUDED
