#pragma once
class PauseScreen{
	public:
		PauseScreen(bool);
		void buttonClicked(Button *);
		void init(void);
		void playerListChanged(std::vector<Player *,std::allocator<Player *>> &);
		void rebuildPlayerList(std::vector<Player *,std::allocator<Player *>> &);
		void render(int,int,float);
		void renderGameBehind(void);
		void setupPositions(void);
		void tick(void);
		void ~PauseScreen();
		void ~PauseScreen();
};
