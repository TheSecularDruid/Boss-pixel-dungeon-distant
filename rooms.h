#define NAME_LENGTH 30

enum type {
	   TRAP, MONSTER
};

struct room {
  char name[NAME_LENGTH]; int damage; char description[DESCRIPTION_LENGTH]
};

