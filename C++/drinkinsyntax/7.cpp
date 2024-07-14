////const,auto,friend,false, ...///< c++ keywords
#include <compare>
#include <initializer_list>
#include <memory> // For std::allocator and std::polymorphic_allocator

namespace std
{
    // class template list
    template <class T, class Allocator = std::allocator<T>>
    // template <class T, class Allocator = allocator<T>>
    class list;

    template <class T, class Allocator>
    bool operator==(const list<T, Allocator> &x, const list<T, Allocator> &y);
    template <class T, class Allocator>
    // __synth_three_way_result<T> operator<=>(const list<T, Allocator> &x,
    //                                         const list<T, Allocator> &y);

    template <class T, class Allocator>
    // void swap(list<T, Allocator> &x, list<T, Allocator> &y) noexcept(noexcept(x.swap(y)));

    // erasure
    template <class T, class Allocator, class U = T>
    typename list<T, Allocator>::size_type
    erase(list<T, Allocator> &c, const U &value);
    template <class T, class Allocator, class Predicate>
    typename list<T, Allocator>::size_type
    erase_if(list<T, Allocator> &c, Predicate pred);

    namespace pmr
    {
        template <class T>
        using list = std::list<T, polymorphic_allocator<T>>;
    }
}