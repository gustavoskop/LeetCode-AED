char *shortestCompletingWord(char *licensePlate, char **words, int wordsSize)
{
    int i, k = 0, j, m = 0, n = 0, count = 0, inter = 0, tam = 0;
    char w[16];

    for ( i = 0; i < strlen( licensePlate ); i++ ) 
    {
        if (licensePlate[i] == '1' || licensePlate[i] == '2' ||
            licensePlate[i] == '3' || licensePlate[i] == '4' ||
            licensePlate[i] == '5' || licensePlate[i] == '6' ||
            licensePlate[i] == '7' || licensePlate[i] == '8' ||
            licensePlate[i] == '9' || licensePlate[i] == '0' ||
            licensePlate[i] == ' ')
            continue;
        else
            w[k++] = tolower( licensePlate[i] );
    }
    w[k] = '\0';

    for ( i = 0; i < wordsSize; i++ )
    {
        k = 0;
        n = 0;
        inter = 0;
        while ( w[k] != '\0' )
        {
            n = k;
            count = 0;

            for ( j = 0; j < strlen( words[i] ); j++ )
            {
                if ( words[i][j] == w[n] )
                    count++;
            }
            inter++;
            if ( inter == strlen(words[i]) )
                break;
            if ( count > 0 )
                k++;
        }

        if ( w[k] == '\0' )
        {
            if ( tam == 0 )
            {
                tam = strlen( words[i] );
                m = i;
            }
            else if ( tam > strlen(words[i]) )
            {
                tam = strlen( words[i] );
                m = i;
            }
        }
    }

    return words[m];
}
