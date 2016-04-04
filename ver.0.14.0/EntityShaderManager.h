#pragma once
class EntityShaderManager{
	public:
		EntityShaderManager(void);
		void _getOverlayColor(Entity &,float);
		void _setupFoilShaderParameters(Color const&,Color const&,Vec2 const&);
		void _setupFoilShaderParameters(Color const&,Vec2 const&);
		void _setupFoilShaderParameters(Entity &,Color const&,TextureUVCoordinateSet const&,float);
		void _setupFoilShaderParameters(Entity &,Color const&,Vec2 const&,float,bool);
		void _setupFoilShaderParameters(Entity &,TextureUVCoordinateSet const&,float);
		void _setupFoilShaderParameters(TextureUVCoordinateSet const&);
		void _setupFoilShaderParameters(Vec2 const&);
		void _setupShaderParameters(BlockSource &,BlockPos const&,Color const&,float,Vec2 const&);
		void _setupShaderParameters(BlockSource &,BlockPos const&,float,Vec2 const&);
		void _setupShaderParameters(Color const&,Color const&,Color const&,float,float,float,float,Vec2 const&,Vec2 const&,float);
		void _setupShaderParameters(Entity &,Color const&,Color const&,Color const&,float,float,float,float,Vec2 const&,Vec2 const&,float,bool);
		void _setupShaderParameters(Entity &,Color const&,Color const&,Vec2 const&,float,float);
		void _setupShaderParameters(Entity &,Color const&,Color const&,float,bool);
		void _setupShaderParameters(Entity &,Color const&,Color const&,float,float,float,float,Vec2 const&,float);
		void _setupShaderParameters(Entity &,Color const&,float,bool);
		void _setupShaderParameters(Entity &,float);
		void _setupShaderParameters(float,Color const&,bool);
		void getEntityMaterial(void);
		void getStaticMaterial(void);
		void getTransparentEntityMaterial(void);
		void ~EntityShaderManager();
		void ~EntityShaderManager();
};
