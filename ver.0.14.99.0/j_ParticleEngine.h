#pragma once
namespace j{
	class ParticleEngine{
		public:
		void clear(void);
		void createTrackingEmitter(Entity &,ParticleType);
		void instance(ParticleType,Vec3 const&,Vec3 const&,int);
		void setLevel(Level *);
	}
};
