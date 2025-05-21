// https://leetcode.com/problems/defanging-an-ip-address/description/

char * defangIPaddr(char * address){
    
    char *numero = (char*) malloc (sizeof(char) * strlen(address) + 7);
    int i, k = 0;

    for(i = 0; i < strlen(address); i++){
        if(address[i] == '.'){
            numero[k++] = '[';
            numero[k++] = '.';
            numero[k++] = ']';

        }
        else{
            numero[k] = address[i];
            k++;

        }
    }

    numero[k] = '\0'; 
    return numero;


}