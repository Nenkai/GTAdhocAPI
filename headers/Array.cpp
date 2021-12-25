namespace System
{
	class Array : public Object
	{
		public:
		
			/// @brief constructor taking no param
			Array() { };
			
			/// @brief Gets or sets the array size
			Int size;

			/// @brief Same effect as size
			Int resize(Int size)

			/// @brief Obsolete?
			void reserve();

			/// @brief Obsolete?
			void unshift();

			void shift();
			void pack();
			void push();
			void pop();
			void join();
			void concat();
			void append();
			void bsearch();
			void move();
			void sort();
			void erase();
			void indexOf();
			void rotate();
			void reverse();
			void randomShuffle();

			Object iterator_with_index;
			
			void clear();
			void empty();

			operator+(){};

			void each();
			void map();
	}
}