#include "filestat.h"
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

void FileStat_Print(const char *path)
{
    struct stat fileStat;

    if (lstat(path, &fileStat) == -1)
    {
        perror("lstat");
        return;
    }

    printf("File Path: %s\n", path);

    printf("File Type: ");
    if (S_ISREG(fileStat.st_mode))
        printf("Regular File\n");
    else if (S_ISDIR(fileStat.st_mode))
        printf("Directory\n");
    else if (S_ISLNK(fileStat.st_mode))
        printf("Symbolic Link\n");
    else 
        printf("Other\n");

    printf("Size: %ld bytes\n", fileStat.st_size);

    char timeStr[100];
    struct tm *timeInfo = localtime(&fileStat.st_mtime);

    strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H:%M:%S", timeInfo);

    printf("Last Modified: %s\n", timeStr);
    
    
}