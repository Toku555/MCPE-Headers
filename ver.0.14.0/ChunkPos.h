#pragma once
class ChunkPos{
	public:
		ChunkPos(BlockPos const&);
		ChunkPos(Vec3 const&);
		void distanceToSqr(Entity const&);
};
