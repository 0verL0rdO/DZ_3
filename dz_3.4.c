#include <stdio.h>
#include <string.h>

int main(){

      char str_1[32];
      char str_2[32];
      char *str;

      printf("Enter a string(31 characters): \n");
      fgets(str_1, sizeof(str_1), stdin);
      str_1[strcspn(str_1, "\n")] = '\0';

      printf("Search for a string: \n");
      fgets(str_2, sizeof(str_2), stdin);
      str_2[strcspn(str_2, "\n")] = '\0';

      str = strstr(str_1, str_2);

      if (str == NULL)
            printf("NULL \n");
      else
            printf("\nAddr: %p \nMatch found in %zu symbol\n\n", (void *)str, strlen(str_2));      
      


}
