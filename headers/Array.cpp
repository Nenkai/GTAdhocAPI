namespace System
{
	/** Basic array object. */
	class Array : public Object, IArray
	{
		public:
		
			/** \brief constructor taking no param */
			Array() { };
			
			/** \brief Creates an array with the specified size */
			Array(Int) { };

			/** \brief Gets or sets the array size */
			Int size;

			/** \brief Same effect as size */
			Int resize(Int size)

			/** \brief Obsolete? */
			void reserve();

			/** \brief Adds one element to the beginning of the array. */
			void unshift(Object obj);

			/** \brief Removes one element from the beginning of the array. */
			void shift();

			/** \brief Binary packs the array. */
			ByteData pack(String fmt);

			/** \brief Pushes an element to the end of the array. */
			void push(Object obj);

			/** \brief Pops (removes) an element from the beginning of the array. */
			Object pop();

			/** \brief Joins the array elements into one string with the provided separator. */
			String join(String separator);

			/** \brief Concatenates (adds) an element to the array. */
			void concat(Object obj);

			/** \brief Appends (adds) an element to the array. */
			void append(Object obj);

			/** \brief Binary searches the array for an array element and returns the index of the element if found.
			 * \return Element index if found. -1 if not found. */
			Int bsearch(Object obj);

			/// @brief Moves (swaps) an element from an array index to another.
			/// NOTE: Out of range can crash the engine.
			void move(Int index_src, Int index_target);

			/** \brief Sorts an array in-place using the default comparer. */
			void sort();

			/** \brief Sorts an array in-place using the provided comparer.
			* 
			* Example code for sorting strings backwards
 		    * \code
			var arr = ["one", "two", "three"];
			function sorter(a, b)
			{
			    return b < a;
			}

			arr.sort(sorter); // [(String)("two"),(String)("three"),(String)("one")]
			\endcode
			*/
			void sort(Function<Object, Object> comparer);

			/** \brief Erases an element from the array by index. 
				No error will be returned if out of range.
			*/
			void erase(Int index);

			/** \brief Gets the index of an element.
				\return Index if found. -1 if not found.
			*/
			Int indexOf(Object obj);

			/** \brief Gets the index of an element starting from array position.
				\return Index if found. -1 if not found.
			*/
			Int indexOf(Object obj, Int start_index);

			/** \brief Gets the index of an element starting from array position and count of elements starting from it.
				\return Index if found. -1 if not found.
			*/
			Int indexOf(Object obj, Int start_index, Int count);

			/** \brief Shifts all the elements backwards (wraps at end of array) by the specified count.
			*/
			void rotate(Int shift_count);

			/** \brief Reverses the array elements.
			*/
			Array reverse();

			/** \brief Randomly shuffles the array. 
			*/
			void randomShuffle();

			/** \brief Shuffles the array using the provided seed (normally a seed from MRandom).
			*/
			void randomShuffle(UInt seed);

			/** \brief Returns an iterator returning [index, element].
			* \code
			var arr = ["one", "two", "three"];
			foreach (var i in arr.iterator_with_index)
			    return i; // [0, "one"]
			\endcode
			*/

			Iterator iterator_with_index;
			
			/** \brief Clears the array.*/
			void clear();

			/** \brief Returns whether the array is empty.*/
			Bool empty();

			/** \brief Appends an element (or elements from a source array).*/
			operator+(){};

			/** \brief Performs a callback on each element.
			\code
			var arr = [];
			arr.push(1);
			arr.push(2);
			arr.push(3);

			static sum = 0;
			function doSum(a)
			{
			    sum += a;
			}

			arr.each(doSum);
			return sum; // 6
			\endcode
			*/
			void each(Function<Object> cb);

			/** \brief Creates a new array populated with the results of calling a provided function on every element in the calling array. */
			Array map(Function<Object> cb);
	}
}