#pragma once
class TerrainParticle{
	public:
		TerrainParticle(BlockSource &,ParticleType);
		TerrainParticle(BlockSource &,ParticleType);
		void _getTexture(FullBlock const&);
		void _useAlphaTesting(int,BlockShape);
		void getParticleTexture(void);
		void getParticleTexture(void);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void render(Tessellator &,float,float,float,float,float,float);
		void render(Tessellator &,float,float,float,float,float,float);
		void ~TerrainParticle();
		void ~TerrainParticle();
		void ~TerrainParticle();
		void ~TerrainParticle();
};
