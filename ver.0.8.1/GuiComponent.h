#pragma once
class GuiComponent{
	public:
		GuiComponent(void);
		void blit(float,float,int,int,float,float,int,int);
		void blit(int,int,int,int,int,int,int,int);
		void drawCenteredString(Font *,std::string const&,int,int,int);
		void drawRect(int,int,int,int,int,int);
		void drawRect(int,int,int,int,int,int,int,int,int);
		void drawString(Font *,std::string const&,int,int,int);
		void fill(float,float,float,float,int);
		void fill(int,int,int,int,int);
		void fillGradient(float,float,float,float,int,int);
		void fillGradient(int,int,int,int,int,int);
		void fillHorizontalGradient(float,float,float,float,int,int);
		void fillHorizontalGradient(int,int,int,int,int,int);
		void ~GuiComponent();
		void ~GuiComponent();
};
