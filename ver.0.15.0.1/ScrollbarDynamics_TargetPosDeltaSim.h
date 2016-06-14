#pragma once
namespace ScrollbarDynamics{
	class TargetPosDeltaSim{
		public:
		void accumulateDeltaPos(float,float);
		void getMaxDeltaPos(void);
		void reset(void);
		void _applyConstraints(void);
		void _applyCoulombFriction(float);
		void _applyEndSpringDamper(void);
		void _applyTargetDeltaAndFlicks(float);
		void _applyTargetPosSpringDamper(float);
		void _computeForces(float);
		void _integrate(float);
		void adjustTargetPos(float);
		void adjustTargetPos(float);
		void getCurrentPos(void);
		void getCurrentPos(void);
		void getLastPos(void);
		void getLastPos(void);
		void isMoving(void);
		void isMoving(void);
		void setMaxDisplacementPastMinMax(float);
		void setMaxDisplacementPastMinMax(float);
		void setMinMaxRange(float,float);
		void setMinMaxRange(float,float);
		void setPos(float);
		void setPos(float);
		void setTargetPointActive(bool);
		void setTargetPointActive(bool);
		void targetPointMovedDistance(void);
		void targetPointMovedDistance(void);
		void update(float);
		void update(float);
	}
};
