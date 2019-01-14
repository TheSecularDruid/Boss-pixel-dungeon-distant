#include "global_shit.h"
#define HERO_DECK_MAX_SIZE 41

enum class {
	    WARRIOR, PRIEST, ROGUE, MAGE, GREEDYFUCK  //greedyfucks go for the max amount of treasure, all combined
};
  
enum spec {
	   BERSERK, DRUID, ASSASSIN, NINJA, WARLOCK
};

struct hero {
  enum class class; enum spec spec; int hp; char description[DESC_LENGTH]; int is_epic;
};

struct hero_cell {
  struct hero hero; struct hero* next;
};

struct hero_deck { //un deck est une structure de pile
  struct hero* first;
};

int is_empty(struct hero_deck to_test);
void get_string(char dest[]);//String separators should be semicolons
char create_hero();
struct hero_deck create_hero_deck();
