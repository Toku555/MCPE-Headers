#pragma once
class ParticleEngine{
	public:
		ParticleEngine(Options &,Level &,TextureGroup &,SeasonsRenderer &);
		void _create(ParticleType);
		void _get(ParticleType);
		void _release(Particle *);
		void addCustomParticle(std::unique_ptr<CustomParticle,std::default_delete<CustomParticle>>);
		void clear(void);
		void countParticles(void);
		void crack(Entity *,BlockPos const&,signed char);
		void createTrackingEmitter(Entity &,ParticleType);
		void instance(ParticleType,Vec3 const&,Vec3 const&,int);
		void render(Entity *,float,MinecraftClient *);
		void renderParticleLayer(std::unordered_map<mce::Texture const*,std::vector<Particle *,std::allocator<Particle *>>,std::hash<mce::Texture const*>,std::equal_to<mce::Texture const*>,std::allocator<std::pair<mce::Texture const* const,std::vector<Particle *,std::allocator<Particle *>>>>> &,mce::MaterialPtr const&,float,float,float,float,float,float);
		void setLevel(Level *);
		void tick(void);
		void ~ParticleEngine();
};
