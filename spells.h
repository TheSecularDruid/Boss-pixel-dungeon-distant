enum use_phase {
		CONSTRUCTION, ACTION, ANY
};

struct spell {
  char name[NAME_LENGTH]; char description[DESC_LENGTH], enum use_phase use_phase;
};
