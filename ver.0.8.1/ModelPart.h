#pragma once
class ModelPart{
	public:
		ModelPart(Model *,int,int,int,int);
		ModelPart(int,int,int,int);
		ModelPart(std::string const&);
		void _init(int,int);
		void addBox(float,float,float,int,int,int);
		void addBox(float,float,float,int,int,int,float);
		void addBox(std::string const&,float,float,float,int,int,int);
		void addChild(ModelPart*);
		void compile(float);
		void draw(float);
		void drawSlow(float);
		void mimic(ModelPart const*);
		void operator=(ModelPart const&);
		void render(float);
		void renderHorrible(float);
		void reset(void);
		void setModel(Model *);
		void setPos(float,float,float);
		void setTexSize(int,int);
		void texOffs(int,int);
		void translateTo(float);
		void ~ModelPart();
};
