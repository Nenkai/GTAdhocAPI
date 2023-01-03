using namespace System;
using namespace pdistd;

namespace gtengine::GTGame

{
	class EntrySet
	{
		  public:
			EntryGenerate entry_generate;
			std::vector<Entry> entries;
			Bool isDefault();
    }		
}