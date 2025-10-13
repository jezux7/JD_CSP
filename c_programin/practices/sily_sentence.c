// JD 7th Silly sentence

#include <stdio.h>
#include <string.h>

int main(void) {
    char adjective[20];
    char noun[20];
    char verb[20];
    printf("give an toy: ");
    scanf("%19s", toy);
    printf("give a musical instrument: ");
    scanf("%19s", musical_instrument);
    printf("tell me a day of the week: ");
    scanf("%19s", lunch);
    char story[200] = "If I was principal of my school, I'd put ";
    strcat(story, toy);
    strcat(story, " and some ");
    strcat(story, musical_instrument);
    strcat(story, " in every ");
    strcat(story, day);
    strcat(story, " the caffeteria had to give pizza.");
    printf("%s\n", story);



  
      return 0;
}
