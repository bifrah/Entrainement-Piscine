typedef struct Joueur
{
	int vie;
	char *name;
}		Player;


int main()
{
	Player *sang;
	Player benj;
	Player toto;
	Player tata;

	toto.vie = 42;
	tata.vie = 42;
	benj.vie = 42;
	benj.name = "benj";
	sang = &benj;

	sang->vie = 84;
}
