#pragma once
class ModelPart{
	public:
		ModelPart(ModelPart&&);
		ModelPart(int,int,int,int);
		void addBox(Vec3 const&,Vec3 const&,float);
		void addBoxMapTex(Vec3 const&,Vec3 const&,TextureOffset const&,float);
		void addChild(ModelPart*);
		void compile(float);
		void draw(Model const&,float);
		void expandAABB(AABB &);
		void load(GeometryPtr const&,std::string const&);
		void mimic(ModelPart const&);
		void operator=(ModelPart&&);
		void render(Model const&,float);
		void reset(void);
		void setNeverRender(bool);
		void setPos(Vec3 const&);
		void setTexSize(int,int);
		void texOffs(int,int);
		void translateTo(Matrix &,float);
		void ~ModelPart();
};
