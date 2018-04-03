#include<memory>
namespace re{
	template <class T, class Allocator = std::allocator<T>>
		class vector{
			public:
				vector();
				explicit vector(const Allocator& a);
		};
}
