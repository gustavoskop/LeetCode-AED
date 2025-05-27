char *shortestCompletingWord(char *licensePlate, char **words, int wordsSize)
{
    int i, k = 0, j, m = 0, inter = 0, tam = 0, l;
    char w[16], tmp[16];

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
        inter = 0;

        for ( l = 0; l < strlen(words[i]); l++ )
            tmp[l] = words[i][l];

        while ( w[k] != '\0' )
        {

            for ( j = 0; j < strlen( words[i] ); j++ )
            {
                if ( words[i][j] == w[k] )
                {
                    k++;
                    words[i][j] = '#';
                    break;
                }
            }
            inter++;
            if ( inter == strlen(words[i]) )
                break;
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
        for ( l = 0; l < strlen( words[i] ); l++ )
            words[i][l] = tmp[l];
    }

    return words[m];
}
