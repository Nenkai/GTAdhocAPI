using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MRaceBuildParameter : public Object
	{
		  public:
		  	/** \brief constructor taking no param */
			MRaceBuildParameter() { };

			void deepCopy(MRaceBuildParameter rbp);
			void setDefault();

			Bool hostMigration;
			Bool eligibleBackupHost;
			TopologyType topologyType;
			Bool isLan;
    }
}