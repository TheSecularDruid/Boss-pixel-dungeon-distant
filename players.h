struct hand {
  struct hero heroes[MAX_HAND_SIZE]; int nb_heroes; struct spell spells[MAX_HAND_SIZE]; int nb_spells;
};

struct player {
  struct hand hand; struct dungeon dungeon; int souls; int wounds;
};
