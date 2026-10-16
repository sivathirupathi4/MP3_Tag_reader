#include <stdio.h>
#include <string.h>

#include "view.h"

int get_size(char *size_buf)
{
    int size;

    size = ((unsigned char)size_buf[0] << 24) |
           ((unsigned char)size_buf[1] << 16) |
           ((unsigned char)size_buf[2] << 8)  |
           ((unsigned char)size_buf[3]);

    return size;
}

void view_tags(FILE *fp)
{
    char tag[5];
    char size_buf[4];

    int size;

    char data[1001];

    printf("---------------------------------------------------------\n");
    printf("        MP3 Tag Reader and Editor for ID3v2\n");
    printf("---------------------------------------------------------\n\n");

    fseek(fp, 10, SEEK_SET);

    for(int i = 0; i < 6; i++)
    {
        if(fread(tag, 1, 4, fp) != 4)
        {
            break;
        }

        tag[4] = '\0';

        if(fread(size_buf, 1, 4, fp) != 4)
        {
            break;
        }

        size = get_size(size_buf);

        fseek(fp, 2, SEEK_CUR);

        if(size <= 0)
        {
            break;
        }

        if(size >= sizeof(data))
        {
            printf("Tag size is too large\n");
            fseek(fp, size, SEEK_CUR);
            continue;
        }

        if(fread(data, 1, size, fp) != size)
        {
            break;
        }

        data[size] = '\0';

        if(strcmp(tag, "TIT2") == 0)
        {
            printf("%-10s : %s\n", "Title", data + 1);
        }
        else if(strcmp(tag, "TPE1") == 0)
        {
            printf("%-10s : %s\n", "Artist", data + 1);
        }
        else if(strcmp(tag, "TALB") == 0)
        {
            printf("%-10s : %s\n", "Album", data + 1);
        }
        else if(strcmp(tag, "TYER") == 0)
        {
            printf("%-10s : %s\n", "Year", data + 1);
        }
        else if(strcmp(tag, "TCON") == 0)
        {
            printf("%-10s : %s\n", "Genre", data + 1);
        }
        else if(strcmp(tag, "COMM") == 0)
        {
            printf("%-10s : %s\n", "Comment", data + 1);
        }
    }

    printf("\n---------------------------------------------------------\n");
}