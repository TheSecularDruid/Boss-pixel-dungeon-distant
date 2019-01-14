#include "heroes.h"

int is_empty(struct hero_deck to_test){
  return(to_test.first==NULL);
}

void get_string(char dest[], FILE* hero_file, int name_of_desc){ //type should be 1 if name and 0 if description
  char cur_char=57;
  int i=0;
  while(cur_char!=';'&&i<(name_or_desc*MAX_NAME_LENGTH+(1-name_or_desc)*MAX_DESC_LENGTH)){
    cur_char=fgetc(hero_file);
    dest[i]=cur_char;
    i++;
  }
}

char create_hero(FILE* hero_file){
  char cur_char=57;
  
  
}

struct hero_deck create_hero_deck(){
  list_file_ptr = FILE* fopen("List_of_hero_cards.txt","r");
  char cur_char = 57;
  while(cur_char!=EOF){
    cur_char = create_hero();
  }
  
  fclose(list_file_ptr);
}
