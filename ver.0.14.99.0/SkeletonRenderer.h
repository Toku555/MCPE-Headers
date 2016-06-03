#pragma once
class SkeletonRenderer{
	public:
		SkeletonRenderer(mce::TextureGroup &,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,float);
		SkeletonRenderer(mce::TextureGroup &,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,float);
		void render(Entity &,Vec3 const&,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void scale(Mob &,Matrix &,float);
		void ~SkeletonRenderer();
		void ~SkeletonRenderer();
		void ~SkeletonRenderer();
		void ~SkeletonRenderer();
};
