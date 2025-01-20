#include<stdio.h>
#include<fcntl.h>
#include<io.h>

int main()
{
    char FileName[20];
    int FD = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    FD = open(FileName, O_RDWR);
    if(FD == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File is successfully opened with FD : %d\n",FD);
    }

    close(FD);

    return 0;
} 

// Read Mode                 O_RDONLY 
// Write Mode                O_WRONLY
// Read + Write Mode         O_RDWR