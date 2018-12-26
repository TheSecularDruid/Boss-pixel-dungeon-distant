#define DESC_LENGTH 3000

enum class {
	    WARRIOR, PRIEST, ROGUE, MAGE, GREEDYFUCK  //greedyfucks go for the max amount of treasure, all combined
};
  
enum spec {
	   BERSERK, DRUID, ASSASSIN, NINJA, WARLOCK
};

struct hero {
  enum class class; enum spec spec; int hp; char description[DESC_LENGTH]; int is_epic;
};

struct hero_deck {
  struct hero[HERO_DECK_MAX_SIZE], int size
};

