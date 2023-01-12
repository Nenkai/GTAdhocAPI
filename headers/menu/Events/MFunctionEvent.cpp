using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a function event. */
	public class MFunctionEvent : public MEvent
	{
		public:
			MFunctionEvent(FunctionObject func, Object args, ...) { };

			FunctionObject getFunction();
			void setFunction(FunctionObject func);

			UInt getArgumentCount();
			void setFunctionCount(UInt count);

			Object getArgument(UInt index);
			void setArgument(UInt index, Object arg);

			Array<Object> getArguments();
			void setArguments(Array<Object> args);
	};
};
