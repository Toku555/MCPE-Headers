#pragma once
class Slider{
	public:
		Slider(Minecraft *,Options::Option const*,float,float);
		Slider(Minecraft *,Options::Option const*,std::vector<int,std::allocator<int>> const&);
		void mouseClicked(Minecraft *,int,int,int);
		void mouseReleased(Minecraft *,int,int,int);
		void render(Minecraft *,int,int);
		void setOption(Minecraft *);
		void tick(Minecraft *);
		void ~Slider();
		void ~Slider();
};
